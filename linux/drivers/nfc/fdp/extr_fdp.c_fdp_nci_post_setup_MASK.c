
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nci_dev {int dummy; } ;
struct fdp_nci_info {int clock_freq; int clock_type; scalar_t__* fw_vsc_cfg; TYPE_1__* phy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {TYPE_2__* i2c_dev; } ;


 int FUNC_0 (struct nci_dev*,int ,int ) ;
 int FUNC_1 (struct nci_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct nci_dev*) ;
 struct fdp_nci_info* FUNC_4 (struct nci_dev*) ;
 int FUNC_5 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct nci_dev *VAR_0)
{
 struct fdp_nci_info *VAR_1 = FUNC_4(VAR_0);
 struct device *VAR_2 = &VAR_1->phy->i2c_dev->dev;
 int VAR_3;


 if (VAR_1->fw_vsc_cfg && VAR_1->fw_vsc_cfg[0]) {


  VAR_3 = FUNC_1(VAR_0, VAR_1->fw_vsc_cfg[3],
      &VAR_1->fw_vsc_cfg[4]);
  if (VAR_3) {
   FUNC_5(VAR_2, "Vendor specific config set error %d\n",
    VAR_3);
   return VAR_3;
  }
 }


 VAR_3 = FUNC_0(VAR_0, VAR_1->clock_type, VAR_1->clock_freq);
 if (VAR_3) {
  FUNC_5(VAR_2, "Clock set error %d\n", VAR_3);
  return VAR_3;
 }




 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3)
  return VAR_3;





 return FUNC_2(VAR_0);
}
