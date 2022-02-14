
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {scalar_t__ range; int off; int id; } ;


 int VAR_0 ;
 struct bpf_reg_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,int,int,size_t,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_1, u32 VAR_2,
     int VAR_3, int VAR_4, bool VAR_5)
{
 struct bpf_reg_state *VAR_6 = FUNC_0(VAR_1);
 struct bpf_reg_state *VAR_7 = &VAR_6[VAR_2];

 if (VAR_3 < 0 || VAR_4 < 0 || (VAR_4 == 0 && !VAR_5) ||
     (u64)VAR_3 + VAR_4 > VAR_7->range) {
  FUNC_1(VAR_1, "invalid access to packet, off=%d size=%d, R%d(id=%d,off=%d,r=%d)\n",
   VAR_3, VAR_4, VAR_2, VAR_7->id, VAR_7->off, VAR_7->range);
  return -VAR_0;
 }
 return 0;
}
