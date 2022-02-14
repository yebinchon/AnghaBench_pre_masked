
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_verifier_env {int subprog_cnt; TYPE_2__* insn_aux_data; TYPE_3__* subprog_info; struct bpf_prog* prog; } ;
struct bpf_prog {int len; int is_func; int jit_requested; int jited; void* bpf_func; struct bpf_insn* insnsi; TYPE_1__* aux; int type; } ;
struct bpf_insn {int code; scalar_t__ src_reg; int imm; int off; } ;
typedef int prog ;
struct TYPE_6__ {int start; int linfo_idx; int stack_depth; } ;
struct TYPE_5__ {int call_imm; } ;
struct TYPE_4__ {int func_idx; float* name; int func_cnt; struct bpf_prog** func; int linfo_idx; int jited_linfo; int nr_linfo; int linfo; int stack_depth; int func_info; int btf; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*,int) ;
 int VAR_8 ;
 struct bpf_prog* FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct bpf_prog*) ;
 int FUNC_7 (struct bpf_prog*) ;
 int FUNC_8 (struct bpf_prog*) ;
 int FUNC_9 (struct bpf_prog*) ;
 int FUNC_10 (struct bpf_prog*) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (struct bpf_verifier_env*,int) ;
 struct bpf_prog** FUNC_14 (int,int,int ) ;
 int FUNC_15 (struct bpf_prog**) ;
 int FUNC_16 (struct bpf_insn*,struct bpf_insn*,int) ;
 int FUNC_17 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_18(struct bpf_verifier_env *VAR_9)
{
 struct bpf_prog *VAR_10 = VAR_9->prog, **VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0, VAR_17, VAR_18;
 struct bpf_insn *VAR_19;
 void *VAR_20;
 int VAR_21;

 if (VAR_9->subprog_cnt <= 1)
  return 0;

 for (VAR_13 = 0, VAR_19 = VAR_10->insnsi; VAR_13 < VAR_10->len; VAR_13++, VAR_19++) {
  if (VAR_19->code != (VAR_1 | VAR_0) ||
      VAR_19->src_reg != VAR_2)
   continue;




  VAR_18 = FUNC_13(VAR_9, VAR_13 + VAR_19->imm + 1);
  if (VAR_18 < 0) {
   FUNC_1(1, "verifier bug. No program starts at insn %d\n",
      VAR_13 + VAR_19->imm + 1);
   return -VAR_3;
  }



  VAR_19->off = VAR_18;



  VAR_9->insn_aux_data[VAR_13].call_imm = VAR_19->imm;

  VAR_19->imm = 1;
 }

 VAR_21 = FUNC_4(VAR_10);
 if (VAR_21)
  goto out_undo_insn;

 VAR_21 = -VAR_4;
 VAR_11 = FUNC_14(VAR_9->subprog_cnt, sizeof(VAR_10), VAR_6);
 if (!VAR_11)
  goto out_undo_insn;

 for (VAR_13 = 0; VAR_13 < VAR_9->subprog_cnt; VAR_13++) {
  VAR_15 = VAR_16;
  VAR_16 = VAR_9->subprog_info[VAR_13 + 1].start;

  VAR_17 = VAR_16 - VAR_15;





  VAR_11[VAR_13] = FUNC_5(FUNC_11(VAR_17), VAR_7);
  if (!VAR_11[VAR_13])
   goto out_free;
  FUNC_16(VAR_11[VAR_13]->insnsi, &VAR_10->insnsi[VAR_15],
         VAR_17 * sizeof(struct bpf_insn));
  VAR_11[VAR_13]->type = VAR_10->type;
  VAR_11[VAR_13]->len = VAR_17;
  if (FUNC_6(VAR_11[VAR_13]))
   goto out_free;
  VAR_11[VAR_13]->is_func = 1;
  VAR_11[VAR_13]->aux->func_idx = VAR_13;

  VAR_11[VAR_13]->aux->btf = VAR_10->aux->btf;
  VAR_11[VAR_13]->aux->func_info = VAR_10->aux->func_info;




  VAR_11[VAR_13]->aux->name[0] = 'F';
  VAR_11[VAR_13]->aux->stack_depth = VAR_9->subprog_info[VAR_13].stack_depth;
  VAR_11[VAR_13]->jit_requested = 1;
  VAR_11[VAR_13]->aux->linfo = VAR_10->aux->linfo;
  VAR_11[VAR_13]->aux->nr_linfo = VAR_10->aux->nr_linfo;
  VAR_11[VAR_13]->aux->jited_linfo = VAR_10->aux->jited_linfo;
  VAR_11[VAR_13]->aux->linfo_idx = VAR_9->subprog_info[VAR_13].linfo_idx;
  VAR_11[VAR_13] = FUNC_2(VAR_11[VAR_13]);
  if (!VAR_11[VAR_13]->jited) {
   VAR_21 = -VAR_5;
   goto out_free;
  }
  FUNC_12();
 }




 for (VAR_13 = 0; VAR_13 < VAR_9->subprog_cnt; VAR_13++) {
  VAR_19 = VAR_11[VAR_13]->insnsi;
  for (VAR_14 = 0; VAR_14 < VAR_11[VAR_13]->len; VAR_14++, VAR_19++) {
   if (VAR_19->code != (VAR_1 | VAR_0) ||
       VAR_19->src_reg != VAR_2)
    continue;
   VAR_18 = VAR_19->off;
   VAR_19->imm = FUNC_0(VAR_11[VAR_18]->bpf_func) -
        VAR_8;
  }
  VAR_11[VAR_13]->aux->func = VAR_11;
  VAR_11[VAR_13]->aux->func_cnt = VAR_9->subprog_cnt;
 }
 for (VAR_13 = 0; VAR_13 < VAR_9->subprog_cnt; VAR_13++) {
  VAR_20 = VAR_11[VAR_13]->bpf_func;
  VAR_12 = FUNC_2(VAR_11[VAR_13]);
  if (VAR_12 != VAR_11[VAR_13] || VAR_11[VAR_13]->bpf_func != VAR_20) {
   FUNC_17(VAR_9, "JIT doesn't support bpf-to-bpf calls\n");
   VAR_21 = -VAR_5;
   goto out_free;
  }
  FUNC_12();
 }




 for (VAR_13 = 0; VAR_13 < VAR_9->subprog_cnt; VAR_13++) {
  FUNC_10(VAR_11[VAR_13]);
  FUNC_9(VAR_11[VAR_13]);
 }





 for (VAR_13 = 0, VAR_19 = VAR_10->insnsi; VAR_13 < VAR_10->len; VAR_13++, VAR_19++) {
  if (VAR_19->code != (VAR_1 | VAR_0) ||
      VAR_19->src_reg != VAR_2)
   continue;
  VAR_19->off = VAR_9->insn_aux_data[VAR_13].call_imm;
  VAR_18 = FUNC_13(VAR_9, VAR_13 + VAR_19->off + 1);
  VAR_19->imm = VAR_18;
 }

 VAR_10->jited = 1;
 VAR_10->bpf_func = VAR_11[0]->bpf_func;
 VAR_10->aux->func = VAR_11;
 VAR_10->aux->func_cnt = VAR_9->subprog_cnt;
 FUNC_8(VAR_10);
 return 0;
out_free:
 for (VAR_13 = 0; VAR_13 < VAR_9->subprog_cnt; VAR_13++)
  if (VAR_11[VAR_13])
   FUNC_3(VAR_11[VAR_13]);
 FUNC_15(VAR_11);
out_undo_insn:

 VAR_10->jit_requested = 0;
 for (VAR_13 = 0, VAR_19 = VAR_10->insnsi; VAR_13 < VAR_10->len; VAR_13++, VAR_19++) {
  if (VAR_19->code != (VAR_1 | VAR_0) ||
      VAR_19->src_reg != VAR_2)
   continue;
  VAR_19->off = 0;
  VAR_19->imm = VAR_9->insn_aux_data[VAR_13].call_imm;
 }
 FUNC_7(VAR_10);
 return VAR_21;
}
