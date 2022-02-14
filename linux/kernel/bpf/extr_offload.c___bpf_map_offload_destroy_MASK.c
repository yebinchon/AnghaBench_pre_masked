
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_offloaded_map {int * netdev; int offloads; int map; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bpf_offloaded_map*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bpf_offloaded_map *VAR_1)
{
 FUNC_0(FUNC_2(VAR_1, VAR_0));

 FUNC_1(&VAR_1->map, 1);
 FUNC_3(&VAR_1->offloads);
 VAR_1->netdev = ((void*)0);
}
