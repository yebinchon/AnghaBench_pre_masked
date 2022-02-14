
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct most_dci_obj {int reg_addr; int usb_device; } ;
struct TYPE_2__ {char* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*) ;
 scalar_t__ FUNC_1 (int ,char const*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (char const*,char*) ;
 struct most_dci_obj* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5,
     char *VAR_6)
{
 const char *VAR_7 = VAR_5->attr.name;
 struct most_dci_obj *VAR_8 = FUNC_4(VAR_4);
 u16 VAR_9;
 u16 VAR_10;
 int VAR_11;

 if (!FUNC_3(VAR_7, "arb_address"))
  return FUNC_2(VAR_6, VAR_1, "%04x\n", VAR_8->reg_addr);

 if (!FUNC_3(VAR_7, "arb_value"))
  VAR_10 = VAR_8->reg_addr;
 else if (FUNC_1(VAR_2, VAR_7, &VAR_10) &&
   FUNC_1(VAR_3, VAR_7, &VAR_10))
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_8->usb_device, VAR_10, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_2(VAR_6, VAR_1, "%04x\n", VAR_9);
}
