
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * dcbnl_ops; } ;
struct TYPE_2__ {int dcb_ops; struct net_device* netdev; } ;
struct hnae3_handle {int flags; TYPE_1__ kinfo; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct hnae3_handle *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->kinfo.netdev;

 if ((!VAR_2->kinfo.dcb_ops) || (VAR_2->flags & VAR_0))
  return;

 VAR_3->dcbnl_ops = &VAR_1;
}
