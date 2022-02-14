
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {TYPE_1__* usb_intf; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct cxacru_data {struct usbatm_data* usbatm; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct firmware const**,char*,struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct usbatm_data*,char*,char*) ;
 int FUNC_3 (struct usbatm_data*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct cxacru_data *VAR_1,
    char *VAR_2, const struct firmware **VAR_3)
{
 struct usbatm_data *VAR_4 = VAR_1->usbatm;
 struct device *VAR_5 = &VAR_4->usb_intf->dev;
 char VAR_6[16];

 FUNC_1(VAR_6, "cxacru-%s.bin", VAR_2);
 FUNC_2(VAR_4, "cxacru_find_firmware: looking for %s\n", VAR_6);

 if (FUNC_0(VAR_3, VAR_6, VAR_5)) {
  FUNC_2(VAR_4, "no stage %s firmware found\n", VAR_2);
  return -VAR_0;
 }

 FUNC_3(VAR_4, "found firmware %s\n", VAR_6);

 return 0;
}
