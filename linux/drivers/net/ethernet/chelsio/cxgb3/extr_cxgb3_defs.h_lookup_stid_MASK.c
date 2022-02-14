
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3c_tid_entry {int dummy; } ;
union listen_entry {struct t3c_tid_entry t3c_tid; scalar_t__ next; } ;
struct tid_info {unsigned int stid_base; unsigned int nstids; size_t natids; int * atid_tab; scalar_t__ tid_tab; } ;


 union listen_entry* FUNC_0 (struct tid_info const*,unsigned int) ;

__attribute__((used)) static inline struct t3c_tid_entry *FUNC_1(const struct tid_info *VAR_0,
      unsigned int VAR_1)
{
 union listen_entry *VAR_2;

 if (VAR_1 < VAR_0->stid_base || VAR_1 >= VAR_0->stid_base + VAR_0->nstids)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if ((void *)VAR_2->next >= (void *)VAR_0->tid_tab &&
     (void *)VAR_2->next < (void *)&VAR_0->atid_tab[VAR_0->natids])
  return ((void*)0);

 return &VAR_2->t3c_tid;
}
