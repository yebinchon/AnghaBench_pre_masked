
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ice_hw {TYPE_4__* blk; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_7__ {size_t* t; TYPE_2__* ptypes; TYPE_1__* ptg_tbl; } ;
struct TYPE_8__ {TYPE_3__ xlt1; } ;
struct TYPE_6__ {size_t ptg; struct TYPE_6__* next_ptype; } ;
struct TYPE_5__ {TYPE_2__* first_ptype; int in_use; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_hw*,int,int,size_t*) ;
 int FUNC_1 (struct ice_hw*,int,int,size_t) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_4, enum ice_block VAR_5, u16 VAR_6, u8 VAR_7)
{
 enum ice_status VAR_8;
 u8 VAR_9;

 if (VAR_6 > VAR_3 - 1)
  return VAR_2;

 if (!VAR_4->blk[VAR_5].xlt1.ptg_tbl[VAR_7].in_use && VAR_7 != VAR_0)
  return VAR_1;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_9);
 if (VAR_8)
  return VAR_8;


 if (VAR_9 == VAR_7)
  return 0;


 if (VAR_9 != VAR_0)
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_9);


 if (VAR_7 == VAR_0)
  return 0;


 VAR_4->blk[VAR_5].xlt1.ptypes[VAR_6].next_ptype =
  VAR_4->blk[VAR_5].xlt1.ptg_tbl[VAR_7].first_ptype;
 VAR_4->blk[VAR_5].xlt1.ptg_tbl[VAR_7].first_ptype =
  &VAR_4->blk[VAR_5].xlt1.ptypes[VAR_6];

 VAR_4->blk[VAR_5].xlt1.ptypes[VAR_6].ptg = VAR_7;
 VAR_4->blk[VAR_5].xlt1.t[VAR_6] = VAR_7;

 return 0;
}
