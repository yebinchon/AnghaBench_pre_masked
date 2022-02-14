
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int total_entries; int banksize; } ;
struct nix_rx_action {int index; int flow_key_alg; int pf_func; int op; } ;
struct TYPE_2__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_2 (struct npc_mcam*,int) ;
 int FUNC_3 (struct npc_mcam*,int ,int,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;
 int FUNC_5 (struct rvu*,int ,int) ;
 int FUNC_6 (struct rvu*,int,int ) ;
 int FUNC_7 (struct rvu*,int,int ,int ) ;

void FUNC_8(struct rvu *VAR_5, u16 VAR_6, int VAR_7,
        int VAR_8, int VAR_9, int VAR_10)
{
 struct npc_mcam *VAR_11 = &VAR_5->hw->mcam;
 struct nix_rx_action VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_4(VAR_5, VAR_0, 0);
 if (VAR_13 < 0)
  return;


 if (VAR_10 < 0) {
  if (VAR_8 != VAR_1)
   return;
  VAR_14 = FUNC_3(VAR_11, VAR_6,
       VAR_7, VAR_3);
 } else {

  VAR_14 = VAR_10;
 }

 if (VAR_14 >= VAR_11->total_entries)
  return;

 VAR_15 = FUNC_2(VAR_11, VAR_14);
 VAR_14 &= (VAR_11->banksize - 1);

 *(u64 *)&VAR_12 = FUNC_6(VAR_5, VAR_13,
         FUNC_0(VAR_14, VAR_15));

 if (!*(u64 *)&VAR_12)
  return;

 VAR_12.op = VAR_4;
 VAR_12.pf_func = VAR_6;
 VAR_12.index = VAR_8;
 VAR_12.flow_key_alg = VAR_9;

 FUNC_7(VAR_5, VAR_13,
      FUNC_0(VAR_14, VAR_15), *(u64 *)&VAR_12);

 VAR_14 = FUNC_3(VAR_11, VAR_6,
      VAR_7, VAR_2);




 if (FUNC_1(VAR_5, VAR_11, VAR_13, VAR_14)) {
  VAR_15 = FUNC_2(VAR_11, VAR_14);
  VAR_14 &= (VAR_11->banksize - 1);

  FUNC_7(VAR_5, VAR_13,
       FUNC_0(VAR_14, VAR_15),
       *(u64 *)&VAR_12);
 }

 FUNC_5(VAR_5, VAR_6, VAR_7);
}
