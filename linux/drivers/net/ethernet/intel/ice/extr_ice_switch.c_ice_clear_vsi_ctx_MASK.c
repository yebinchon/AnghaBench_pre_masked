
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_vsi_ctx {int dummy; } ;
struct ice_hw {int ** vsi_ctx; } ;


 int FUNC_0 (int ,struct ice_vsi_ctx*) ;
 int FUNC_1 (struct ice_hw*,size_t) ;
 struct ice_vsi_ctx* FUNC_2 (struct ice_hw*,size_t) ;
 int FUNC_3 (struct ice_hw*) ;

__attribute__((used)) static void FUNC_4(struct ice_hw *VAR_0, u16 VAR_1)
{
 struct ice_vsi_ctx *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(FUNC_3(VAR_0), VAR_2);
  VAR_0->vsi_ctx[VAR_1] = ((void*)0);
 }
}
