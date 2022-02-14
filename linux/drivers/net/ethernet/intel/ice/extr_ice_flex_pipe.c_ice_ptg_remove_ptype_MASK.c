
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ice_ptg_ptype {struct ice_ptg_ptype* next_ptype; int ptg; } ;
struct ice_hw {TYPE_3__* blk; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_5__ {struct ice_ptg_ptype* ptypes; TYPE_1__* ptg_tbl; } ;
struct TYPE_6__ {TYPE_2__ xlt1; } ;
struct TYPE_4__ {struct ice_ptg_ptype* first_ptype; int in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum ice_status
FUNC_0(struct ice_hw *VAR_5, enum ice_block VAR_6, u16 VAR_7, u8 VAR_8)
{
 struct ice_ptg_ptype **VAR_9;
 struct ice_ptg_ptype *VAR_10;

 if (VAR_7 > VAR_4 - 1)
  return VAR_3;

 if (!VAR_5->blk[VAR_6].xlt1.ptg_tbl[VAR_8].in_use)
  return VAR_2;


 if (!VAR_5->blk[VAR_6].xlt1.ptg_tbl[VAR_8].first_ptype)
  return VAR_1;


 VAR_10 = VAR_5->blk[VAR_6].xlt1.ptg_tbl[VAR_8].first_ptype;
 VAR_9 = &VAR_5->blk[VAR_6].xlt1.ptg_tbl[VAR_8].first_ptype;
 while (VAR_10) {
  if (VAR_7 == (VAR_10 - VAR_5->blk[VAR_6].xlt1.ptypes)) {
   *VAR_9 = VAR_10->next_ptype;
   break;
  }

  VAR_9 = &VAR_10->next_ptype;
  VAR_10 = VAR_10->next_ptype;
 }

 VAR_5->blk[VAR_6].xlt1.ptypes[VAR_7].ptg = VAR_0;
 VAR_5->blk[VAR_6].xlt1.ptypes[VAR_7].next_ptype = ((void*)0);

 return 0;
}
