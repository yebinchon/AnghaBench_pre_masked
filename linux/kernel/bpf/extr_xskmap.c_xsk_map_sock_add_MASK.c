
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_map_node {int node; } ;
struct xdp_sock {int map_list_lock; int map_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xdp_sock *VAR_0, struct xsk_map_node *VAR_1)
{
 FUNC_1(&VAR_0->map_list_lock);
 FUNC_0(&VAR_1->node, &VAR_0->map_list);
 FUNC_2(&VAR_0->map_list_lock);
}
