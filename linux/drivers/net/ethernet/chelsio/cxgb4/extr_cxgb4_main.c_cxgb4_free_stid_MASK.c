
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {unsigned int sftid_base; unsigned int nstids; int v6_stids_in_use; int stid_lock; int sftids_in_use; scalar_t__ stids_in_use; TYPE_1__* stid_tab; int stid_bmap; scalar_t__ stid_base; scalar_t__ nsftids; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct tid_info *VAR_2, unsigned int VAR_3, int VAR_4)
{

 if (VAR_2->nsftids && (VAR_3 >= VAR_2->sftid_base)) {
  VAR_3 -= VAR_2->sftid_base;
  VAR_3 += VAR_2->nstids;
 } else {
  VAR_3 -= VAR_2->stid_base;
 }

 FUNC_2(&VAR_2->stid_lock);
 if (VAR_4 == VAR_0)
  FUNC_0(VAR_3, VAR_2->stid_bmap);
 else
  FUNC_1(VAR_2->stid_bmap, VAR_3, 1);
 VAR_2->stid_tab[VAR_3].data = ((void*)0);
 if (VAR_3 < VAR_2->nstids) {
  if (VAR_4 == VAR_1) {
   VAR_2->stids_in_use -= 2;
   VAR_2->v6_stids_in_use -= 2;
  } else {
   VAR_2->stids_in_use--;
  }
 } else {
  VAR_2->sftids_in_use--;
 }

 FUNC_3(&VAR_2->stid_lock);
}
