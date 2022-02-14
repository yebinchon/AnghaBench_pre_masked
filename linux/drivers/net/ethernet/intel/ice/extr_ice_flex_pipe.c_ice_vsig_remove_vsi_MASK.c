
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
struct TYPE_5__ {struct ice_vsig_vsi* vsis; TYPE_1__* vsig_tbl; } ;
struct TYPE_6__ {TYPE_2__ xlt2; } ;
struct TYPE_4__ {struct ice_vsig_vsi* first_vsi; int in_use; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static enum ice_status
FUNC_0(struct ice_hw *VAR_7, enum ice_block VAR_8, u16 VAR_9, u16 VAR_10)
{
 struct ice_vsig_vsi **VAR_11, *VAR_12, *VAR_13;
 u16 VAR_14;

 VAR_14 = VAR_10 & VAR_6;

 if (VAR_9 >= VAR_4 || VAR_14 >= VAR_5)
  return VAR_3;

 if (!VAR_7->blk[VAR_8].xlt2.vsig_tbl[VAR_14].in_use)
  return VAR_2;


 if (VAR_14 == VAR_0)
  return 0;

 VAR_11 = &VAR_7->blk[VAR_8].xlt2.vsig_tbl[VAR_14].first_vsi;
 if (!(*VAR_11))
  return VAR_1;

 VAR_13 = &VAR_7->blk[VAR_8].xlt2.vsis[VAR_9];
 VAR_12 = (*VAR_11);


 while (VAR_12) {
  if (VAR_13 == VAR_12) {
   (*VAR_11) = VAR_12->next_vsi;
   break;
  }
  VAR_11 = &VAR_12->next_vsi;
  VAR_12 = VAR_12->next_vsi;
 }


 if (!VAR_12)
  return VAR_2;

 VAR_12->vsig = VAR_0;
 VAR_12->changed = 1;
 VAR_12->next_vsi = ((void*)0);

 return 0;
}
