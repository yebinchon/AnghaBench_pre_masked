
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int hw_lock; int mfc_cmds; struct s5p_mfc_ctx** ctx; int enter_suspend; } ;
struct s5p_mfc_ctx {scalar_t__ type; int state; int capture_state; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 int FUNC_2 (struct s5p_mfc_ctx*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct s5p_mfc_dev*) ;
 unsigned int FUNC_6 (int ,int ,struct s5p_mfc_ctx*) ;
 unsigned int FUNC_7 (struct s5p_mfc_ctx*,int ) ;
 unsigned int FUNC_8 (struct s5p_mfc_ctx*) ;
 int FUNC_9 (struct s5p_mfc_ctx*) ;
 unsigned int FUNC_10 (struct s5p_mfc_ctx*) ;
 int FUNC_11 (struct s5p_mfc_ctx*) ;
 int FUNC_12 (struct s5p_mfc_ctx*) ;
 int FUNC_13 (struct s5p_mfc_ctx*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct s5p_mfc_dev *VAR_8)
{
 struct s5p_mfc_ctx *VAR_9;
 int VAR_10;
 unsigned int VAR_11 = 0;

 if (FUNC_16(0, &VAR_8->enter_suspend)) {
  FUNC_0(1, "Entering suspend so do not schedule any jobs\n");
  return;
 }

 if (FUNC_15(0, &VAR_8->hw_lock) != 0) {

  FUNC_0(1, "Couldn't lock HW\n");
  return;
 }

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0) {

  if (FUNC_14(0, &VAR_8->hw_lock) == 0) {
   FUNC_1("Failed to unlock hardware\n");
   return;
  }
  FUNC_0(1, "No ctx is scheduled to be run\n");
  return;
 }
 VAR_9 = VAR_8->ctx[VAR_10];





 FUNC_4();
 FUNC_2(VAR_9);

 if (VAR_9->type == VAR_1) {
  FUNC_13(VAR_9);
  switch (VAR_9->state) {
  case 136:
   FUNC_7(VAR_9, VAR_4);
   break;
  case 128:
   VAR_11 = FUNC_7(VAR_9, VAR_3);
   break;
  case 133:
   VAR_11 = FUNC_6(VAR_8->mfc_cmds, VAR_7,
     VAR_9);
   break;
  case 129:
   VAR_11 = FUNC_6(VAR_8->mfc_cmds, VAR_6,
     VAR_9);
   break;
  case 135:
   FUNC_9(VAR_9);
   break;
  case 134:
   VAR_11 = FUNC_10(VAR_9);
   FUNC_0(1, "head parsed\n");
   break;
  case 130:
   FUNC_12(VAR_9);
   break;
  case 131:
   FUNC_7(VAR_9, VAR_3);
   break;
  case 132:
   FUNC_0(2, "Finished remaining frames after resolution change\n");
   VAR_9->capture_state = VAR_5;
   FUNC_0(2, "Will re-init the codec\n");
   FUNC_9(VAR_9);
   break;
  default:
   VAR_11 = -VAR_0;
  }
 } else if (VAR_9->type == VAR_2) {
  switch (VAR_9->state) {
  case 136:
  case 128:
   VAR_11 = FUNC_8(VAR_9);
   break;
  case 133:
   VAR_11 = FUNC_6(VAR_8->mfc_cmds, VAR_7,
     VAR_9);
   break;
  case 129:
   VAR_11 = FUNC_6(VAR_8->mfc_cmds, VAR_6,
     VAR_9);
   break;
  case 135:
   FUNC_11(VAR_9);
   break;
  default:
   VAR_11 = -VAR_0;
  }
 } else {
  FUNC_1("Invalid context type: %d\n", VAR_9->type);
  VAR_11 = -VAR_0;
 }

 if (VAR_11) {

  if (FUNC_14(0, &VAR_8->hw_lock) == 0)
   FUNC_1("Failed to unlock hardware\n");





  FUNC_3();
 }
}
