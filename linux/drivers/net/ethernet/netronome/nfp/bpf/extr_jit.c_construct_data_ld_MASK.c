
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*) ;
 int FUNC_6 (struct nfp_prog*,scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct nfp_prog*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_9(struct nfp_prog *VAR_4, struct nfp_insn_meta *VAR_5,
    u16 VAR_6, u8 VAR_7)
{
 swreg VAR_8;


 VAR_8 = FUNC_8(VAR_4, VAR_6 + VAR_7, FUNC_3(VAR_4));
 FUNC_1(VAR_4, FUNC_7(), FUNC_5(VAR_4), VAR_0, VAR_8);
 FUNC_2(VAR_4, VAR_1, VAR_2, 0, VAR_3);


 VAR_8 = FUNC_6(VAR_4, VAR_6, FUNC_4(VAR_4));
 return FUNC_0(VAR_4, VAR_5, VAR_8, 0, VAR_7);
}
