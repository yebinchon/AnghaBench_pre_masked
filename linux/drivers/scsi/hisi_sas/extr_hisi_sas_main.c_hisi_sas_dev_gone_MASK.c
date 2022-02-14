
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_sas_device {int * sas_device; int dev_type; int device_id; } ;
struct hisi_hba {int sem; TYPE_1__* hw; int flags; struct device* dev; } ;
struct domain_device {struct hisi_sas_device* lldd_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* free_device ) (struct hisi_sas_device*) ;int (* clear_itct ) (struct hisi_hba*,struct hisi_sas_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 struct hisi_hba* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hisi_hba*,struct domain_device*) ;
 int FUNC_4 (struct hisi_hba*,struct domain_device*,int ,int ) ;
 int FUNC_5 (struct hisi_hba*,struct hisi_sas_device*) ;
 int FUNC_6 (struct hisi_sas_device*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct domain_device *VAR_3)
{
 struct hisi_sas_device *VAR_4 = VAR_3->lldd_dev;
 struct hisi_hba *VAR_5 = FUNC_1(VAR_3);
 struct device *VAR_6 = VAR_5->dev;

 FUNC_0(VAR_6, "dev[%d:%x] is gone\n",
   VAR_4->device_id, VAR_4->dev_type);

 FUNC_2(&VAR_5->sem);
 if (!FUNC_7(VAR_1, &VAR_5->flags)) {
  FUNC_4(VAR_5, VAR_3,
          VAR_0, 0);

  FUNC_3(VAR_5, VAR_3);

  VAR_5->hw->clear_itct(VAR_5, VAR_4);
  VAR_3->lldd_dev = ((void*)0);
 }

 if (VAR_5->hw->free_device)
  VAR_5->hw->free_device(VAR_4);
 VAR_4->dev_type = VAR_2;
 VAR_4->sas_device = ((void*)0);
 FUNC_8(&VAR_5->sem);
}
