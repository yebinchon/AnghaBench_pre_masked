
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {size_t curr_ctx; void* warn_start; int irqlock; int mfc_ops; int hw_lock; int enter_suspend; struct s5p_mfc_ctx** ctx; int watchdog_cnt; } ;
struct s5p_mfc_ctx {unsigned int int_type; unsigned int int_err; int int_cond; int queue; int state; void* inst_no; int ref_queue; TYPE_1__* c_ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* post_frame_start ) (struct s5p_mfc_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_9 ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct s5p_mfc_dev*,struct s5p_mfc_ctx*,unsigned int,unsigned int) ;
 int FUNC_11 (struct s5p_mfc_ctx*,unsigned int,unsigned int) ;
 int FUNC_12 (struct s5p_mfc_ctx*,unsigned int,unsigned int) ;
 int FUNC_13 (struct s5p_mfc_ctx*,unsigned int,unsigned int) ;
 int FUNC_14 (struct s5p_mfc_ctx*) ;
 void* FUNC_15 (int ,int ,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct s5p_mfc_ctx*) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int VAR_14 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct s5p_mfc_ctx*,unsigned int,unsigned int) ;
 int FUNC_22 (struct s5p_mfc_dev*,unsigned int,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_23(int VAR_15, void *VAR_16)
{
 struct s5p_mfc_dev *VAR_17 = VAR_16;
 struct s5p_mfc_ctx *VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;

 FUNC_6();

 FUNC_1(&VAR_17->watchdog_cnt, 0);
 FUNC_16(&VAR_17->irqlock);
 VAR_18 = VAR_17->ctx[VAR_17->curr_ctx];

 VAR_19 = FUNC_15(VAR_17->mfc_ops, VAR_13, VAR_17);
 VAR_20 = FUNC_15(VAR_17->mfc_ops, VAR_12, VAR_17);
 FUNC_5(1, "Int reason: %d (err: %08x)\n", VAR_19, VAR_20);
 switch (VAR_19) {
 case 138:

  if (VAR_18->state == VAR_4 &&
   (FUNC_15(VAR_17->mfc_ops, VAR_10, VAR_20) >=
    VAR_17->warn_start ||
    VAR_20 == VAR_7 ||
    VAR_20 == VAR_6 ||
    VAR_20 == VAR_8))
   FUNC_11(VAR_18, VAR_19, VAR_20);
  else
   FUNC_10(VAR_17, VAR_18, VAR_19, VAR_20);
  FUNC_2(0, &VAR_17->enter_suspend);
  break;

 case 130:
 case 137:
 case 136:
  if (VAR_18->c_ops->post_frame_start) {
   if (VAR_18->c_ops->post_frame_start(VAR_18))
    FUNC_8("post_frame_start() failed\n");

   if (VAR_18->state == VAR_1 &&
      FUNC_4(&VAR_18->ref_queue)) {
    FUNC_15(VAR_17->mfc_ops, VAR_9, VAR_17);
    FUNC_14(VAR_18);
    break;
   }
   FUNC_15(VAR_17->mfc_ops, VAR_9, VAR_17);
   FUNC_0(FUNC_19(0, &VAR_17->hw_lock) == 0);
   FUNC_9();
   FUNC_21(VAR_18, VAR_19, VAR_20);
   FUNC_15(VAR_17->mfc_ops, VAR_14, VAR_17);
  } else {
   FUNC_11(VAR_18, VAR_19, VAR_20);
  }
  break;

 case 132:
  FUNC_13(VAR_18, VAR_19, VAR_20);
  break;

 case 133:
  VAR_18->inst_no = FUNC_15(VAR_17->mfc_ops, VAR_11, VAR_17);
  VAR_18->state = VAR_3;
  goto irq_cleanup_hw;

 case 141:
  VAR_18->inst_no = VAR_5;
  VAR_18->state = VAR_2;
  goto irq_cleanup_hw;

 case 129:
 case 135:
 case 131:
 case 128:
  if (VAR_18)
   FUNC_3(VAR_18);
  FUNC_15(VAR_17->mfc_ops, VAR_9, VAR_17);
  FUNC_2(0, &VAR_17->hw_lock);
  FUNC_2(0, &VAR_17->enter_suspend);
  FUNC_22(VAR_17, VAR_19, VAR_20);
  break;

 case 134:
  FUNC_12(VAR_18, VAR_19, VAR_20);
  break;

 case 140:
  FUNC_15(VAR_17->mfc_ops, VAR_9, VAR_17);
  VAR_18->int_type = VAR_19;
  VAR_18->int_err = VAR_20;
  FUNC_14(VAR_18);
  break;

 case 139:
  VAR_18->state = VAR_4;
  goto irq_cleanup_hw;

 default:
  FUNC_5(2, "Unknown int reason\n");
  FUNC_15(VAR_17->mfc_ops, VAR_9, VAR_17);
 }
 FUNC_17(&VAR_17->irqlock);
 FUNC_7();
 return VAR_0;
irq_cleanup_hw:
 FUNC_15(VAR_17->mfc_ops, VAR_9, VAR_17);
 VAR_18->int_type = VAR_19;
 VAR_18->int_err = VAR_20;
 VAR_18->int_cond = 1;
 if (FUNC_19(0, &VAR_17->hw_lock) == 0)
  FUNC_8("Failed to unlock hw\n");

 FUNC_9();
 FUNC_3(VAR_18);
 FUNC_20(&VAR_18->queue);

 FUNC_15(VAR_17->mfc_ops, VAR_14, VAR_17);
 FUNC_17(&VAR_17->irqlock);
 FUNC_5(2, "Exit via irq_cleanup_hw\n");
 return VAR_0;
}
