
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfp_prog*,struct nfp_insn_meta*,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4, u8 VAR_5,
    u8 VAR_6)
{
 if (VAR_6) {

  FUNC_0(VAR_3, FUNC_6(), FUNC_2(VAR_5), VAR_0,
    FUNC_5(0));
  FUNC_1(VAR_3, FUNC_4(VAR_5), FUNC_6(), VAR_1,
    FUNC_3(VAR_5), VAR_2, VAR_6);
 }
 FUNC_7(VAR_3, VAR_4, VAR_5);

 return 0;
}
