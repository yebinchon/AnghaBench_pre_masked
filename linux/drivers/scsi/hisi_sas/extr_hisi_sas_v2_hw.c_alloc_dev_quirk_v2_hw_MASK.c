
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_sas_dq {int dummy; } ;
struct hisi_sas_device {scalar_t__ dev_type; int device_id; int sata_idx; int list; int lock; struct hisi_sas_dq* dq; struct domain_device* sas_device; struct hisi_hba* hisi_hba; int dev_status; } ;
struct hisi_hba {int queue_count; int lock; struct hisi_sas_device* devices; struct hisi_sas_dq* dq; } ;
struct domain_device {scalar_t__ dev_type; TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {struct hisi_hba* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct hisi_hba*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct
hisi_sas_device *FUNC_6(struct domain_device *VAR_3)
{
 struct hisi_hba *VAR_4 = VAR_3->port->ha->lldd_ha;
 struct hisi_sas_device *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = FUNC_1(VAR_3);
 int VAR_8 = -1;
 unsigned long VAR_9;

 FUNC_4(&VAR_4->lock, VAR_9);

 if (VAR_7)
  if (!FUNC_2(VAR_4, &VAR_8))
   goto out;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {



  if (VAR_7 && (VAR_6 & 1))
   continue;
  if (VAR_4->devices[VAR_6].dev_type == VAR_2) {
   int VAR_10 = VAR_6 % VAR_4->queue_count;
   struct hisi_sas_dq *VAR_11 = &VAR_4->dq[VAR_10];

   VAR_4->devices[VAR_6].device_id = VAR_6;
   VAR_5 = &VAR_4->devices[VAR_6];
   VAR_5->dev_status = VAR_0;
   VAR_5->dev_type = VAR_3->dev_type;
   VAR_5->hisi_hba = VAR_4;
   VAR_5->sas_device = VAR_3;
   VAR_5->sata_idx = VAR_8;
   VAR_5->dq = VAR_11;
   FUNC_3(&VAR_5->lock);
   FUNC_0(&VAR_4->devices[VAR_6].list);
   break;
  }
 }

out:
 FUNC_5(&VAR_4->lock, VAR_9);

 return VAR_5;
}
