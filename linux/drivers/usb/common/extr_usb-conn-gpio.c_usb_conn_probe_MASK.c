
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_conn_info {int id_irq; int vbus_irq; void* role_sw; void* vbus_gpiod; void* id_gpiod; void* vbus; int dw_det; int debounce_jiffies; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct usb_conn_info* FUNC_5 (struct device*,int,int ) ;
 void* FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,int,int *,int ,int ,int ,struct usb_conn_info*) ;
 int FUNC_8 (void*,int ) ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct platform_device*,struct usb_conn_info*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct usb_conn_info*,int ) ;
 void* FUNC_13 (struct device*) ;
 int FUNC_14 (void*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct usb_conn_info *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_5(VAR_11, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = VAR_11;
 VAR_12->id_gpiod = FUNC_4(VAR_11, "id", VAR_4);
 if (FUNC_1(VAR_12->id_gpiod))
  return FUNC_2(VAR_12->id_gpiod);

 VAR_12->vbus_gpiod = FUNC_4(VAR_11, "vbus", VAR_4);
 if (FUNC_1(VAR_12->vbus_gpiod))
  return FUNC_2(VAR_12->vbus_gpiod);

 if (!VAR_12->id_gpiod && !VAR_12->vbus_gpiod) {
  FUNC_3(VAR_11, "failed to get gpios\n");
  return -VAR_0;
 }

 if (VAR_12->id_gpiod)
  VAR_13 = FUNC_8(VAR_12->id_gpiod, VAR_7);
 if (!VAR_13 && VAR_12->vbus_gpiod)
  VAR_13 = FUNC_8(VAR_12->vbus_gpiod, VAR_7);
 if (VAR_13 < 0)
  VAR_12->debounce_jiffies = FUNC_10(VAR_6);

 FUNC_0(&VAR_12->dw_det, VAR_8);

 VAR_12->vbus = FUNC_6(VAR_11, "vbus");
 if (FUNC_1(VAR_12->vbus)) {
  FUNC_3(VAR_11, "failed to get vbus\n");
  return FUNC_2(VAR_12->vbus);
 }

 VAR_12->role_sw = FUNC_13(VAR_11);
 if (FUNC_1(VAR_12->role_sw)) {
  if (FUNC_2(VAR_12->role_sw) != -VAR_2)
   FUNC_3(VAR_11, "failed to get role switch\n");

  return FUNC_2(VAR_12->role_sw);
 }

 if (VAR_12->id_gpiod) {
  VAR_12->id_irq = FUNC_9(VAR_12->id_gpiod);
  if (VAR_12->id_irq < 0) {
   FUNC_3(VAR_11, "failed to get ID IRQ\n");
   VAR_13 = VAR_12->id_irq;
   goto put_role_sw;
  }

  VAR_13 = FUNC_7(VAR_11, VAR_12->id_irq, ((void*)0),
      VAR_9, VAR_5,
      VAR_10->name, VAR_12);
  if (VAR_13 < 0) {
   FUNC_3(VAR_11, "failed to request ID IRQ\n");
   goto put_role_sw;
  }
 }

 if (VAR_12->vbus_gpiod) {
  VAR_12->vbus_irq = FUNC_9(VAR_12->vbus_gpiod);
  if (VAR_12->vbus_irq < 0) {
   FUNC_3(VAR_11, "failed to get VBUS IRQ\n");
   VAR_13 = VAR_12->vbus_irq;
   goto put_role_sw;
  }

  VAR_13 = FUNC_7(VAR_11, VAR_12->vbus_irq, ((void*)0),
      VAR_9, VAR_5,
      VAR_10->name, VAR_12);
  if (VAR_13 < 0) {
   FUNC_3(VAR_11, "failed to request VBUS IRQ\n");
   goto put_role_sw;
  }
 }

 FUNC_11(VAR_10, VAR_12);


 FUNC_12(VAR_12, 0);

 return 0;

put_role_sw:
 FUNC_14(VAR_12->role_sw);
 return VAR_13;
}
