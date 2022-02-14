
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {unsigned int timeout; } ;
struct da9055_wdt_data {struct da9055* da9055; } ;
struct da9055 {int dev; } ;
struct TYPE_3__ {unsigned int user_time; int reg_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct da9055*,int ,int ,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 struct da9055_wdt_data* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_5,
      unsigned int VAR_6)
{
 struct da9055_wdt_data *VAR_7 = FUNC_3(VAR_5);
 struct da9055 *VAR_8 = VAR_7->da9055;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
  if (VAR_4[VAR_10].user_time == VAR_6)
   break;

 if (VAR_10 == FUNC_0(VAR_4))
  VAR_9 = -VAR_3;
 else
  VAR_9 = FUNC_1(VAR_8, VAR_0,
     VAR_1,
     VAR_4[VAR_10].reg_val <<
     VAR_2);
 if (VAR_9 < 0) {
  FUNC_2(VAR_8->dev,
   "Failed to update timescale bit, %d\n", VAR_9);
  return VAR_9;
 }

 VAR_5->timeout = VAR_6;

 return 0;
}
