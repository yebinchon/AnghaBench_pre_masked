
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hisi_sas_device {scalar_t__ device_id; scalar_t__ dev_type; int dev_status; } ;
struct hisi_hba {TYPE_1__* hw; struct device* dev; } ;
struct ex_phy {int attached_sas_addr; } ;
struct TYPE_4__ {int num_phys; struct ex_phy* ex_phy; } ;
struct domain_device {int sas_addr; TYPE_2__ ex_dev; int dev_type; struct hisi_sas_device* lldd_dev; struct domain_device* parent; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* setup_itct ) (struct hisi_hba*,struct hisi_sas_device*) ;struct hisi_sas_device* (* alloc_dev ) (struct domain_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct hisi_hba* FUNC_4 (struct domain_device*) ;
 struct hisi_sas_device* FUNC_5 (struct domain_device*) ;
 int FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct domain_device*) ;
 struct hisi_sas_device* FUNC_8 (struct domain_device*) ;
 int FUNC_9 (struct hisi_hba*,struct hisi_sas_device*) ;

__attribute__((used)) static int FUNC_10(struct domain_device *VAR_3)
{
 struct hisi_hba *VAR_4 = FUNC_4(VAR_3);
 struct domain_device *VAR_5 = VAR_3->parent;
 struct hisi_sas_device *VAR_6;
 struct device *VAR_7 = VAR_4->dev;
 int VAR_8;

 if (VAR_4->hw->alloc_dev)
  VAR_6 = VAR_4->hw->alloc_dev(VAR_3);
 else
  VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6) {
  FUNC_1(VAR_7, "fail alloc dev: max support %d devices\n",
   VAR_2);
  return -VAR_0;
 }

 VAR_3->lldd_dev = VAR_6;
 VAR_4->hw->setup_itct(VAR_4, VAR_6);

 if (VAR_5 && FUNC_3(VAR_5->dev_type)) {
  int VAR_9;
  u8 VAR_10 = VAR_5->ex_dev.num_phys;
  struct ex_phy *VAR_11;

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   VAR_11 = &VAR_5->ex_dev.ex_phy[VAR_9];
   if (FUNC_0(VAR_11->attached_sas_addr) ==
    FUNC_0(VAR_3->sas_addr))
    break;
  }

  if (VAR_9 == VAR_10) {
   FUNC_2(VAR_7, "dev found: no attached "
     "dev:%016llx at ex:%016llx\n",
     FUNC_0(VAR_3->sas_addr),
     FUNC_0(VAR_5->sas_addr));
   VAR_8 = -VAR_0;
   goto err_out;
  }
 }

 FUNC_2(VAR_7, "dev[%d:%x] found\n",
  VAR_6->device_id, VAR_6->dev_type);

 VAR_8 = FUNC_7(VAR_3);
 if (VAR_8)
  goto err_out;
 VAR_6->dev_status = VAR_1;
 return 0;

err_out:
 FUNC_6(VAR_3);
 return VAR_8;
}
