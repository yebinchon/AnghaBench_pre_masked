
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aopen_entry {union aopen_entry* next; } ;
struct tid_info {unsigned int atid_base; int atid_lock; int atids_in_use; union aopen_entry* afree; union aopen_entry* atid_tab; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct tid_info *VAR_0, unsigned int VAR_1)
{
 union aopen_entry *VAR_2 = &VAR_0->atid_tab[VAR_1 - VAR_0->atid_base];

 FUNC_0(&VAR_0->atid_lock);
 VAR_2->next = VAR_0->afree;
 VAR_0->afree = VAR_2;
 VAR_0->atids_in_use--;
 FUNC_1(&VAR_0->atid_lock);
}
