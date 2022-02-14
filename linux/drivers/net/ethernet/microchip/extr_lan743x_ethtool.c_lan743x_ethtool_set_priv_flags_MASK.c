
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int flags; } ;


 struct lan743x_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct lan743x_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_2->flags = VAR_1;

 return 0;
}
