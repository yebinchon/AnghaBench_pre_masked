
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_charger_info {int dev; int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pm860x_charger_info *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;


 if (VAR_3 <= 0)
  VAR_5 = 0;
 else
  VAR_5 = (VAR_3 << 5) / 675;
 FUNC_1(VAR_2->i2c, VAR_1, VAR_5);
 FUNC_0(VAR_2->dev, "VBAT Min:%dmv, LOWTH:0x%x\n", VAR_3, VAR_5);

 if (VAR_4 <= 0)
  VAR_5 = 0xff;
 else
  VAR_5 = (VAR_4 << 5) / 675;
 FUNC_1(VAR_2->i2c, VAR_0, VAR_5);
 FUNC_0(VAR_2->dev, "VBAT Max:%dmv, HIGHTH:0x%x\n", VAR_4, VAR_5);

 return;
}
