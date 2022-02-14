
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct ice_vsig_vsi {size_t vsig; int changed; struct ice_vsig_vsi* next_vsi; } ;
struct ice_hw {TYPE_3__* blk; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_block { ____Placeholder_ice_block } ice_block ;
struct TYPE_5__ {size_t* t; struct ice_vsig_vsi* vsis; TYPE_1__* vsig_tbl; } ;
struct TYPE_6__ {TYPE_2__ xlt2; } ;
struct TYPE_4__ {struct ice_vsig_vsi* first_vsi; int in_use; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct ice_hw*,int,size_t,size_t*) ;
 int FUNC_1 (struct ice_hw*,int,size_t,size_t) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_6, enum ice_block VAR_7, u16 VAR_8, u16 VAR_9)
{
 struct ice_vsig_vsi *VAR_10;
 enum ice_status VAR_11;
 u16 VAR_12, VAR_13;

 VAR_13 = VAR_9 & VAR_5;

 if (VAR_8 >= VAR_3 || VAR_13 >= VAR_4)
  return VAR_2;




 if (!VAR_6->blk[VAR_7].xlt2.vsig_tbl[VAR_13].in_use &&
     VAR_9 != VAR_0)
  return VAR_1;

 VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8, &VAR_12);
 if (VAR_11)
  return VAR_11;


 if (VAR_12 == VAR_9)
  return 0;

 if (VAR_12 != VAR_0) {

  VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_12);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_13 == VAR_0)
  return 0;


 VAR_6->blk[VAR_7].xlt2.vsis[VAR_8].vsig = VAR_9;
 VAR_6->blk[VAR_7].xlt2.vsis[VAR_8].changed = 1;


 VAR_10 = VAR_6->blk[VAR_7].xlt2.vsig_tbl[VAR_13].first_vsi;
 VAR_6->blk[VAR_7].xlt2.vsig_tbl[VAR_13].first_vsi =
  &VAR_6->blk[VAR_7].xlt2.vsis[VAR_8];
 VAR_6->blk[VAR_7].xlt2.vsis[VAR_8].next_vsi = VAR_10;
 VAR_6->blk[VAR_7].xlt2.t[VAR_8] = VAR_9;

 return 0;
}
