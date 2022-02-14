
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int dummy; } ;
struct xsk_map {struct bpf_map map; } ;


 int FUNC_0 (struct bpf_map*) ;
 struct bpf_map* FUNC_1 (struct bpf_map*,int) ;

int FUNC_2(struct xsk_map *VAR_0)
{
 struct bpf_map *VAR_1 = &VAR_0->map;

 VAR_1 = FUNC_1(VAR_1, 0);
 return FUNC_0(VAR_1);
}
