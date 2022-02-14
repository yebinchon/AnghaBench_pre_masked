
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_dq {int dummy; } ;
struct hisi_sas_device {scalar_t__ dev_type; int device_id; int list; int lock; struct hisi_sas_dq* dq; struct domain_device* sas_device; struct hisi_hba* hisi_hba; int dev_status; } ;
struct hisi_hba {int last_dev_id; int queue_count; int lock; struct hisi_sas_device* devices; struct hisi_sas_dq* dq; } ;
struct domain_device {scalar_t__ dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 struct hisi_hba* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct hisi_sas_device *FUNC_5(struct domain_device *VAR_3)
{
 struct hisi_hba *VAR_4 = FUNC_1(VAR_3);
 struct hisi_sas_device *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7 = VAR_4->last_dev_id;
 int VAR_8 = (VAR_4->last_dev_id + 1) % VAR_1;
 int VAR_9;

 FUNC_3(&VAR_4->lock, VAR_6);
 for (VAR_9 = VAR_8; VAR_9 != VAR_7; VAR_9 %= VAR_1) {
  if (VAR_4->devices[VAR_9].dev_type == VAR_2) {
   int VAR_10 = VAR_9 % VAR_4->queue_count;
   struct hisi_sas_dq *VAR_11 = &VAR_4->dq[VAR_10];

   VAR_4->devices[VAR_9].device_id = VAR_9;
   VAR_5 = &VAR_4->devices[VAR_9];
   VAR_5->dev_status = VAR_0;
   VAR_5->dev_type = VAR_3->dev_type;
   VAR_5->hisi_hba = VAR_4;
   VAR_5->sas_device = VAR_3;
   VAR_5->dq = VAR_11;
   FUNC_2(&VAR_5->lock);
   FUNC_0(&VAR_4->devices[VAR_9].list);
   break;
  }
  VAR_9++;
 }
 VAR_4->last_dev_id = VAR_9;
 FUNC_4(&VAR_4->lock, VAR_6);

 return VAR_5;
}
