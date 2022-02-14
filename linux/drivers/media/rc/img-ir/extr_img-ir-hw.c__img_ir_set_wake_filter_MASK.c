
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_ir_priv_hw {int flags; struct img_ir_filter* filters; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;
struct img_ir_filter {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct img_ir_priv *VAR_2,
        struct img_ir_filter *VAR_3)
{
 struct img_ir_priv_hw *VAR_4 = &VAR_2->hw;
 if (VAR_3) {

  VAR_4->filters[VAR_1] = *VAR_3;
  VAR_4->flags |= VAR_0;
 } else {

  VAR_4->flags &= ~VAR_0;
 }
}
