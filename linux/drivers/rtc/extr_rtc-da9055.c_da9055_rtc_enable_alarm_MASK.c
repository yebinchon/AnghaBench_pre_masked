
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct da9055_rtc {int alarm_enable; TYPE_1__* da9055; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct da9055_rtc *VAR_2, bool VAR_3)
{
 int VAR_4;
 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_2->da9055, VAR_0,
     VAR_1,
     VAR_1);
  if (VAR_4 != 0)
   FUNC_1(VAR_2->da9055->dev, "Failed to enable ALM: %d\n",
    VAR_4);
  VAR_2->alarm_enable = 1;
 } else {
  VAR_4 = FUNC_0(VAR_2->da9055, VAR_0,
     VAR_1, 0);
  if (VAR_4 != 0)
   FUNC_1(VAR_2->da9055->dev,
    "Failed to disable ALM: %d\n", VAR_4);
  VAR_2->alarm_enable = 0;
 }
 return VAR_4;
}
