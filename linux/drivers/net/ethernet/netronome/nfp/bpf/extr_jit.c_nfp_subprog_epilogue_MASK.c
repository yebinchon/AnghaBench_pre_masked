
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {TYPE_1__* subprog; } ;
struct nfp_insn_meta {size_t subprog_idx; } ;
struct TYPE_2__ {scalar_t__ needs_reg_push; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4)
{
 if (VAR_3->subprog[VAR_4->subprog_idx].needs_reg_push) {





  FUNC_0(VAR_3, VAR_1, VAR_0, 1,
        VAR_2);

  FUNC_4(VAR_3, FUNC_3(VAR_3), FUNC_2(0, 0));
 } else {

  FUNC_4(VAR_3, FUNC_3(VAR_3), FUNC_2(0, 0));



  FUNC_1(VAR_3, FUNC_3(VAR_3), 0);
 }

 return 0;
}
