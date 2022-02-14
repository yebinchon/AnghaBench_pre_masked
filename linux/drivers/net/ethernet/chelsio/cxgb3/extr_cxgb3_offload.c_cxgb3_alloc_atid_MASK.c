
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct cxgb3_client* client; void* ctx; } ;
union active_open_entry {TYPE_1__ t3c_tid; union active_open_entry* next; } ;
struct tid_info {scalar_t__ atids_in_use; scalar_t__ ntids; int atid_base; int atid_lock; union active_open_entry* afree; union active_open_entry* atid_tab; int tids_in_use; } ;
struct t3cdev {int dummy; } ;
struct cxgb3_client {int dummy; } ;
struct TYPE_4__ {struct tid_info tid_maps; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct t3cdev*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct t3cdev *VAR_1, struct cxgb3_client *VAR_2,
       void *VAR_3)
{
 int VAR_4 = -1;
 struct tid_info *VAR_5 = &(FUNC_0(VAR_1))->tid_maps;

 FUNC_2(&VAR_5->atid_lock);
 if (VAR_5->afree &&
     VAR_5->atids_in_use + FUNC_1(&VAR_5->tids_in_use) + VAR_0 <=
     VAR_5->ntids) {
  union active_open_entry *VAR_6 = VAR_5->afree;

  VAR_4 = (VAR_6 - VAR_5->atid_tab) + VAR_5->atid_base;
  VAR_5->afree = VAR_6->next;
  VAR_6->t3c_tid.ctx = VAR_3;
  VAR_6->t3c_tid.client = VAR_2;
  VAR_5->atids_in_use++;
 }
 FUNC_3(&VAR_5->atid_lock);
 return VAR_4;
}
