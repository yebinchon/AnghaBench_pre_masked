
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int dummy; } ;
struct npc_mcam {int banksize; int banks_per_entry; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct npc_mcam*,int) ;
 int FUNC_2 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_0, struct npc_mcam *VAR_1,
      int VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, VAR_3);
 int VAR_6 = VAR_5;

 VAR_3 &= (VAR_1->banksize - 1);
 for (; VAR_5 < (VAR_6 + VAR_1->banks_per_entry); VAR_5++) {
  FUNC_2(VAR_0, VAR_2,
       FUNC_0(VAR_3, VAR_5),
       VAR_4 ? 1 : 0);
 }
}
