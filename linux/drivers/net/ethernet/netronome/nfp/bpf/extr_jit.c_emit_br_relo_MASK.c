
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nfp_prog {int prog_len; int * prog; int error; } ;
typedef enum nfp_relo_type { ____Placeholder_nfp_relo_type } nfp_relo_type ;
typedef enum br_mask { ____Placeholder_br_mask } br_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct nfp_prog*,int,int ,int ,int ,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_prog *VAR_6, enum br_mask VAR_7, u16 VAR_8, u8 VAR_9,
      enum nfp_relo_type VAR_10)
{
 if (VAR_7 == VAR_3 && VAR_9 > 2) {
  FUNC_2("BUG: branch defer out of bounds %d\n", VAR_9);
  VAR_6->error = -VAR_4;
  return;
 }

 FUNC_1(VAR_6, VAR_7,
    VAR_7 != VAR_3 ? VAR_1 : VAR_2,
    VAR_0, VAR_8, VAR_9);

 VAR_6->prog[VAR_6->prog_len - 1] |=
  FUNC_0(VAR_5, VAR_10);
}
