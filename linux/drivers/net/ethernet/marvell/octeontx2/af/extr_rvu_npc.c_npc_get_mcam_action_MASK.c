
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {int dummy; } ;
struct npc_mcam {int banksize; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct npc_mcam*,int) ;
 int FUNC_2 (struct rvu*,int,int ) ;

__attribute__((used)) static u64 FUNC_3(struct rvu *VAR_0, struct npc_mcam *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_3);

 VAR_3 &= (VAR_1->banksize - 1);
 return FUNC_2(VAR_0, VAR_2,
     FUNC_0(VAR_3, VAR_4));
}
