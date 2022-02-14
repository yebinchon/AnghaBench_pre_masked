
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_hw {int dummy; } ;
typedef enum ice_sw_lkup_type { ____Placeholder_ice_sw_lkup_type } ice_sw_lkup_type ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,int *,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ice_hw*,int *,int ,int ,int,int ,int) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_2, u16 *VAR_3, u16 VAR_4,
    u16 *VAR_5, enum ice_sw_lkup_type VAR_6)
{
 enum ice_status VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_6,
         VAR_1);
 if (VAR_7)
  return VAR_7;


 return FUNC_1(VAR_2, VAR_3, VAR_4,
     *VAR_5, 0,
     VAR_0, VAR_6);
}
