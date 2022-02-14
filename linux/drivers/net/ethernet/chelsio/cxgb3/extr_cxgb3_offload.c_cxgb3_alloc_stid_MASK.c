
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct cxgb3_client* client; void* ctx; } ;
union listen_entry {TYPE_1__ t3c_tid; union listen_entry* next; } ;
struct tid_info {int stid_base; int stid_lock; int stids_in_use; union listen_entry* sfree; union listen_entry* stid_tab; } ;
struct t3cdev {int dummy; } ;
struct cxgb3_client {int dummy; } ;
struct TYPE_4__ {struct tid_info tid_maps; } ;


 TYPE_2__* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct t3cdev *VAR_0, struct cxgb3_client *VAR_1,
       void *VAR_2)
{
 int VAR_3 = -1;
 struct tid_info *VAR_4 = &(FUNC_0(VAR_0))->tid_maps;

 FUNC_1(&VAR_4->stid_lock);
 if (VAR_4->sfree) {
  union listen_entry *VAR_5 = VAR_4->sfree;

  VAR_3 = (VAR_5 - VAR_4->stid_tab) + VAR_4->stid_base;
  VAR_4->sfree = VAR_5->next;
  VAR_5->t3c_tid.ctx = VAR_2;
  VAR_5->t3c_tid.client = VAR_1;
  VAR_4->stids_in_use++;
 }
 FUNC_2(&VAR_4->stid_lock);
 return VAR_3;
}
