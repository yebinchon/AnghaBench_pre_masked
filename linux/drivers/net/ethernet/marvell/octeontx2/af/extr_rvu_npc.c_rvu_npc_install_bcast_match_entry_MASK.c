
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu_pfvf {int bcast_mce_idx; } ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int dummy; } ;
struct nix_rx_action {int pf_func; int op; int index; } ;
struct TYPE_4__ {int member_0; } ;
struct mcam_entry {int* kw; int* kw_mask; int action; TYPE_2__ member_0; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rvu*,struct npc_mcam*,int,int,int ,struct mcam_entry*,int) ;
 int FUNC_2 (struct npc_mcam*,int,int,int ) ;
 int FUNC_3 (struct rvu*,int ,int ) ;
 struct rvu_pfvf* FUNC_4 (struct rvu*,int) ;

void FUNC_5(struct rvu *VAR_6, u16 VAR_7,
           int VAR_8, u64 VAR_9)
{
 struct npc_mcam *VAR_10 = &VAR_6->hw->mcam;
 struct mcam_entry VAR_11 = { 0 };
 struct nix_rx_action VAR_12;



 int VAR_13, VAR_14;

 VAR_13 = FUNC_3(VAR_6, VAR_0, 0);
 if (VAR_13 < 0)
  return;


 if (VAR_7 & VAR_5)
  return;




 VAR_14 = FUNC_2(VAR_10, VAR_7,
      VAR_8, VAR_1);
 VAR_11.kw[0] = FUNC_0(13) | VAR_9;
 VAR_11.kw_mask[0] = FUNC_0(13) | 0xFFFULL;

 *(u64 *)&VAR_12 = 0x00;
 VAR_12.op = VAR_4;
 VAR_12.pf_func = VAR_7;


 VAR_11.action = *(u64 *)&VAR_12;
 FUNC_1(VAR_6, VAR_10, VAR_13, VAR_14,
         VAR_2, &VAR_11, 1);
}
