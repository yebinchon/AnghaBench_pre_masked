
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct rvu {int dummy; } ;
struct npc_mcam {int banksize; int banks_per_entry; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct npc_mcam*,int) ;
 scalar_t__ FUNC_5 (struct rvu*,int,scalar_t__) ;
 int FUNC_6 (struct rvu*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct rvu *VAR_0, struct npc_mcam *VAR_1,
    int VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5 = FUNC_4(VAR_1, VAR_4);
 int VAR_6 = FUNC_4(VAR_1, VAR_3);
 u64 VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_3 &= (VAR_1->banksize - 1);
 VAR_4 &= (VAR_1->banksize - 1);


 for (VAR_10 = 0; VAR_10 < VAR_1->banks_per_entry; VAR_10++) {
  VAR_8 = FUNC_1(VAR_3, VAR_6 + VAR_10, 0);
  VAR_9 = FUNC_1(VAR_4, VAR_5 + VAR_10, 0);
  for (VAR_11 = 0; VAR_11 < 6; VAR_11++) {
   VAR_7 = FUNC_5(VAR_0, VAR_2, VAR_8 + (VAR_11 * 8));
   FUNC_6(VAR_0, VAR_2, VAR_9 + (VAR_11 * 8), VAR_7);
  }
 }


 VAR_7 = FUNC_5(VAR_0, VAR_2,
    FUNC_0(VAR_3, VAR_6));
 FUNC_6(VAR_0, VAR_2,
      FUNC_0(VAR_4, VAR_5), VAR_7);


 VAR_7 = FUNC_5(VAR_0, VAR_2,
    FUNC_3(VAR_3, VAR_6));
 FUNC_6(VAR_0, VAR_2,
      FUNC_3(VAR_4, VAR_5), VAR_7);


 VAR_7 = FUNC_5(VAR_0, VAR_2,
    FUNC_2(VAR_3, VAR_6));
 FUNC_6(VAR_0, VAR_2,
      FUNC_2(VAR_4, VAR_5), VAR_7);
}
