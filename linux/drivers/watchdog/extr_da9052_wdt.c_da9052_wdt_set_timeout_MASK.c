
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {unsigned int timeout; } ;
struct da9052_wdt_data {int jpast; struct da9052* da9052; } ;
struct da9052 {int dev; } ;
struct TYPE_3__ {unsigned int time; int reg_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct da9052*,int ,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 struct da9052_wdt_data* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_5,
      unsigned int VAR_6)
{
 struct da9052_wdt_data *VAR_7 = FUNC_4(VAR_5);
 struct da9052 *VAR_8 = VAR_7->da9052;
 int VAR_9, VAR_10;





 VAR_9 = FUNC_1(VAR_8, VAR_1,
    VAR_0, 0);
 if (VAR_9 < 0) {
  FUNC_2(VAR_8->dev, "Failed to disable watchdog bit, %d\n",
   VAR_9);
  return VAR_9;
 }
 if (VAR_6) {




  FUNC_3(150);


  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
   if (VAR_3[VAR_10].time == VAR_6)
    break;

  if (VAR_10 == FUNC_0(VAR_3))
   VAR_9 = -VAR_2;
  else
   VAR_9 = FUNC_1(VAR_8, VAR_1,
      VAR_0,
      VAR_3[VAR_10].reg_val);
  if (VAR_9 < 0) {
   FUNC_2(VAR_8->dev,
    "Failed to update timescale bit, %d\n", VAR_9);
   return VAR_9;
  }

  VAR_5->timeout = VAR_6;
  VAR_7->jpast = VAR_4;
 }

 return 0;
}
