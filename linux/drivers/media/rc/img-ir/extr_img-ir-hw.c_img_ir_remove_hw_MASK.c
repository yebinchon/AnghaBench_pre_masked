
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int dummy; } ;
struct img_ir_priv_hw {int clk_nb; struct rc_dev* rdev; } ;
struct img_ir_priv {int clk; struct img_ir_priv_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct img_ir_priv*,int *,int ) ;
 int FUNC_3 (struct rc_dev*) ;

void FUNC_4(struct img_ir_priv *VAR_0)
{
 struct img_ir_priv_hw *VAR_1 = &VAR_0->hw;
 struct rc_dev *VAR_2 = VAR_1->rdev;
 if (!VAR_2)
  return;
 FUNC_2(VAR_0, ((void*)0), 0);
 VAR_1->rdev = ((void*)0);
 FUNC_3(VAR_2);




}
