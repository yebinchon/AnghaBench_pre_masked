
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct hx8357_data {int state; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct lcd_device*) ;
 int FUNC_3 (struct lcd_device*) ;
 struct hx8357_data* FUNC_4 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_5(struct lcd_device *VAR_0, int VAR_1)
{
 struct hx8357_data *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;

 if (FUNC_0(VAR_1) && !FUNC_0(VAR_2->state))
  VAR_3 = FUNC_3(VAR_0);
 else if (!FUNC_0(VAR_1) && FUNC_0(VAR_2->state))
  VAR_3 = FUNC_2(VAR_0);

 if (VAR_3 == 0)
  VAR_2->state = VAR_1;
 else
  FUNC_1(&VAR_0->dev, "failed to set power mode %d\n", VAR_1);

 return VAR_3;
}
