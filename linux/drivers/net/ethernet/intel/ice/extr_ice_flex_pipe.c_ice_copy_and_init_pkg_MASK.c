
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ice_hw {int pkg_size; int * pkg_copy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int const*,int ,int ) ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (struct ice_hw*,int *,int ) ;

enum ice_status FUNC_4(struct ice_hw *VAR_2, const u8 *VAR_3, u32 VAR_4)
{
 enum ice_status VAR_5;
 u8 *VAR_6;

 if (!VAR_3 || !VAR_4)
  return VAR_1;

 VAR_6 = FUNC_1(FUNC_2(VAR_2), VAR_3, VAR_4, VAR_0);

 VAR_5 = FUNC_3(VAR_2, VAR_6, VAR_4);
 if (VAR_5) {

  FUNC_0(FUNC_2(VAR_2), VAR_6);
 } else {

  VAR_2->pkg_copy = VAR_6;
  VAR_2->pkg_size = VAR_4;
 }

 return VAR_5;
}
