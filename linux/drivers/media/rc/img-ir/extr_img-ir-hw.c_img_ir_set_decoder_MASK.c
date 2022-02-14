
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ mask; scalar_t__ data; } ;
struct rc_dev {int wakeup_protocol; TYPE_1__ scancode_wakeup_filter; } ;
struct TYPE_4__ {int ctrl; int timings; } ;
struct img_ir_priv_hw {int stopping; TYPE_2__ reg_timings; int clk_hz; scalar_t__ enabled_protocols; struct img_ir_decoder const* decoder; int mode; int suspend_timer; int end_timer; struct rc_dev* rdev; } ;
struct img_ir_priv {int lock; struct img_ir_priv_hw hw; } ;
struct img_ir_decoder {scalar_t__ type; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct img_ir_priv*,int *) ;
 int FUNC_1 (struct img_ir_priv*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct img_ir_decoder const*,TYPE_2__*,int ) ;
 int FUNC_4 (struct img_ir_priv*,int ) ;
 int FUNC_5 (struct img_ir_priv*,int ,int) ;
 int FUNC_6 (struct img_ir_priv*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct img_ir_priv *VAR_13,
          const struct img_ir_decoder *VAR_14,
          u64 VAR_15)
{
 struct img_ir_priv_hw *VAR_16 = &VAR_13->hw;
 struct rc_dev *VAR_17 = VAR_16->rdev;
 u32 VAR_18, VAR_19;
 FUNC_7(&VAR_13->lock);





 VAR_16->stopping = 1;





 FUNC_8(&VAR_13->lock);
 FUNC_2(&VAR_16->end_timer);
 FUNC_2(&VAR_16->suspend_timer);
 FUNC_7(&VAR_13->lock);

 VAR_16->stopping = 0;


 FUNC_5(VAR_13, VAR_0, 0);
 VAR_19 = FUNC_4(VAR_13, VAR_6);
 FUNC_5(VAR_13, VAR_6, VAR_19 & VAR_5);
 FUNC_5(VAR_13, VAR_4, VAR_3 & ~VAR_5);


 VAR_18 = FUNC_4(VAR_13, VAR_10);
 if (VAR_18 & (VAR_8 | VAR_9)) {
  VAR_18 &= ~(VAR_8 | VAR_9);
  FUNC_5(VAR_13, VAR_10, VAR_18);
 }


 FUNC_4(VAR_13, VAR_1);
 FUNC_4(VAR_13, VAR_2);


 VAR_16->mode = VAR_7;


 VAR_17->scancode_wakeup_filter.data = 0;
 VAR_17->scancode_wakeup_filter.mask = 0;
 VAR_17->wakeup_protocol = VAR_12;


 FUNC_0(VAR_13, ((void*)0));
 FUNC_1(VAR_13, ((void*)0));


 VAR_16->enabled_protocols = 0;


 VAR_16->decoder = VAR_14;
 if (!VAR_14)
  goto unlock;


 if (!VAR_15)
  VAR_15 = VAR_14->type;
 VAR_16->enabled_protocols = VAR_15;


 FUNC_3(VAR_14, &VAR_16->reg_timings, VAR_16->clk_hz);
 FUNC_6(VAR_13, &VAR_16->reg_timings.timings, VAR_11);


 FUNC_5(VAR_13, VAR_0, VAR_16->reg_timings.ctrl);


unlock:
 FUNC_8(&VAR_13->lock);
}
