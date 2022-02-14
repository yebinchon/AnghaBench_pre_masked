
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int ndo_bpf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;
 if (!VAR_2->netdev_ops->ndo_bpf)
  return -VAR_1;
 return 0;
}
