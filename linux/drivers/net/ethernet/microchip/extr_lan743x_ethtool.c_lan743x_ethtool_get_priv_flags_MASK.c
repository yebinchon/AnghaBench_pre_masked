
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int flags; } ;


 struct lan743x_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 struct lan743x_adapter *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->flags;
}
