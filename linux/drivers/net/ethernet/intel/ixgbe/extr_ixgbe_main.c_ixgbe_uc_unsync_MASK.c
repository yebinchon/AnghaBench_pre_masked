
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgbe_adapter*,unsigned char const*,int ) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, const unsigned char *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_2, VAR_1, FUNC_0(0));

 return 0;
}
