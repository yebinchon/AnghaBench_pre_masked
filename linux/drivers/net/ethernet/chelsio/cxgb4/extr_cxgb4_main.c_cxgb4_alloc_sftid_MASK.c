
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int nstids; int nsftids; int stid_lock; int sftids_in_use; scalar_t__ sftid_base; TYPE_1__* stid_tab; int stid_bmap; } ;
struct TYPE_2__ {void* data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct tid_info *VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_1->stid_lock);
 if (VAR_2 == VAR_0) {
  VAR_4 = FUNC_1(VAR_1->stid_bmap,
    VAR_1->nstids + VAR_1->nsftids, VAR_1->nstids);
  if (VAR_4 < (VAR_1->nstids + VAR_1->nsftids))
   FUNC_0(VAR_4, VAR_1->stid_bmap);
  else
   VAR_4 = -1;
 } else {
  VAR_4 = -1;
 }
 if (VAR_4 >= 0) {
  VAR_1->stid_tab[VAR_4].data = VAR_3;
  VAR_4 -= VAR_1->nstids;
  VAR_4 += VAR_1->sftid_base;
  VAR_1->sftids_in_use++;
 }
 FUNC_3(&VAR_1->stid_lock);
 return VAR_4;
}
