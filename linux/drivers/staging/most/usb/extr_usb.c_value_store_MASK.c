
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_device {int dummy; } ;
struct most_dci_obj {int reg_addr; struct usb_device* usb_device; } ;
struct TYPE_2__ {char* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (char const*,int,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (char const*,char*) ;
 struct most_dci_obj* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 const char *VAR_8 = VAR_3->attr.name;
 struct most_dci_obj *VAR_9 = FUNC_5(VAR_2);
 struct usb_device *VAR_10 = VAR_9->usb_device;
 int VAR_11 = FUNC_2(VAR_4, 16, &VAR_6);

 if (VAR_11)
  return VAR_11;

 if (!FUNC_4(VAR_8, "arb_address")) {
  VAR_9->reg_addr = VAR_6;
  return VAR_5;
 }

 if (!FUNC_4(VAR_8, "arb_value"))
  VAR_11 = FUNC_0(VAR_10, VAR_9->reg_addr, VAR_6);
 else if (!FUNC_4(VAR_8, "sync_ep"))
  VAR_11 = FUNC_3(VAR_10, VAR_6);
 else if (!FUNC_1(VAR_1, VAR_8, &VAR_7))
  VAR_11 = FUNC_0(VAR_10, VAR_7, VAR_6);
 else
  return -VAR_0;

 if (VAR_11 < 0)
  return VAR_11;

 return VAR_5;
}
