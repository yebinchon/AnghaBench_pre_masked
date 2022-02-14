
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int irqflags; int irq; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,int ,int ,int ,struct usbhs_priv*) ;
 int VAR_0 ;
 int FUNC_3 (struct usbhs_priv*) ;
 int FUNC_4 (struct usbhs_priv*) ;
 int FUNC_5 (struct usbhs_priv*) ;
 int FUNC_6 (struct usbhs_priv*) ;
 struct device* FUNC_7 (struct usbhs_priv*) ;

int FUNC_8(struct usbhs_priv *VAR_1)
{
 struct device *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;




 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0)
  goto mod_init_host_err;


 VAR_3 = FUNC_2(VAR_2, VAR_1->irq, VAR_0,
     VAR_1->irqflags, FUNC_1(VAR_2), VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2, "irq request err\n");
  goto mod_init_gadget_err;
 }

 return VAR_3;

mod_init_gadget_err:
 FUNC_4(VAR_1);
mod_init_host_err:
 FUNC_6(VAR_1);

 return VAR_3;
}
