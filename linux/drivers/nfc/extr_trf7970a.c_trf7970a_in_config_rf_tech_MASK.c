
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int modulator_sys_clk_ctrl; int technology; int iso_ctrl; int dev; void* guard_time; int iso_ctrl_tech; } ;


 int VAR_0 ;





 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct trf7970a*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct trf7970a *VAR_13, int VAR_14)
{
 int VAR_15 = 0;

 FUNC_0(VAR_13->dev, "rf technology: %d\n", VAR_14);

 switch (VAR_14) {
 case 132:
  VAR_13->iso_ctrl_tech = VAR_5;
  VAR_13->modulator_sys_clk_ctrl =
      (VAR_13->modulator_sys_clk_ctrl & 0xf8) |
      VAR_11;
  VAR_13->guard_time = VAR_2;
  break;
 case 131:
  VAR_13->iso_ctrl_tech = VAR_6;
  VAR_13->modulator_sys_clk_ctrl =
      (VAR_13->modulator_sys_clk_ctrl & 0xf8) |
      VAR_10;
  VAR_13->guard_time = VAR_3;
  break;
 case 130:
  VAR_13->iso_ctrl_tech = VAR_8;
  VAR_13->modulator_sys_clk_ctrl =
      (VAR_13->modulator_sys_clk_ctrl & 0xf8) |
      VAR_10;
  VAR_13->guard_time = VAR_4;
  break;
 case 129:
  VAR_13->iso_ctrl_tech = VAR_9;
  VAR_13->modulator_sys_clk_ctrl =
      (VAR_13->modulator_sys_clk_ctrl & 0xf8) |
      VAR_10;
  VAR_13->guard_time = VAR_4;
  break;
 case 128:
  VAR_13->iso_ctrl_tech = VAR_7;
  VAR_13->modulator_sys_clk_ctrl =
      (VAR_13->modulator_sys_clk_ctrl & 0xf8) |
      VAR_11;
  VAR_13->guard_time = VAR_1;
  break;
 default:
  FUNC_0(VAR_13->dev, "Unsupported rf technology: %d\n", VAR_14);
  return -VAR_0;
 }

 VAR_13->technology = VAR_14;






 if (VAR_13->iso_ctrl == 0xff)
  VAR_15 = FUNC_1(VAR_13, VAR_12, 0);

 return VAR_15;
}
