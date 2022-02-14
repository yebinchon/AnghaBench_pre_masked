
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int dummy; } ;
struct nix_rx_action {scalar_t__ op; int pf_func; } ;
struct TYPE_4__ {int member_0; } ;
struct mcam_entry {int* kw_mask; void* action; void** kw; TYPE_2__ member_0; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_3 (struct rvu*,struct npc_mcam*,int,int,int ,struct mcam_entry*,int) ;
 void* FUNC_4 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_5 (struct npc_mcam*,int,int,int ) ;
 int FUNC_6 (struct rvu*,int ,int ) ;

void FUNC_7(struct rvu *VAR_8, u16 VAR_9,
       int VAR_10, u64 VAR_11, bool VAR_12)
{
 struct npc_mcam *VAR_13 = &VAR_8->hw->mcam;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 struct mcam_entry VAR_18 = { 0 };
 struct nix_rx_action VAR_19 = { };


 if ((VAR_9 & VAR_7) && !FUNC_1(VAR_9))
  return;

 VAR_14 = FUNC_6(VAR_8, VAR_0, 0);
 if (VAR_14 < 0)
  return;

 VAR_16 = FUNC_5(VAR_13, VAR_9,
      VAR_10, VAR_1);

 VAR_18.kw[0] = VAR_11;
 VAR_18.kw_mask[0] = 0xFFFULL;

 if (VAR_12) {
  VAR_17 = VAR_6 / sizeof(u64);
  VAR_18.kw[VAR_17] = FUNC_0(40);
  VAR_18.kw_mask[VAR_17] = FUNC_0(40);
 }

 VAR_15 = FUNC_5(VAR_13, VAR_9,
          VAR_10, VAR_2);




 if (FUNC_2(VAR_8, VAR_13, VAR_14, VAR_15))
  *(u64 *)&VAR_19 = FUNC_4(VAR_8, VAR_13,
       VAR_14, VAR_15);

 if (VAR_19.op != VAR_4) {
  *(u64 *)&VAR_19 = 0x00;
  VAR_19.op = VAR_5;
  VAR_19.pf_func = VAR_9;
 }

 VAR_18.action = *(u64 *)&VAR_19;
 FUNC_3(VAR_8, VAR_13, VAR_14, VAR_16,
         VAR_3, &VAR_18, 1);
}
