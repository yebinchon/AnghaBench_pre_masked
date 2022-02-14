
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ swreg ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nfp_prog*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct nfp_prog*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct nfp_prog*) ;
 scalar_t__ FUNC_6 (struct nfp_prog*) ;
 scalar_t__ FUNC_7 (struct nfp_prog*) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (struct nfp_prog*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct nfp_prog *VAR_8, struct nfp_insn_meta *VAR_9)
{
 u32 VAR_10, VAR_11;
 swreg VAR_12, VAR_13;

 FUNC_0(FUNC_6(VAR_8) != FUNC_9(VAR_7));

 VAR_12 = FUNC_3(VAR_8);
 VAR_13 = FUNC_8(2 * 2);

 VAR_10 = FUNC_5(VAR_8) + 9;
 VAR_11 = FUNC_5(VAR_8) + 11;


 FUNC_1(VAR_8, VAR_12, FUNC_6(VAR_8), VAR_0, VAR_13);



 FUNC_2(VAR_8, VAR_2, VAR_10, 0);


 FUNC_1(VAR_8, FUNC_12(), VAR_12, VAR_1, FUNC_11(VAR_6));
 FUNC_2(VAR_8, VAR_3, VAR_10, 0);

 FUNC_1(VAR_8, FUNC_6(VAR_8),
   FUNC_6(VAR_8), VAR_0, VAR_13);
 FUNC_1(VAR_8, FUNC_7(VAR_8),
   FUNC_7(VAR_8), VAR_0, VAR_13);

 FUNC_2(VAR_8, VAR_4, VAR_11, 2);
 FUNC_13(VAR_8, FUNC_10(0), 0);
 FUNC_13(VAR_8, FUNC_10(1), 0);

 if (!FUNC_4(VAR_8, VAR_10))
  return -VAR_5;

 FUNC_13(VAR_8, FUNC_10(0), -22);
 FUNC_13(VAR_8, FUNC_10(1), ~0);

 if (!FUNC_4(VAR_8, VAR_11))
  return -VAR_5;

 return 0;
}
