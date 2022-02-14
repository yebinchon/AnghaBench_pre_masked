
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int lock; } ;
struct TYPE_2__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int ) ;
 int FUNC_3 (struct rvu*,struct npc_mcam*,int,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;
 int FUNC_5 (struct rvu*,int ,int) ;

void FUNC_6(struct rvu *VAR_1, u16 VAR_2, int VAR_3)
{
 struct npc_mcam *VAR_4 = &VAR_1->hw->mcam;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_1, VAR_0, 0);
 if (VAR_5 < 0)
  return;

 FUNC_0(&VAR_4->lock);


 FUNC_3(VAR_1, VAR_4, VAR_5, VAR_2);


 FUNC_2(VAR_1, VAR_4, VAR_2);

 FUNC_1(&VAR_4->lock);

 FUNC_5(VAR_1, VAR_2, VAR_3);
}
