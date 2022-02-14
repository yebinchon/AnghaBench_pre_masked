
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct rvu_pfvf {int entry; } ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int dummy; } ;
struct nix_rx_action {int pf_func; int op; } ;
struct TYPE_4__ {int member_0; } ;
struct mcam_entry {int* kw; int* kw_mask; int action; int vtag_action; TYPE_2__ member_0; } ;
typedef int entry ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
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
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_4 (int *,struct mcam_entry*,int) ;
 int FUNC_5 (struct rvu*,struct npc_mcam*,int,int,int ,struct mcam_entry*,int) ;
 int FUNC_6 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_7 (struct npc_mcam*,int ,int,int ) ;
 int FUNC_8 (struct rvu*,int ,int ) ;
 struct rvu_pfvf* FUNC_9 (struct rvu*,int ) ;

void FUNC_10(struct rvu *VAR_13, u16 VAR_14,
     int VAR_15, u64 VAR_16, u8 *VAR_17)
{
 struct rvu_pfvf *VAR_18 = FUNC_9(VAR_13, VAR_14);
 struct npc_mcam *VAR_19 = &VAR_13->hw->mcam;
 struct mcam_entry VAR_20 = { 0 };
 struct nix_rx_action VAR_21;
 int VAR_22, VAR_23, VAR_24;
 u64 VAR_25 = 0;


 if (FUNC_2(VAR_14))
  return;

 VAR_22 = FUNC_8(VAR_13, VAR_0, 0);
 if (VAR_22 < 0)
  return;

 for (VAR_23 = VAR_1 - 1; VAR_23 >= 0; VAR_23--)
  VAR_25 |= ((u64)*VAR_17++) << (8 * VAR_23);

 VAR_23 = FUNC_7(VAR_19, VAR_14,
      VAR_15, VAR_2);


 VAR_20.kw[0] = VAR_16;
 VAR_20.kw_mask[0] = 0xFFFULL;

 VAR_24 = VAR_8 / sizeof(u64);
 VAR_20.kw[VAR_24] = VAR_25;
 VAR_20.kw_mask[VAR_24] = FUNC_0(48) - 1;




 if (FUNC_3(VAR_13, VAR_19, VAR_22, VAR_23)) {
  *(u64 *)&VAR_21 = FUNC_6(VAR_13, VAR_19,
            VAR_22, VAR_23);
 } else {
  *(u64 *)&VAR_21 = 0x00;
  VAR_21.op = VAR_4;
  VAR_21.pf_func = VAR_14;
 }

 VAR_20.action = *(u64 *)&VAR_21;
 FUNC_5(VAR_13, VAR_19, VAR_22, VAR_23,
         VAR_3, &VAR_20, 1);


 VAR_20.kw[0] |= (VAR_7 | VAR_6) << 20;
 VAR_20.kw_mask[0] |= (VAR_7 & VAR_6) << 20;

 VAR_20.vtag_action = VAR_12 |
       FUNC_1(VAR_11, 0) |
       FUNC_1(VAR_9, VAR_5) |
       FUNC_1(VAR_10, 12);

 FUNC_4(&VAR_18->entry, &VAR_20, sizeof(VAR_20));
}
