
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct ice_hw {int pf_id; TYPE_2__* blk; } ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_6__ {int in_use; int prop_lst; } ;
struct TYPE_4__ {TYPE_3__* vsig_tbl; } ;
struct TYPE_5__ {TYPE_1__ xlt2; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u16 FUNC_2(struct ice_hw *VAR_1, enum ice_block VAR_2, u16 VAR_3)
{
 u16 VAR_4 = VAR_3 & VAR_0;

 if (!VAR_1->blk[VAR_2].xlt2.vsig_tbl[VAR_4].in_use) {
  FUNC_1(&VAR_1->blk[VAR_2].xlt2.vsig_tbl[VAR_4].prop_lst);
  VAR_1->blk[VAR_2].xlt2.vsig_tbl[VAR_4].in_use = 1;
 }

 return FUNC_0(VAR_4, VAR_1->pf_id);
}
