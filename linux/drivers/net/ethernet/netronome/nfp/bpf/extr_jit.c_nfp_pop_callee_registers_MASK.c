
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfp_prog {int tgt_call_pop_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nfp_prog*,int ,int) ;
 int FUNC_1 (struct nfp_prog*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct nfp_prog *VAR_4)
{
 u8 VAR_5;




 VAR_4->tgt_call_pop_regs = FUNC_1(VAR_4);
 for (VAR_5 = VAR_1; VAR_5 <= VAR_3; VAR_5++) {
  u8 VAR_6 = (VAR_5 - VAR_0) * 2;
  u8 VAR_7 = (VAR_5 - VAR_1) * 2;




  FUNC_5(VAR_4, FUNC_2(VAR_6), FUNC_3(0, 1 + VAR_7));

  if (VAR_5 == VAR_2)

   FUNC_0(VAR_4, FUNC_4(VAR_4), 3);

  FUNC_5(VAR_4, FUNC_2(VAR_6 + 1), FUNC_3(0, 1 + VAR_7 + 1));
 }
}
