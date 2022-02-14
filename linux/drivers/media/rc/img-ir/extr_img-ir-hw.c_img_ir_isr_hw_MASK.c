
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct img_ir_priv_hw {int* ct_quirks; int quirk_suspend_irq; int suspend_timer; scalar_t__ stopping; TYPE_2__* decoder; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;
struct TYPE_3__ {unsigned int code_type; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct img_ir_priv*,int,int) ;
 void* FUNC_1 (struct img_ir_priv*,int ) ;
 int FUNC_2 (struct img_ir_priv*,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct img_ir_priv *VAR_13, u32 VAR_14)
{
 struct img_ir_priv_hw *VAR_15 = &VAR_13->hw;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20;


 if (!VAR_15->decoder)
  return;

 VAR_20 = VAR_15->decoder->control.code_type;

 VAR_16 = FUNC_1(VAR_13, VAR_11);
 if (!(VAR_16 & (VAR_9 | VAR_10))) {
  if (!(VAR_13->hw.ct_quirks[VAR_20] & VAR_5) ||
    VAR_15->stopping)
   return;
  FUNC_2(VAR_13, VAR_0, 0);
  VAR_15->quirk_suspend_irq = FUNC_1(VAR_13, VAR_4);
  FUNC_2(VAR_13, VAR_4,
        VAR_15->quirk_suspend_irq & VAR_3);


  FUNC_3(&VAR_15->suspend_timer,
     VAR_12 + FUNC_4(5));
  return;
 }
 VAR_16 &= ~(VAR_9 | VAR_10);
 FUNC_2(VAR_13, VAR_11, VAR_16);

 VAR_17 = (VAR_16 & VAR_7) >> VAR_8;

 if (VAR_15->ct_quirks[VAR_20] & VAR_6)
  ++VAR_17;

 VAR_18 = FUNC_1(VAR_13, VAR_1);
 VAR_19 = FUNC_1(VAR_13, VAR_2);
 FUNC_0(VAR_13, VAR_17, (u64)VAR_19 << 32 | VAR_18);
}
