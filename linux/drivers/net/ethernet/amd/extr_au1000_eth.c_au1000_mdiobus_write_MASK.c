
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;


 int FUNC_0 (struct net_device* const,int ) ;
 int FUNC_1 (struct net_device* const,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_0, int VAR_1, int VAR_2,
    u16 VAR_3)
{
 struct net_device *const VAR_4 = VAR_0->priv;




 FUNC_0(VAR_4, 0);

 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
 return 0;
}
