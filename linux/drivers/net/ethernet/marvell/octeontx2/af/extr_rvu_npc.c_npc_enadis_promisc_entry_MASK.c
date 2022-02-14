
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int dummy; } ;
struct TYPE_2__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rvu*,struct npc_mcam*,int,int,int) ;
 int FUNC_1 (struct npc_mcam*,int,int,int ) ;
 int FUNC_2 (struct rvu*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_3, u16 VAR_4,
         int VAR_5, bool VAR_6)
{
 struct npc_mcam *VAR_7 = &VAR_3->hw->mcam;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_0, 0);
 if (VAR_8 < 0)
  return;


 if (VAR_4 & VAR_2)
  return;

 VAR_9 = FUNC_1(VAR_7, VAR_4,
      VAR_5, VAR_1);
 FUNC_0(VAR_3, VAR_7, VAR_8, VAR_9, VAR_6);
}
