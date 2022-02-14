
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_bpf {int command; struct bpf_offloaded_map* offmap; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct bpf_offloaded_map {struct net_device* netdev; } ;
typedef enum bpf_netdev_command { ____Placeholder_bpf_netdev_command } bpf_netdev_command ;
struct TYPE_2__ {int (* ndo_bpf ) (struct net_device*,struct netdev_bpf*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct net_device*,struct netdev_bpf*) ;

__attribute__((used)) static int FUNC_2(struct bpf_offloaded_map *VAR_0,
          enum bpf_netdev_command VAR_1)
{
 struct netdev_bpf VAR_2 = {};
 struct net_device *VAR_3;

 FUNC_0();

 VAR_2.command = VAR_1;
 VAR_2.offmap = VAR_0;

 VAR_3 = VAR_0->netdev;

 return VAR_3->netdev_ops->ndo_bpf(VAR_3, &VAR_2);
}
