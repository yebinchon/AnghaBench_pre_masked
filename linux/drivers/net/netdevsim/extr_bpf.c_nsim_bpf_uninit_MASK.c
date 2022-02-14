
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int prog; } ;
struct TYPE_4__ {int prog; } ;
struct netdevsim {int netdev; TYPE_3__* nsim_dev; int bpf_offloaded; TYPE_2__ xdp_hw; TYPE_1__ xdp; } ;
struct TYPE_6__ {int bpf_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct netdevsim *VAR_0)
{
 FUNC_0(VAR_0->xdp.prog);
 FUNC_0(VAR_0->xdp_hw.prog);
 FUNC_0(VAR_0->bpf_offloaded);
 FUNC_1(VAR_0->nsim_dev->bpf_dev, VAR_0->netdev);
}
