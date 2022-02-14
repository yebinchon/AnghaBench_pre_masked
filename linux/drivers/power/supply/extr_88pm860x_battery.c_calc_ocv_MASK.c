
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int resistor; int dev; int lock; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct pm860x_battery_info*,int*) ;
 int FUNC_2 (struct pm860x_battery_info*,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pm860x_battery_info *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_5 = 0, VAR_10 = 0, VAR_8 = 0; VAR_5 < 10; VAR_5++) {
  VAR_4 = FUNC_2(VAR_2, VAR_1, &VAR_6);
  if (VAR_4)
   goto out;
  VAR_8 += VAR_6;
  VAR_4 = FUNC_1(VAR_2, &VAR_6);
  if (VAR_4)
   goto out;
  VAR_10 += VAR_6;
 }
 VAR_7 = VAR_8 / 10;
 VAR_9 = VAR_10 / 10;

 FUNC_3(&VAR_2->lock);
 if (VAR_2->present)
  *VAR_3 = VAR_7 - VAR_9 * VAR_2->resistor / 1000;
 else
  *VAR_3 = VAR_7;
 FUNC_4(&VAR_2->lock);
 FUNC_0(VAR_2->dev, "VBAT average:%d, OCV:%d\n", VAR_7, *VAR_3);
 return 0;
out:
 return VAR_4;
}
