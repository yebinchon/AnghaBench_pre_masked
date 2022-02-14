
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_map {int lock; } ;
struct xdp_sock {int dummy; } ;


 struct xdp_sock* FUNC_0 (struct xdp_sock*) ;
 int FUNC_1 (struct xdp_sock*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xdp_sock*,struct xdp_sock**) ;

void FUNC_5(struct xsk_map *VAR_0, struct xdp_sock *VAR_1,
        struct xdp_sock **VAR_2)
{
 FUNC_2(&VAR_0->lock);
 if (FUNC_0(*VAR_2) == VAR_1) {
  FUNC_1(*VAR_2, ((void*)0));
  FUNC_4(VAR_1, VAR_2);
 }
 FUNC_3(&VAR_0->lock);
}
