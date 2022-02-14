
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ice_hw {int dummy; } ;
struct ice_dcbx_cfg {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ice_hw*,int ,int ,void*,int ,int *,int *,int *) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (int *,struct ice_dcbx_cfg*) ;

enum ice_status
FUNC_5(struct ice_hw *VAR_3, u8 VAR_4, u8 VAR_5,
     struct ice_dcbx_cfg *VAR_6)
{
 enum ice_status VAR_7;
 u8 *VAR_8;


 VAR_8 = FUNC_1(FUNC_3(VAR_3), VAR_2, VAR_0);
 if (!VAR_8)
  return VAR_1;

 VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_4, (void *)VAR_8,
      VAR_2, ((void*)0), ((void*)0), ((void*)0));

 if (!VAR_7)

  VAR_7 = FUNC_4(VAR_8, VAR_6);

 FUNC_0(FUNC_3(VAR_3), VAR_8);

 return VAR_7;
}
