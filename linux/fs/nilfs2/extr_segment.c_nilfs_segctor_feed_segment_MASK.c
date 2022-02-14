
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_sc_info {TYPE_2__* sc_curseg; int sc_segbufs; int sc_nblk_this_inc; } ;
struct TYPE_5__ {scalar_t__ nblocks; } ;
struct TYPE_6__ {TYPE_1__ sb_sum; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (struct nilfs_sc_info*) ;

__attribute__((used)) static int FUNC_3(struct nilfs_sc_info *VAR_1)
{
 VAR_1->sc_nblk_this_inc += VAR_1->sc_curseg->sb_sum.nblocks;
 if (FUNC_1(VAR_1->sc_curseg, &VAR_1->sc_segbufs))
  return -VAR_0;



 VAR_1->sc_curseg = FUNC_0(VAR_1->sc_curseg);
 return FUNC_2(VAR_1);
}
