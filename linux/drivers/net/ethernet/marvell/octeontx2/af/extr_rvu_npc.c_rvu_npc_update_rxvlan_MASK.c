
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int action; } ;
struct rvu_pfvf {TYPE_2__ entry; int rxvlan_index; int rxvlan; } ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam {int dummy; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_1 (struct rvu*,struct npc_mcam*,int,int ,int ,TYPE_2__*,int) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int,int) ;
 int FUNC_3 (struct npc_mcam*,int ,int,int ) ;
 int FUNC_4 (struct rvu*,int ,int ) ;
 struct rvu_pfvf* FUNC_5 (struct rvu*,int ) ;

int FUNC_6(struct rvu *VAR_4, u16 VAR_5, int VAR_6)
{
 struct rvu_pfvf *VAR_7 = FUNC_5(VAR_4, VAR_5);
 struct npc_mcam *VAR_8 = &VAR_4->hw->mcam;
 int VAR_9, VAR_10;
 bool VAR_11;

 VAR_9 = FUNC_4(VAR_4, VAR_0, 0);
 if (VAR_9 < 0)
  return VAR_2;

 if (!VAR_7->rxvlan)
  return 0;

 VAR_10 = FUNC_3(VAR_8, VAR_5, VAR_6,
      VAR_1);
 VAR_7->entry.action = FUNC_2(VAR_4, VAR_8, VAR_9, VAR_10);
 VAR_11 = FUNC_0(VAR_4, VAR_8, VAR_9, VAR_10);
 FUNC_1(VAR_4, VAR_8, VAR_9, VAR_7->rxvlan_index,
         VAR_3, &VAR_7->entry, VAR_11);

 return 0;
}
