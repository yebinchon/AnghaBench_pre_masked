
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netdevsim {TYPE_3__* netdev; } ;
struct netdev_bpf {int extack; TYPE_2__* prog; } ;
struct TYPE_6__ {scalar_t__ mtu; } ;
struct TYPE_5__ {TYPE_1__* aux; } ;
struct TYPE_4__ {scalar_t__ offload; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct netdevsim *VAR_2, struct netdev_bpf *VAR_3)
{
 if (VAR_3->prog && VAR_3->prog->aux->offload) {
  FUNC_0(VAR_3->extack, "attempt to load offloaded prog to drv");
  return -VAR_0;
 }
 if (VAR_2->netdev->mtu > VAR_1) {
  FUNC_0(VAR_3->extack, "MTU too large w/ XDP enabled");
  return -VAR_0;
 }
 return 0;
}
