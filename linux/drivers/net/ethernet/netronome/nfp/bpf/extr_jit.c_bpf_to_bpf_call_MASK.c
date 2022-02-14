
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
typedef int swreg ;
struct nfp_prog {TYPE_1__* subprog; int stack_frame_depth; } ;
struct TYPE_6__ {int imm; } ;
struct nfp_insn_meta {void* num_insns_after_br; TYPE_3__ insn; TYPE_2__* jmp_dst; } ;
struct TYPE_5__ {size_t subprog_idx; } ;
struct TYPE_4__ {scalar_t__ needs_reg_push; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int) ;
 int FUNC_2 (struct nfp_prog*,int ,int ,int,int ) ;
 int FUNC_3 (struct nfp_prog*,int ,int ) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*,void*) ;
 void* FUNC_6 (struct nfp_prog*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct nfp_prog*) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct nfp_prog*) ;
 int FUNC_11 (struct nfp_prog*) ;
 int FUNC_12 (struct nfp_prog*,void*,int ) ;
 int FUNC_13 (struct nfp_prog*,int ,void*,int ) ;
 int FUNC_14 (struct nfp_prog*,int) ;

__attribute__((used)) static int
FUNC_15(struct nfp_prog *VAR_10, struct nfp_insn_meta *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 swreg VAR_15;

 VAR_13 = FUNC_9(VAR_10->stack_frame_depth, VAR_9);



 if (VAR_13) {
  VAR_15 = FUNC_12(VAR_10, VAR_13,
       FUNC_10(VAR_10));
  FUNC_0(VAR_10, FUNC_11(VAR_10),
    FUNC_11(VAR_10), VAR_0, VAR_15);
  FUNC_3(VAR_10, FUNC_11(VAR_10),
       VAR_6);
 }
 if (!VAR_11->jmp_dst) {
  FUNC_7("BUG: BPF-to-BPF call has no destination recorded\n");
  return -VAR_5;
 }
 if (VAR_10->subprog[VAR_11->jmp_dst->subprog_idx].needs_reg_push) {
  VAR_12 = FUNC_6(VAR_10) + 3;
  FUNC_2(VAR_10, VAR_3, VAR_2, 2,
        VAR_7);
  VAR_14 = FUNC_6(VAR_10);
  FUNC_13(VAR_10, FUNC_4(VAR_10), 0, VAR_8);
 } else {
  VAR_12 = FUNC_6(VAR_10) + 2;
  FUNC_1(VAR_10, VAR_3, VAR_11->insn.imm, 1);
  VAR_14 = FUNC_6(VAR_10);
 }
 FUNC_13(VAR_10, FUNC_8(VAR_10), VAR_12, VAR_8);

 if (!FUNC_5(VAR_10, VAR_12))
  return -VAR_4;

 if (VAR_13) {
  VAR_15 = FUNC_12(VAR_10, VAR_13,
       FUNC_10(VAR_10));
  FUNC_0(VAR_10, FUNC_11(VAR_10),
    FUNC_11(VAR_10), VAR_1, VAR_15);
  FUNC_3(VAR_10, FUNC_11(VAR_10),
       VAR_6);
  FUNC_14(VAR_10, 3);
 }

 VAR_11->num_insns_after_br = FUNC_6(VAR_10);
 VAR_11->num_insns_after_br -= VAR_14;

 return 0;
}
