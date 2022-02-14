
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq {int rx_notify_masked; int xdp_napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct veth_rq *VAR_0)
{

 FUNC_1();
 if (!VAR_0->rx_notify_masked) {
  VAR_0->rx_notify_masked = 1;
  FUNC_0(&VAR_0->xdp_napi);
 }
}
