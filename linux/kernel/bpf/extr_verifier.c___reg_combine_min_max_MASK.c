
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {int var_off; void* smax_value; void* smin_value; void* umax_value; void* umin_value; } ;


 int FUNC_0 (struct bpf_reg_state*) ;
 int FUNC_1 (struct bpf_reg_state*) ;
 int FUNC_2 (struct bpf_reg_state*) ;
 void* FUNC_3 (void*,void*) ;
 void* FUNC_4 (void*,void*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct bpf_reg_state *VAR_0,
      struct bpf_reg_state *VAR_1)
{
 VAR_0->umin_value = VAR_1->umin_value = FUNC_3(VAR_0->umin_value,
       VAR_1->umin_value);
 VAR_0->umax_value = VAR_1->umax_value = FUNC_4(VAR_0->umax_value,
       VAR_1->umax_value);
 VAR_0->smin_value = VAR_1->smin_value = FUNC_3(VAR_0->smin_value,
       VAR_1->smin_value);
 VAR_0->smax_value = VAR_1->smax_value = FUNC_4(VAR_0->smax_value,
       VAR_1->smax_value);
 VAR_0->var_off = VAR_1->var_off = FUNC_5(VAR_0->var_off,
            VAR_1->var_off);

 FUNC_2(VAR_0);
 FUNC_2(VAR_1);

 FUNC_1(VAR_0);
 FUNC_1(VAR_1);

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);




 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
}
