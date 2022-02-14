
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_priv_hw {int * ct_quirks; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct img_ir_priv *VAR_6)
{
 struct img_ir_priv_hw *VAR_7 = &VAR_6->hw;




 VAR_7->ct_quirks[VAR_2]
  |= VAR_5;
 VAR_7->ct_quirks[VAR_1]
  |= VAR_4;
 VAR_7->ct_quirks[VAR_0]
  |= VAR_3;
}
