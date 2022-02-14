
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ngene {int cmd_timeout_workaround; TYPE_2__* pci_dev; TYPE_1__* card_info; } ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int fw_version; } ;


 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (struct ngene*,int *,scalar_t__) ;
 int FUNC_3 (struct firmware const*) ;
 scalar_t__ FUNC_4 (struct firmware const**,char*,struct device*) ;

__attribute__((used)) static int FUNC_5(struct ngene *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pci_dev->dev;
 u32 VAR_2;
 const struct firmware *VAR_3 = ((void*)0);
 u8 *VAR_4;
 char *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = VAR_0->card_info->fw_version;

 switch (VAR_7) {
 default:
 case 15:
  VAR_7 = 15;
  VAR_2 = 23466;
  VAR_5 = "ngene_15.fw";
  VAR_0->cmd_timeout_workaround = 1;
  break;
 case 16:
  VAR_2 = 23498;
  VAR_5 = "ngene_16.fw";
  VAR_0->cmd_timeout_workaround = 1;
  break;
 case 17:
  VAR_2 = 24446;
  VAR_5 = "ngene_17.fw";
  VAR_0->cmd_timeout_workaround = 1;
  break;
 case 18:
  VAR_2 = 0;
  VAR_5 = "ngene_18.fw";
  break;
 }

 if (FUNC_4(&VAR_3, VAR_5, &VAR_0->pci_dev->dev) < 0) {
  FUNC_0(VAR_1, "Could not load firmware file %s.\n", VAR_5);
  FUNC_1(VAR_1, "Copy %s to your hotplug directory!\n",
    VAR_5);
  return -1;
 }
 if (VAR_2 == 0)
  VAR_2 = VAR_3->size;
 if (VAR_2 != VAR_3->size) {
  FUNC_0(VAR_1, "Firmware %s has invalid size!", VAR_5);
  VAR_6 = -1;
 } else {
  FUNC_1(VAR_1, "Loading firmware file %s.\n", VAR_5);
  VAR_4 = (u8 *) VAR_3->data;
  VAR_6 = FUNC_2(VAR_0, VAR_4, VAR_2);
 }

 FUNC_3(VAR_3);

 return VAR_6;
}
