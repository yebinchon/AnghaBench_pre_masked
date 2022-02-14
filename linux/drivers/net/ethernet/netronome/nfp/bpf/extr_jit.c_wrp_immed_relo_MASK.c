
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int swreg ;
struct nfp_prog {int prog_len; int * prog; int error; } ;
typedef enum nfp_relo_type { ____Placeholder_nfp_relo_type } nfp_relo_type ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nfp_prog*,int ,int,int ,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct nfp_prog *VAR_4, swreg VAR_5, u32 VAR_6,
        enum nfp_relo_type VAR_7)
{
 if (VAR_6 > 0xffff) {
  FUNC_2("relocation of a large immediate!\n");
  VAR_4->error = -VAR_0;
  return;
 }
 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_2, 0, VAR_1);

 VAR_4->prog[VAR_4->prog_len - 1] |=
  FUNC_0(VAR_3, VAR_7);
}
