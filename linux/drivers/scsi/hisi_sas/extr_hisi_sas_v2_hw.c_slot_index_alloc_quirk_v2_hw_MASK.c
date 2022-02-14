
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_device {int sata_idx; } ;
struct hisi_hba {int slot_index_count; int lock; void* slot_index_tags; } ;
struct domain_device {struct hisi_sas_device* lldd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct domain_device*) ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct hisi_hba *VAR_3,
        struct domain_device *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4);
 void *VAR_6 = VAR_3->slot_index_tags;
 struct hisi_sas_device *VAR_7 = VAR_4->lldd_dev;
 int VAR_8 = VAR_7->sata_idx;
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 if (!VAR_5) {





  VAR_9 = 1;
  VAR_10 = VAR_3->slot_index_count;
 } else {
  if (VAR_8 >= VAR_1)
   return -VAR_0;







  VAR_9 = 64 * (VAR_8 + 1);
  VAR_10 = 64 * (VAR_8 + 2);
 }

 FUNC_3(&VAR_3->lock, VAR_11);
 while (1) {
  VAR_9 = FUNC_1(VAR_6,
     VAR_3->slot_index_count, VAR_9);
  if (VAR_9 >= VAR_10) {
   FUNC_4(&VAR_3->lock, VAR_11);
   return -VAR_2;
  }



  if (VAR_5 ^ (VAR_9 & 1))
   break;
  VAR_9++;
 }

 FUNC_2(VAR_9, VAR_6);
 FUNC_4(&VAR_3->lock, VAR_11);
 return VAR_9;
}
