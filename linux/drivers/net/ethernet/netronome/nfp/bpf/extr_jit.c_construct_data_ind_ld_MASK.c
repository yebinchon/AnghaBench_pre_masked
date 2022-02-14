
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*) ;
 int FUNC_6 (struct nfp_prog*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct nfp_prog *VAR_5, struct nfp_insn_meta *VAR_6,
        u16 VAR_7, u16 VAR_8, u8 VAR_9)
{
 swreg VAR_10;


 VAR_10 = FUNC_10(VAR_5, VAR_7, FUNC_4(VAR_5));
 FUNC_1(VAR_5, FUNC_5(VAR_5), FUNC_7(VAR_8), VAR_0, VAR_10);


 FUNC_1(VAR_5, FUNC_3(VAR_5),
   FUNC_3(VAR_5), VAR_0, FUNC_8(VAR_9));
 FUNC_1(VAR_5, FUNC_9(),
   FUNC_6(VAR_5), VAR_1, FUNC_3(VAR_5));
 FUNC_2(VAR_5, VAR_2, VAR_3, 0, VAR_4);


 return FUNC_0(VAR_5, VAR_6, FUNC_4(VAR_5), 0, VAR_9);
}
