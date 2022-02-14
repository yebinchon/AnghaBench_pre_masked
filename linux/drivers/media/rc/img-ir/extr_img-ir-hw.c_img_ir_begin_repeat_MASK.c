
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; int rtimings; } ;
struct img_ir_priv_hw {scalar_t__ mode; TYPE_1__ reg_timings; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct img_ir_priv*,int ,int ) ;
 int FUNC_1 (struct img_ir_priv*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct img_ir_priv *VAR_4)
{
 struct img_ir_priv_hw *VAR_5 = &VAR_4->hw;
 if (VAR_5->mode == VAR_1) {

  FUNC_0(VAR_4, VAR_0, 0);
  VAR_5->mode = VAR_2;
  FUNC_1(VAR_4, &VAR_5->reg_timings.rtimings,
         VAR_3);
  FUNC_0(VAR_4, VAR_0, VAR_5->reg_timings.ctrl);
 }
}
