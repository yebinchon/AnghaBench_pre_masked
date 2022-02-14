
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pusbdev; } ;
struct _adapter {int rtl8712_fw_ready; TYPE_2__ dvobjpriv; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ,struct device*,int ,struct _adapter*,int ) ;
 int VAR_3 ;

int FUNC_4(struct _adapter *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dvobjpriv.pusbdev->dev;
 int VAR_6;

 FUNC_2(&VAR_4->rtl8712_fw_ready);
 FUNC_1(VAR_5, "r8712u: Loading firmware from \"%s\"\n", VAR_2);
 VAR_6 = FUNC_3(VAR_1, 1, VAR_2, VAR_5,
         VAR_0, VAR_4, VAR_3);
 if (VAR_6)
  FUNC_0(VAR_5, "r8712u: Firmware request error %d\n", VAR_6);
 return VAR_6;
}
