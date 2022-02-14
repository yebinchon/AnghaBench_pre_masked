
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {struct bpf_map* map_ptr; } ;
struct bpf_map {int value_size; } ;


 int VAR_0 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_1, u32 VAR_2, int VAR_3,
         int VAR_4, bool VAR_5)
{
 struct bpf_reg_state *VAR_6 = FUNC_0(VAR_1);
 struct bpf_map *VAR_7 = VAR_6[VAR_2].map_ptr;

 if (VAR_3 < 0 || VAR_4 < 0 || (VAR_4 == 0 && !VAR_5) ||
     VAR_3 + VAR_4 > VAR_7->value_size) {
  FUNC_1(VAR_1, "invalid access to map value, value_size=%d off=%d size=%d\n",
   VAR_7->value_size, VAR_3, VAR_4);
  return -VAR_0;
 }
 return 0;
}
