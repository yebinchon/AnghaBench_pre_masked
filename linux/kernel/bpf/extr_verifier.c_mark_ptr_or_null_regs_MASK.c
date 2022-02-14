
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct bpf_reg_state {size_t ref_obj_id; size_t id; } ;
struct bpf_func_state {struct bpf_reg_state* regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_func_state*,size_t,int) ;
 int FUNC_2 (struct bpf_func_state*,size_t) ;

__attribute__((used)) static void FUNC_3(struct bpf_verifier_state *VAR_0, u32 VAR_1,
      bool VAR_2)
{
 struct bpf_func_state *VAR_3 = VAR_0->frame[VAR_0->curframe];
 struct bpf_reg_state *VAR_4 = VAR_3->regs;
 u32 VAR_5 = VAR_4[VAR_1].ref_obj_id;
 u32 VAR_6 = VAR_4[VAR_1].id;
 int VAR_7;

 if (VAR_5 && VAR_5 == VAR_6 && VAR_2)




  FUNC_0(FUNC_2(VAR_3, VAR_6));

 for (VAR_7 = 0; VAR_7 <= VAR_0->curframe; VAR_7++)
  FUNC_1(VAR_0->frame[VAR_7], VAR_6, VAR_2);
}
