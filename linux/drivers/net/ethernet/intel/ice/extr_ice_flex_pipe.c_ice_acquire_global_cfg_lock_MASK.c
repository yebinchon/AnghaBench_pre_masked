
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_aq_res_access_type { ____Placeholder_ice_aq_res_access_type } ice_aq_res_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_hw*,int ,int,int ) ;
 int FUNC_1 (struct ice_hw*,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_hw *VAR_5,
       enum ice_aq_res_access_type VAR_6)
{
 enum ice_status VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_6,
     VAR_3);

 if (!VAR_7)
  FUNC_2(&VAR_4);
 else if (VAR_7 == VAR_1)
  FUNC_1(VAR_5, VAR_0,
     "Global config lock: No work to do\n");

 return VAR_7;
}
