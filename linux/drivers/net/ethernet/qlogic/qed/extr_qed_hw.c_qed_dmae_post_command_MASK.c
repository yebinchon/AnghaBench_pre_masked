
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {int channel; struct dmae_cmd* p_dmae_cmd; } ;
struct qed_hwfn {TYPE_1__ dmae_info; } ;
struct dmae_cmd {int dst_addr_lo; int dst_addr_hi; int src_addr_lo; int src_addr_hi; int length_dw; int opcode_b; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,char*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_6,
     struct qed_ptt *VAR_7)
{
 struct dmae_cmd *VAR_8 = VAR_6->dmae_info.p_dmae_cmd;
 u8 VAR_9 = VAR_6->dmae_info.channel, VAR_10;
 int VAR_11 = 0;


 if ((((!VAR_8->dst_addr_lo) && (!VAR_8->dst_addr_hi)) ||
      ((!VAR_8->src_addr_lo) && (!VAR_8->src_addr_hi)))) {
  FUNC_0(VAR_6,
     "source or destination address 0 idx_cmd=%d\n"
     "opcode = [0x%08x,0x%04x] len=0x%x src=0x%x:%x dst=0x%x:%x\n",
     VAR_9,
     FUNC_3(VAR_8->opcode),
     FUNC_2(VAR_8->opcode_b),
     FUNC_2(VAR_8->length_dw),
     FUNC_3(VAR_8->src_addr_hi),
     FUNC_3(VAR_8->src_addr_lo),
     FUNC_3(VAR_8->dst_addr_hi),
     FUNC_3(VAR_8->dst_addr_lo));

  return -VAR_4;
 }

 FUNC_1(VAR_6,
     VAR_5,
     "Posting DMAE command [idx %d]: opcode = [0x%08x,0x%04x] len=0x%x src=0x%x:%x dst=0x%x:%x\n",
     VAR_9,
     FUNC_3(VAR_8->opcode),
     FUNC_2(VAR_8->opcode_b),
     FUNC_2(VAR_8->length_dw),
     FUNC_3(VAR_8->src_addr_hi),
     FUNC_3(VAR_8->src_addr_lo),
     FUNC_3(VAR_8->dst_addr_hi),
     FUNC_3(VAR_8->dst_addr_lo));







 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  u32 VAR_12 = (VAR_10 < VAR_1) ?
      *(((u32 *)VAR_8) + VAR_10) : 0;

  FUNC_5(VAR_6, VAR_7,
         VAR_3 +
         (VAR_9 * VAR_0 * sizeof(u32)) +
         (VAR_10 * sizeof(u32)), VAR_12);
 }

 FUNC_5(VAR_6, VAR_7, FUNC_4(VAR_9), VAR_2);

 return VAR_11;
}
