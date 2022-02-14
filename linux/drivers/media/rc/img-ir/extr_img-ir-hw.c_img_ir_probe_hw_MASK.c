
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rc_dev {char* device_name; int change_protocol; int s_wakeup_filter; int s_filter; int allowed_protocols; int map_name; struct img_ir_priv* priv; } ;
struct TYPE_3__ {int notifier_call; } ;
struct img_ir_priv_hw {int clk_hz; TYPE_1__ clk_nb; struct rc_dev* rdev; int suspend_timer; int end_timer; } ;
struct img_ir_priv {int clk; int dev; struct img_ir_priv_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct img_ir_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (struct img_ir_priv*) ;
 int FUNC_10 (struct img_ir_priv*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rc_dev* FUNC_11 (int ) ;
 int FUNC_12 (struct rc_dev*) ;
 int FUNC_13 (struct rc_dev*) ;
 int FUNC_14 (int *,int ,int ) ;

int FUNC_15(struct img_ir_priv *VAR_9)
{
 struct img_ir_priv_hw *VAR_10 = &VAR_9->hw;
 struct rc_dev *VAR_11;
 int VAR_12;


 FUNC_8();


 FUNC_9(VAR_9);


 FUNC_14(&VAR_10->end_timer, VAR_5, 0);
 FUNC_14(&VAR_10->suspend_timer, VAR_8, 0);


 if (!FUNC_0(VAR_9->clk)) {
  VAR_10->clk_hz = FUNC_1(VAR_9->clk);







 } else {
  VAR_10->clk_hz = 32768;
 }


 VAR_10->rdev = VAR_11 = FUNC_11(VAR_1);
 if (!VAR_11) {
  FUNC_4(VAR_9->dev, "cannot allocate input device\n");
  VAR_12 = -VAR_0;
  goto err_alloc_rc;
 }
 VAR_11->priv = VAR_9;
 VAR_11->map_name = VAR_2;
 VAR_11->allowed_protocols = FUNC_7(VAR_9);
 VAR_11->device_name = "IMG Infrared Decoder";
 VAR_11->s_filter = VAR_6;
 VAR_11->s_wakeup_filter = VAR_7;


 VAR_12 = FUNC_13(VAR_11);
 if (VAR_12) {
  FUNC_4(VAR_9->dev, "failed to register IR input device\n");
  goto err_register_rc;
 }





 VAR_11->change_protocol = VAR_3;

 FUNC_6(VAR_9->dev, 1);

 return 0;

err_register_rc:
 FUNC_10(VAR_9, ((void*)0), 0);
 VAR_10->rdev = ((void*)0);
 FUNC_12(VAR_11);
err_alloc_rc:




 return VAR_12;
}
