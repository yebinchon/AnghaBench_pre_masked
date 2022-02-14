
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usbhsg_uep {TYPE_1__* pipe; } ;
struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usbhs_mod {int irq_ctrl_stage; int irq_dev_state; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct usbhsg_uep* mod_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_1__* FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhs_priv*) ;
 int FUNC_3 (struct usbhs_priv*,struct usbhs_mod*) ;
 int FUNC_4 (struct usbhs_priv*,unsigned long) ;
 struct usbhs_mod* FUNC_5 (struct usbhs_priv*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int) ;
 int FUNC_7 (struct usbhs_priv*,int ) ;
 struct device* FUNC_8 (struct usbhs_priv*) ;
 int FUNC_9 (struct usbhs_priv*,int) ;
 int FUNC_10 (struct usbhs_priv*,unsigned long) ;
 int VAR_2 ;
 struct usbhsg_uep* FUNC_11 (struct usbhsg_gpriv*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct usbhsg_gpriv* FUNC_12 (struct usbhs_priv*) ;
 scalar_t__ FUNC_13 (struct usbhsg_gpriv*,int ) ;
 int FUNC_14 (struct usbhsg_gpriv*,int ) ;
 int FUNC_15 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_16(struct usbhs_priv *VAR_5, u32 VAR_6)
{
 struct usbhsg_gpriv *VAR_7 = FUNC_12(VAR_5);
 struct usbhsg_uep *VAR_8 = FUNC_11(VAR_7);
 struct usbhs_mod *VAR_9 = FUNC_5(VAR_5);
 struct device *VAR_10 = FUNC_8(VAR_5);
 unsigned long VAR_11;
 int VAR_12 = 0;


 FUNC_4(VAR_5, VAR_11);

 FUNC_14(VAR_7, VAR_6);
 if (!(FUNC_13(VAR_7, VAR_1) &&
       FUNC_13(VAR_7, VAR_0)))
  VAR_12 = -1;

 FUNC_10(VAR_5, VAR_11);


 if (VAR_12 < 0)
  return 0;




 FUNC_0(VAR_10, "start gadget\n");




 FUNC_2(VAR_5);
 FUNC_7(VAR_5,
   VAR_2);


 VAR_8->pipe = FUNC_1(VAR_5);
 VAR_8->pipe->mod_private = VAR_8;
 FUNC_6(VAR_8->pipe, 0, 0, 64);







 FUNC_9(VAR_5, 1);
 FUNC_15(VAR_5);




 VAR_9->irq_dev_state = VAR_4;
 VAR_9->irq_ctrl_stage = VAR_3;
 FUNC_3(VAR_5, VAR_9);

 return 0;
}
