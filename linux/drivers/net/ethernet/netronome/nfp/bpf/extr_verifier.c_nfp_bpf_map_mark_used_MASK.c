
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int off; } ;
struct nfp_insn_meta {TYPE_3__ insn; } ;
struct nfp_bpf_map {int dummy; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_5__ {unsigned int value; } ;
struct bpf_reg_state {unsigned int off; int map_ptr; TYPE_2__ var_off; } ;
struct TYPE_4__ {unsigned int value_size; } ;
struct bpf_offloaded_map {TYPE_1__ map; struct nfp_bpf_map* dev_priv; } ;
typedef enum nfp_bpf_map_use { ____Placeholder_nfp_bpf_map_use } nfp_bpf_map_use ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bpf_offloaded_map* FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_verifier_env*,struct nfp_bpf_map*,unsigned int,int) ;
 int FUNC_3 (struct bpf_verifier_env*,char*) ;
 int FUNC_4 (TYPE_2__) ;

__attribute__((used)) static int
FUNC_5(struct bpf_verifier_env *VAR_2, struct nfp_insn_meta *VAR_3,
        const struct bpf_reg_state *VAR_4,
        enum nfp_bpf_map_use VAR_5)
{
 struct bpf_offloaded_map *VAR_6;
 struct nfp_bpf_map *VAR_7;
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11;

 if (!FUNC_4(VAR_4->var_off)) {
  FUNC_3(VAR_2, "map value offset is variable\n");
  return -VAR_1;
 }

 VAR_9 = VAR_4->var_off.value + VAR_3->insn.off + VAR_4->off;
 VAR_8 = FUNC_0(&VAR_3->insn);
 VAR_6 = FUNC_1(VAR_4->map_ptr);
 VAR_7 = VAR_6->dev_priv;

 if (VAR_9 + VAR_8 > VAR_6->map.value_size) {
  FUNC_3(VAR_2, "map value access out-of-bounds\n");
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10 += 4 - (VAR_9 + VAR_10) % 4) {
  VAR_11 = FUNC_2(VAR_2, VAR_7, VAR_9 + VAR_10, VAR_5);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
