
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * ethtool_ops; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct bnx2x *VAR_2, struct net_device *VAR_3)
{
 VAR_3->ethtool_ops = (FUNC_0(VAR_2)) ?
  &VAR_0 : &VAR_1;
}
