
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {int umax_value; int smax_value; } ;
struct bpf_call_arg_meta {int msize_umax_value; int msize_smax_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bpf_reg_state*) ;
 int FUNC_1 (struct bpf_reg_state*) ;

__attribute__((used)) static void FUNC_2(struct bpf_reg_state *VAR_4, int VAR_5,
       int VAR_6,
       struct bpf_call_arg_meta *VAR_7)
{
 struct bpf_reg_state *VAR_8 = &VAR_4[VAR_2];

 if (VAR_5 != VAR_3 ||
     (VAR_6 != VAR_0 &&
      VAR_6 != VAR_1))
  return;

 VAR_8->smax_value = VAR_7->msize_smax_value;
 VAR_8->umax_value = VAR_7->msize_umax_value;
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);
}
