
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qed_sb_info {int sb_ack; int igu_addr; int sb_virt; } ;
struct qed_sb_attn_info {int index; int sb_attn; } ;
struct qed_pi_info {int cookie; int (* comp_cb ) (struct qed_hwfn*,int ) ;} ;
struct qed_hwfn {TYPE_1__* p_sp_sb; int cdev; int p_dpc_ptt; int my_id; struct qed_sb_attn_info* p_sb_attn; } ;
struct TYPE_2__ {struct qed_pi_info* pi_info_arr; struct qed_sb_info sb_info; } ;


 int FUNC_0 (struct qed_pi_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_sb_attn_info*) ;
 int FUNC_5 (struct qed_hwfn*) ;
 int FUNC_6 (struct qed_sb_info*,int ,int) ;
 int FUNC_7 (struct qed_hwfn*,int ,int) ;
 int FUNC_8 (struct qed_sb_info*) ;
 int FUNC_9 (struct qed_hwfn*,int ) ;

void FUNC_10(unsigned long VAR_6)
{
 struct qed_hwfn *VAR_7 = (struct qed_hwfn *)VAR_6;
 struct qed_pi_info *VAR_8 = ((void*)0);
 struct qed_sb_attn_info *VAR_9;
 struct qed_sb_info *VAR_10;
 int VAR_11;
 u16 VAR_12 = 0;

 if (!VAR_7->p_sp_sb) {
  FUNC_1(VAR_7->cdev, "DPC called - no p_sp_sb\n");
  return;
 }

 VAR_10 = &VAR_7->p_sp_sb->sb_info;
 VAR_11 = FUNC_0(VAR_7->p_sp_sb->pi_info_arr);
 if (!VAR_10) {
  FUNC_1(VAR_7->cdev,
         "Status block is NULL - cannot ack interrupts\n");
  return;
 }

 if (!VAR_7->p_sb_attn) {
  FUNC_1(VAR_7->cdev, "DPC called - no p_sb_attn");
  return;
 }
 VAR_9 = VAR_7->p_sb_attn;

 FUNC_3(VAR_7, VAR_2, "DPC Called! (hwfn %p %d)\n",
     VAR_7, VAR_7->my_id);




 FUNC_6(VAR_10, VAR_0, 0);


 if (!VAR_10->sb_virt) {
  FUNC_1(VAR_7->cdev,
         "Interrupt Status block is NULL - cannot check for new interrupts!\n");
 } else {
  u32 VAR_13 = VAR_10->sb_ack;

  VAR_12 = FUNC_8(VAR_10);
  FUNC_3(VAR_7->cdev, VAR_2,
      "Interrupt indices: 0x%08x --> 0x%08x\n",
      VAR_13, VAR_10->sb_ack);
 }

 if (!VAR_9 || !VAR_9->sb_attn) {
  FUNC_1(VAR_7->cdev,
         "Attentions Status block is NULL - cannot check for new attentions!\n");
 } else {
  u16 VAR_14 = VAR_9->index;

  VAR_12 |= FUNC_4(VAR_7, VAR_9);
  FUNC_3(VAR_7->cdev, VAR_2,
      "Attention indices: 0x%08x --> 0x%08x\n",
      VAR_14, VAR_9->index);
 }


 if (!(VAR_12 & VAR_4)) {
  FUNC_6(VAR_10, VAR_1, 1);
  return;
 }


 if (!VAR_7->p_dpc_ptt) {
  FUNC_2(VAR_7->cdev, "Failed to allocate PTT\n");
  FUNC_6(VAR_10, VAR_1, 1);
  return;
 }

 if (VAR_12 & VAR_3)
  FUNC_5(VAR_7);

 if (VAR_12 & VAR_5) {
  int VAR_15;


  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
   VAR_8 = &VAR_7->p_sp_sb->pi_info_arr[VAR_15];
   if (VAR_8->comp_cb)
    VAR_8->comp_cb(VAR_7, VAR_8->cookie);
  }
 }

 if (VAR_9 && (VAR_12 & VAR_3))



  FUNC_7(VAR_7, VAR_10->igu_addr, VAR_9->index);

 FUNC_6(VAR_10, VAR_1, 1);
}
