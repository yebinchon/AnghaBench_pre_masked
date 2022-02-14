
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct et131x_adapter {int dummy; } ;


 int FUNC_0 (struct et131x_adapter*,int,int,int ) ;
 struct et131x_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1,
        int VAR_2, u16 VAR_3)
{
 struct net_device *VAR_4 = VAR_0->priv;
 struct et131x_adapter *VAR_5 = FUNC_1(VAR_4);

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
}
