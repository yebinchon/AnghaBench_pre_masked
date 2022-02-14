
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int hw_lock; int mfc_cmds; struct s5p_mfc_ctx** ctx; } ;
struct s5p_mfc_ctx {scalar_t__ type; int state; int capture_state; int dpb_flush_flag; int src_queue_cnt; int pb_count; int dst_queue_cnt; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int FUNC_2 (struct s5p_mfc_ctx*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct s5p_mfc_dev*) ;
 unsigned int FUNC_6 (int ,int ,struct s5p_mfc_ctx*) ;
 unsigned int FUNC_7 (struct s5p_mfc_ctx*) ;
 int FUNC_8 (struct s5p_mfc_ctx*) ;
 unsigned int FUNC_9 (struct s5p_mfc_ctx*) ;
 int FUNC_10 (struct s5p_mfc_ctx*) ;
 unsigned int FUNC_11 (struct s5p_mfc_ctx*) ;
 int FUNC_12 (struct s5p_mfc_ctx*) ;
 unsigned int FUNC_13 (struct s5p_mfc_ctx*) ;
 int FUNC_14 (struct s5p_mfc_ctx*,int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct s5p_mfc_dev *VAR_6)
{
 struct s5p_mfc_ctx *VAR_7;
 int VAR_8;
 unsigned int VAR_9 = 0;

 FUNC_0(1, "Try run dev: %p\n", VAR_6);


 if (FUNC_16(0, &VAR_6->hw_lock) != 0) {

  FUNC_0(1, "Couldn't lock HW.\n");
  return;
 }


 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 < 0) {

  if (FUNC_15(0, &VAR_6->hw_lock) == 0) {
   FUNC_1("Failed to unlock hardware.\n");
   return;
  }

  FUNC_0(1, "No ctx is scheduled to be run.\n");
  return;
 }

 FUNC_0(1, "New context: %d\n", VAR_8);
 VAR_7 = VAR_6->ctx[VAR_8];
 FUNC_0(1, "Setting new context to %p\n", VAR_7);

 FUNC_0(1, "ctx->dst_queue_cnt=%d ctx->dpb_count=%d ctx->src_queue_cnt=%d\n",
  VAR_7->dst_queue_cnt, VAR_7->pb_count, VAR_7->src_queue_cnt);
 FUNC_0(1, "ctx->state=%d\n", VAR_7->state);



 FUNC_4();
 FUNC_2(VAR_7);

 if (VAR_7->type == VAR_1) {
  switch (VAR_7->state) {
  case 138:
   FUNC_8(VAR_7);
   break;
  case 128:
   VAR_9 = FUNC_7(VAR_7);
   break;
  case 133:
   VAR_9 = FUNC_6(VAR_6->mfc_cmds, VAR_5,
     VAR_7);
   break;
  case 129:
   VAR_9 = FUNC_6(VAR_6->mfc_cmds, VAR_4,
     VAR_7);
   break;
  case 136:
   FUNC_10(VAR_7);
   break;
  case 135:
   VAR_9 = FUNC_11(VAR_7);
   break;
  case 137:
   FUNC_14(VAR_7, VAR_7->dpb_flush_flag);
   break;
  case 130:
   FUNC_8(VAR_7);
   break;
  case 131:
   FUNC_8(VAR_7);
   break;
  case 132:
   FUNC_0(2, "Finished remaining frames after resolution change.\n");
   VAR_7->capture_state = VAR_3;
   FUNC_0(2, "Will re-init the codec`.\n");
   FUNC_10(VAR_7);
   break;
  default:
   VAR_9 = -VAR_0;
  }
 } else if (VAR_7->type == VAR_2) {
  switch (VAR_7->state) {
  case 138:
  case 128:
   VAR_9 = FUNC_9(VAR_7);
   break;
  case 133:
   VAR_9 = FUNC_6(VAR_6->mfc_cmds, VAR_5,
     VAR_7);
   break;
  case 129:
   VAR_9 = FUNC_6(VAR_6->mfc_cmds, VAR_4,
     VAR_7);
   break;
  case 136:
   FUNC_12(VAR_7);
   break;
  case 134:
   VAR_9 = FUNC_13(VAR_7);
   break;
  default:
   VAR_9 = -VAR_0;
  }
 } else {
  FUNC_1("invalid context type: %d\n", VAR_7->type);
  VAR_9 = -VAR_0;
 }

 if (VAR_9) {

  if (FUNC_15(0, &VAR_6->hw_lock) == 0)
   FUNC_1("Failed to unlock hardware.\n");





  FUNC_3();
 }
}
