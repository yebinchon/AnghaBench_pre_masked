
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct gbe_slave {int dummy; } ;
struct gbe_intf {struct net_device* ndev; } ;


 int FUNC_0 (struct gbe_slave*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gbe_slave *VAR_3,
         struct gbe_intf *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->ndev;

 FUNC_3(FUNC_1(VAR_5->dev_addr), FUNC_0(VAR_3, VAR_0, VAR_1));
 FUNC_3(FUNC_2(VAR_5->dev_addr), FUNC_0(VAR_3, VAR_0, VAR_2));
}
