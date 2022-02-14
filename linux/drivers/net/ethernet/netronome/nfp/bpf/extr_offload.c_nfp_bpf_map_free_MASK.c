
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_bpf_map {int l; int cache_blockers; int cache; } ;
struct nfp_app_bpf {int maps_in_use; int map_elems_in_use; } ;
struct TYPE_2__ {scalar_t__ max_entries; } ;
struct bpf_offloaded_map {TYPE_1__ map; struct nfp_bpf_map* dev_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_bpf_map*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfp_app_bpf*,struct nfp_bpf_map*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_app_bpf *VAR_0, struct bpf_offloaded_map *VAR_1)
{
 struct nfp_bpf_map *VAR_2 = VAR_1->dev_priv;

 FUNC_4(VAR_0, VAR_2);
 FUNC_1(VAR_2->cache);
 FUNC_0(VAR_2->cache_blockers);
 FUNC_3(&VAR_2->l);
 VAR_0->map_elems_in_use -= VAR_1->map.max_entries;
 VAR_0->maps_in_use--;
 FUNC_2(VAR_2);

 return 0;
}
