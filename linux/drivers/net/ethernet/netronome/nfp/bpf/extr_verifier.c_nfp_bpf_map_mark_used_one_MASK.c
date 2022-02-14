
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_bpf_map {TYPE_1__* use_map; } ;
struct bpf_verifier_env {int dummy; } ;
typedef enum nfp_bpf_map_use { ____Placeholder_nfp_bpf_map_use } nfp_bpf_map_use ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ non_zero_update; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,unsigned int,...) ;

__attribute__((used)) static int
FUNC_2(struct bpf_verifier_env *VAR_3,
     struct nfp_bpf_map *VAR_4,
     unsigned int VAR_5, enum nfp_bpf_map_use VAR_6)
{
 if (VAR_4->use_map[VAR_5 / 4].type != VAR_1 &&
     VAR_4->use_map[VAR_5 / 4].type != VAR_6) {
  FUNC_1(VAR_3, "map value use type conflict %s vs %s off: %u\n",
   FUNC_0(VAR_4->use_map[VAR_5 / 4].type),
   FUNC_0(VAR_6), VAR_5);
  return -VAR_0;
 }

 if (VAR_4->use_map[VAR_5 / 4].non_zero_update &&
     VAR_6 == VAR_2) {
  FUNC_1(VAR_3, "atomic counter in map value may already be initialized to non-zero value off: %u\n",
   VAR_5);
  return -VAR_0;
 }

 VAR_4->use_map[VAR_5 / 4].type = VAR_6;

 return 0;
}
