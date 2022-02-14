
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int nstids; int v6_stids_in_use; int stid_lock; scalar_t__ stids_in_use; scalar_t__ stid_base; TYPE_1__* stid_tab; int stid_bmap; } ;
struct TYPE_2__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct tid_info *VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_2->stid_lock);
 if (VAR_3 == VAR_0) {
  VAR_5 = FUNC_2(VAR_2->stid_bmap, VAR_2->nstids);
  if (VAR_5 < VAR_2->nstids)
   FUNC_0(VAR_5, VAR_2->stid_bmap);
  else
   VAR_5 = -1;
 } else {
  VAR_5 = FUNC_1(VAR_2->stid_bmap, VAR_2->nstids, 1);
  if (VAR_5 < 0)
   VAR_5 = -1;
 }
 if (VAR_5 >= 0) {
  VAR_2->stid_tab[VAR_5].data = VAR_4;
  VAR_5 += VAR_2->stid_base;




  if (VAR_3 == VAR_1) {
   VAR_2->stids_in_use += 2;
   VAR_2->v6_stids_in_use += 2;
  } else {
   VAR_2->stids_in_use++;
  }
 }
 FUNC_4(&VAR_2->stid_lock);
 return VAR_5;
}
