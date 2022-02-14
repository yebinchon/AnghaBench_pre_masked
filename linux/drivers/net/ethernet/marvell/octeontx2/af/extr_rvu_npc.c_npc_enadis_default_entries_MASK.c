
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int banksize; } ;
struct nix_rx_action {scalar_t__ op; } ;
struct TYPE_2__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (struct rvu*,struct npc_mcam*,int,int,int) ;
 int FUNC_2 (struct npc_mcam*,int) ;
 int FUNC_3 (struct npc_mcam*,int,int,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;
 int FUNC_5 (struct rvu*,int,int) ;
 int FUNC_6 (struct rvu*,int,int) ;
 int FUNC_7 (struct rvu*,int,int) ;
 int FUNC_8 (struct rvu*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct rvu *VAR_5, u16 VAR_6,
           int VAR_7, bool VAR_8)
{
 struct npc_mcam *VAR_9 = &VAR_5->hw->mcam;
 struct nix_rx_action VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_13 = FUNC_4(VAR_5, VAR_0, 0);
 if (VAR_13 < 0)
  return;


 VAR_11 = FUNC_3(VAR_9, VAR_6,
      VAR_7, VAR_2);
 FUNC_1(VAR_5, VAR_9, VAR_13, VAR_11, VAR_8);


 if (VAR_6 & VAR_4)
  return;






 VAR_11 = FUNC_3(VAR_9, VAR_6,
      VAR_7, VAR_1);
 VAR_12 = FUNC_2(VAR_9, VAR_11);
 *(u64 *)&VAR_10 = FUNC_8(VAR_5, VAR_13,
      FUNC_0(VAR_11 & (VAR_9->banksize - 1), VAR_12));
 if (VAR_10.op != VAR_3)
  FUNC_1(VAR_5, VAR_9,
          VAR_13, VAR_11, VAR_8);
 if (VAR_8)
  FUNC_6(VAR_5, VAR_6, VAR_7);
 else
  FUNC_5(VAR_5, VAR_6, VAR_7);

 FUNC_7(VAR_5, VAR_6, VAR_7);
}
