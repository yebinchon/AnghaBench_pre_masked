
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,int ,int,int,int*,int,int *) ;
 int FUNC_1 (struct ice_hw*,int,int) ;

__attribute__((used)) static enum ice_status
FUNC_2(struct ice_hw *VAR_0, u32 VAR_1, u16 VAR_2, u16 *VAR_3,
        bool VAR_4)
{
 enum ice_status VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);





 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_0, 0, 2 * VAR_1, 2 * VAR_2, VAR_3,
      VAR_4, ((void*)0));

 return VAR_5;
}
