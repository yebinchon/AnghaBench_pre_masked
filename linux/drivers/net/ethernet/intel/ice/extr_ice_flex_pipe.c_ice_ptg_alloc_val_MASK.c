
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ice_hw {TYPE_3__* blk; } ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_5__ {TYPE_1__* ptg_tbl; } ;
struct TYPE_6__ {TYPE_2__ xlt1; } ;
struct TYPE_4__ {int in_use; } ;



__attribute__((used)) static void FUNC_0(struct ice_hw *VAR_0, enum ice_block VAR_1, u8 VAR_2)
{
 VAR_0->blk[VAR_1].xlt1.ptg_tbl[VAR_2].in_use = 1;
}
