
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int dummy; } ;
struct cp_private {int lock; } ;


 struct cp_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct cp_private*,struct ethtool_wolinfo*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4 (struct net_device *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 struct cp_private *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2 (&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_1 (VAR_2, VAR_1);
 FUNC_3 (&VAR_2->lock, VAR_3);

 return VAR_4;
}
