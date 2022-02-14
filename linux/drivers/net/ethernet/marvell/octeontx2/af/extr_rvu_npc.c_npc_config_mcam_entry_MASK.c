
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct rvu {int dummy; } ;
struct npc_mcam {int banksize; int banks_per_entry; } ;
struct mcam_entry {int action; int vtag_action; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct rvu*,struct npc_mcam*,int,int,int) ;
 int FUNC_6 (struct npc_mcam*,int) ;
 int FUNC_7 (struct mcam_entry*,int,int*,int*) ;
 int FUNC_8 (struct rvu*,int,int ,int) ;

__attribute__((used)) static void FUNC_9(struct rvu *VAR_0, struct npc_mcam *VAR_1,
      int VAR_2, int VAR_3, u8 VAR_4,
      struct mcam_entry *VAR_5, bool VAR_6)
{
 int VAR_7 = FUNC_6(VAR_1, VAR_3);
 int VAR_8 = 0, VAR_9, VAR_10;
 u64 VAR_11, VAR_12;

 VAR_9 = VAR_7;
 VAR_10 = VAR_3;
 VAR_3 &= (VAR_1->banksize - 1);







 for (; VAR_7 < (VAR_9 + VAR_1->banks_per_entry); VAR_7++, VAR_8 = VAR_8 + 2) {

  FUNC_8(VAR_0, VAR_2,
       FUNC_1(VAR_3, VAR_7, 1),
       VAR_4);
  FUNC_8(VAR_0, VAR_2,
       FUNC_1(VAR_3, VAR_7, 0),
       ~VAR_4 & 0x3);


  FUNC_7(VAR_5, VAR_8, &VAR_11, &VAR_12);
  FUNC_8(VAR_0, VAR_2,
       FUNC_2(VAR_3, VAR_7, 1), VAR_12);
  FUNC_8(VAR_0, VAR_2,
       FUNC_2(VAR_3, VAR_7, 0), VAR_11);

  FUNC_7(VAR_5, VAR_8 + 1, &VAR_11, &VAR_12);
  FUNC_8(VAR_0, VAR_2,
       FUNC_3(VAR_3, VAR_7, 1), VAR_12);
  FUNC_8(VAR_0, VAR_2,
       FUNC_3(VAR_3, VAR_7, 0), VAR_11);
 }


 FUNC_8(VAR_0, VAR_2,
      FUNC_0(VAR_3, VAR_9), VAR_5->action);


 FUNC_8(VAR_0, VAR_2, FUNC_4(VAR_3, VAR_9),
      VAR_5->vtag_action);


 if (VAR_6)
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_10, 1);
 else
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_10, 0);
}
