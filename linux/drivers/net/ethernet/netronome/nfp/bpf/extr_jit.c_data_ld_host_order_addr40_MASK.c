
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int *,int *) ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfp_prog *VAR_1, struct nfp_insn_meta *VAR_2,
     u8 VAR_3, swreg VAR_4, u8 VAR_5, u8 VAR_6)
{
 swreg VAR_7, VAR_8;

 FUNC_0(VAR_1, VAR_3, VAR_4, &VAR_7, &VAR_8);

 return FUNC_1(VAR_1, VAR_2, VAR_5, VAR_7, VAR_8,
      VAR_6, VAR_0);
}
