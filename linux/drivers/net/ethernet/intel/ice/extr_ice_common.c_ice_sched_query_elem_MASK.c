
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_elem {TYPE_1__* generic; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {int node_teid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,int,struct ice_aqc_get_elem*,int,int*,int *) ;
 int FUNC_2 (struct ice_hw*,int ,char*) ;
 int FUNC_3 (struct ice_aqc_get_elem*,int ,int) ;

enum ice_status
FUNC_4(struct ice_hw *VAR_1, u32 VAR_2,
       struct ice_aqc_get_elem *VAR_3)
{
 u16 VAR_4, VAR_5 = 0;
 enum ice_status VAR_6;

 VAR_4 = sizeof(*VAR_3);
 FUNC_3(VAR_3, 0, VAR_4);
 VAR_3->generic[0].node_teid = FUNC_0(VAR_2);
 VAR_6 = FUNC_1(VAR_1, 1, VAR_3, VAR_4, &VAR_5,
       ((void*)0));
 if (VAR_6 || VAR_5 != 1)
  FUNC_2(VAR_1, VAR_0, "query element failed\n");
 return VAR_6;
}
