
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union listen_entry {union listen_entry* next; } ;
union active_open_entry {union active_open_entry* next; } ;
struct tid_info {unsigned int ntids; unsigned int nstids; unsigned int stid_base; unsigned int natids; unsigned int atid_base; union active_open_entry* atid_tab; union active_open_entry* afree; union listen_entry* stid_tab; union listen_entry* sfree; int atid_lock; int stid_lock; int tids_in_use; scalar_t__ atids_in_use; scalar_t__ stids_in_use; int * tid_tab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tid_info *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned long VAR_8 = VAR_3 * sizeof(*VAR_2->tid_tab) +
     VAR_4 * sizeof(*VAR_2->atid_tab) + VAR_5 * sizeof(*VAR_2->stid_tab);

 VAR_2->tid_tab = FUNC_1(VAR_8, VAR_1);
 if (!VAR_2->tid_tab)
  return -VAR_0;

 VAR_2->stid_tab = (union listen_entry *)&VAR_2->tid_tab[VAR_3];
 VAR_2->atid_tab = (union active_open_entry *)&VAR_2->stid_tab[VAR_5];
 VAR_2->ntids = VAR_3;
 VAR_2->nstids = VAR_5;
 VAR_2->stid_base = VAR_7;
 VAR_2->sfree = ((void*)0);
 VAR_2->natids = VAR_4;
 VAR_2->atid_base = VAR_6;
 VAR_2->afree = ((void*)0);
 VAR_2->stids_in_use = VAR_2->atids_in_use = 0;
 FUNC_0(&VAR_2->tids_in_use, 0);
 FUNC_2(&VAR_2->stid_lock);
 FUNC_2(&VAR_2->atid_lock);




 if (VAR_5) {
  while (--VAR_5)
   VAR_2->stid_tab[VAR_5 - 1].next = &VAR_2->stid_tab[VAR_5];
  VAR_2->sfree = VAR_2->stid_tab;
 }
 if (VAR_4) {
  while (--VAR_4)
   VAR_2->atid_tab[VAR_4 - 1].next = &VAR_2->atid_tab[VAR_4];
  VAR_2->afree = VAR_2->atid_tab;
 }
 return 0;
}
