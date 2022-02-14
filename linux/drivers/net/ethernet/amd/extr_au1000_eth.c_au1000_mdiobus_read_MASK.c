
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;


 int FUNC_0 (struct net_device* const,int ) ;
 int FUNC_1 (struct net_device* const,int,int) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct net_device *const VAR_3 = VAR_0->priv;




 FUNC_0(VAR_3, 0);

 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
