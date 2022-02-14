
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct hisi_sas_device {scalar_t__ dev_type; int device_id; struct domain_device* sas_device; } ;
struct hisi_hba {struct hisi_sas_device* devices; int wq; struct device* dev; } ;
struct domain_device {int dev_type; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int done; int completion; int work; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (struct hisi_hba*) ;
 int FUNC_5 (int ,int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sas_ha_struct *VAR_5)
{
 struct hisi_hba *VAR_6 = VAR_5->lldd_ha;
 struct device *VAR_7 = VAR_6->dev;
 FUNC_0(VAR_4);
 int VAR_8, VAR_9;

 FUNC_5(VAR_6->wq, &VAR_4.work);
 FUNC_6(VAR_4.completion);
 if (!VAR_4.done)
  return VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct hisi_sas_device *VAR_10 = &VAR_6->devices[VAR_9];
  struct domain_device *VAR_11 = VAR_10->sas_device;

  if ((VAR_10->dev_type == VAR_1) || !VAR_11 ||
      FUNC_2(VAR_11->dev_type))
   continue;

  VAR_8 = FUNC_3(VAR_11);
  if (VAR_8 != VAR_2)
   FUNC_1(VAR_7, "clear nexus ha: for device[%d] rc=%d\n",
     VAR_10->device_id, VAR_8);
 }

 FUNC_4(VAR_6);

 return VAR_2;
}
