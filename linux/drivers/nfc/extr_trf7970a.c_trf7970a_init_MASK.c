
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int state; int io_ctrl; int modulator_sys_clk_ctrl; int iso_ctrl; int dev; scalar_t__ special_fcn_reg1; int chip_status_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct trf7970a*,int ) ;
 int FUNC_3 (struct trf7970a*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct trf7970a *VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_10->dev, "Initializing device - state: %d\n", VAR_10->state);

 VAR_11 = FUNC_2(VAR_10, VAR_5);
 if (VAR_11)
  goto err_out;

 VAR_11 = FUNC_2(VAR_10, VAR_4);
 if (VAR_11)
  goto err_out;

 VAR_11 = FUNC_3(VAR_10, VAR_8,
        VAR_10->io_ctrl | FUNC_0(0x1));
 if (VAR_11)
  goto err_out;

 VAR_11 = FUNC_3(VAR_10, VAR_7, 0);
 if (VAR_11)
  goto err_out;

 FUNC_4(1000, 2000);

 VAR_10->chip_status_ctrl &= ~VAR_3;

 VAR_11 = FUNC_3(VAR_10, VAR_6,
        VAR_10->modulator_sys_clk_ctrl);
 if (VAR_11)
  goto err_out;

 VAR_11 = FUNC_3(VAR_10, VAR_0,
        VAR_1 |
        VAR_2);
 if (VAR_11)
  goto err_out;

 VAR_11 = FUNC_3(VAR_10, VAR_9, 0);
 if (VAR_11)
  goto err_out;

 VAR_10->special_fcn_reg1 = 0;

 VAR_10->iso_ctrl = 0xff;
 return 0;

err_out:
 FUNC_1(VAR_10->dev, "Couldn't init device: %d\n", VAR_11);
 return VAR_11;
}
