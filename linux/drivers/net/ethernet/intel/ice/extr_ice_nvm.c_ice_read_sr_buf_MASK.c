
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ) ;
 int FUNC_1 (struct ice_hw*,int ,int *,int *) ;
 int FUNC_2 (struct ice_hw*) ;

enum ice_status
FUNC_3(struct ice_hw *VAR_1, u16 VAR_2, u16 *VAR_3, u16 *VAR_4)
{
 enum ice_status VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_1);
 }

 return VAR_5;
}
