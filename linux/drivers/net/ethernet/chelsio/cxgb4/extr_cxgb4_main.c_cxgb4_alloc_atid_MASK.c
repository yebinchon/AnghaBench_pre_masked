
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aopen_entry {void* data; union aopen_entry* next; } ;
struct tid_info {int atid_base; int atid_lock; int atids_in_use; union aopen_entry* afree; union aopen_entry* atid_tab; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct tid_info *VAR_0, void *VAR_1)
{
 int VAR_2 = -1;

 FUNC_0(&VAR_0->atid_lock);
 if (VAR_0->afree) {
  union aopen_entry *VAR_3 = VAR_0->afree;

  VAR_2 = (VAR_3 - VAR_0->atid_tab) + VAR_0->atid_base;
  VAR_0->afree = VAR_3->next;
  VAR_3->data = VAR_1;
  VAR_0->atids_in_use++;
 }
 FUNC_1(&VAR_0->atid_lock);
 return VAR_2;
}
