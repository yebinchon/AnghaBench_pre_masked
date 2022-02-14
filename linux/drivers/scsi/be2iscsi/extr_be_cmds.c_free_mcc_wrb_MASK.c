
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_queue_info {int used; } ;
struct TYPE_2__ {struct be_queue_info q; } ;
struct be_ctrl_info {unsigned int* mcc_tag; size_t mcc_free_index; int mcc_lock; int mcc_tag_available; TYPE_1__ mcc_obj; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct be_ctrl_info *VAR_2, unsigned int VAR_3)
{
 struct be_queue_info *VAR_4 = &VAR_2->mcc_obj.q;

 FUNC_0(&VAR_2->mcc_lock);
 VAR_3 = VAR_3 & VAR_1;
 VAR_2->mcc_tag[VAR_2->mcc_free_index] = VAR_3;
 if (VAR_2->mcc_free_index == (VAR_0 - 1))
  VAR_2->mcc_free_index = 0;
 else
  VAR_2->mcc_free_index++;
 VAR_2->mcc_tag_available++;
 VAR_4->used--;
 FUNC_1(&VAR_2->mcc_lock);
}
