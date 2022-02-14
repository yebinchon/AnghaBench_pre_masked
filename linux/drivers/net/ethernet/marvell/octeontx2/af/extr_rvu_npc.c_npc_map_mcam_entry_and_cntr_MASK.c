
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu {int dummy; } ;
struct npc_mcam {int banksize; int* entry2cntr_map; int * cntr_refcnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct npc_mcam*,int) ;
 int FUNC_3 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rvu *VAR_0, struct npc_mcam *VAR_1,
     int VAR_2, u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5 = VAR_3 & (VAR_1->banksize - 1);
 u16 VAR_6 = FUNC_2(VAR_1, VAR_3);


 VAR_1->entry2cntr_map[VAR_3] = VAR_4;
 VAR_1->cntr_refcnt[VAR_4]++;

 FUNC_3(VAR_0, VAR_2,
      FUNC_1(VAR_5, VAR_6),
      FUNC_0(9) | VAR_4);
}
