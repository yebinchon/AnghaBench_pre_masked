
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu {int dummy; } ;
struct npc_mcam {int banksize; int * cntr_refcnt; int * entry2cntr_map; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct npc_mcam*,int) ;
 int FUNC_2 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_1,
       struct npc_mcam *VAR_2,
       int VAR_3, u16 VAR_4, u16 VAR_5)
{
 u16 VAR_6 = VAR_4 & (VAR_2->banksize - 1);
 u16 VAR_7 = FUNC_1(VAR_2, VAR_4);


 VAR_2->entry2cntr_map[VAR_4] = VAR_0;
 VAR_2->cntr_refcnt[VAR_5]--;

 FUNC_2(VAR_1, VAR_3,
      FUNC_0(VAR_6, VAR_7), 0x00);
}
