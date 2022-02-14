
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct nfp_prog*,int ,int ) ;
 int FUNC_8 (struct nfp_prog*,struct nfp_insn_meta*,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct nfp_prog *VAR_5, struct nfp_insn_meta *VAR_6, swreg VAR_7,
 u8 VAR_8, int VAR_9)
{
 unsigned int VAR_10;
 u16 VAR_11, VAR_12;




 VAR_12 = FUNC_2(VAR_9, 4);
 VAR_11 = VAR_9 < 4 ? 4 - VAR_9 : 0;

 FUNC_0(VAR_5, VAR_2, VAR_1, 0,
   FUNC_3(VAR_5), VAR_7, VAR_12 - 1, VAR_0);

 VAR_10 = 0;
 if (VAR_11)
  FUNC_1(VAR_5, FUNC_4(VAR_8), FUNC_5(), VAR_3,
    FUNC_6(0), VAR_4, VAR_11 * 8);
 else
  for (; VAR_10 * 4 < VAR_9; VAR_10++)
   FUNC_7(VAR_5, FUNC_4(VAR_8 + VAR_10), FUNC_6(VAR_10));

 if (VAR_10 < 2)
  FUNC_8(VAR_5, VAR_6, VAR_8);

 return 0;
}
