
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {unsigned int hash_base; int conns_in_use; int tids_in_use; int hash_tids_in_use; void** tid_tab; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct tid_info *VAR_1, void *VAR_2,
        unsigned int VAR_3, unsigned short VAR_4)
{
 VAR_1->tid_tab[VAR_3] = VAR_2;
 if (VAR_1->hash_base && (VAR_3 >= VAR_1->hash_base)) {
  if (VAR_4 == VAR_0)
   FUNC_0(2, &VAR_1->hash_tids_in_use);
  else
   FUNC_1(&VAR_1->hash_tids_in_use);
 } else {
  if (VAR_4 == VAR_0)
   FUNC_0(2, &VAR_1->tids_in_use);
  else
   FUNC_1(&VAR_1->tids_in_use);
 }
 FUNC_1(&VAR_1->conns_in_use);
}
