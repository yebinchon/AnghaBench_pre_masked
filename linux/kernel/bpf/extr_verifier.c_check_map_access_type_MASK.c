
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {struct bpf_map* map_ptr; } ;
struct bpf_map {int value_size; } ;
typedef enum bpf_access_type { ____Placeholder_bpf_access_type } bpf_access_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct bpf_map*) ;
 struct bpf_reg_state* FUNC_1 (struct bpf_verifier_env*) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_5, u32 VAR_6,
     int VAR_7, int VAR_8, enum bpf_access_type VAR_9)
{
 struct bpf_reg_state *VAR_10 = FUNC_1(VAR_5);
 struct bpf_map *VAR_11 = VAR_10[VAR_6].map_ptr;
 u32 VAR_12 = FUNC_0(VAR_11);

 if (VAR_9 == VAR_3 && !(VAR_12 & VAR_1)) {
  FUNC_2(VAR_5, "write into map forbidden, value_size=%d off=%d size=%d\n",
   VAR_11->value_size, VAR_7, VAR_8);
  return -VAR_4;
 }

 if (VAR_9 == VAR_2 && !(VAR_12 & VAR_0)) {
  FUNC_2(VAR_5, "read from map forbidden, value_size=%d off=%d size=%d\n",
   VAR_11->value_size, VAR_7, VAR_8);
  return -VAR_4;
 }

 return 0;
}
