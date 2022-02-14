
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ef4_nic {int port_enabled; int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*,int ) ;
 struct ef4_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct ef4_nic *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3, VAR_1, VAR_3->net_dev,
    "TX stuck with port_enabled=%d: resetting channels\n",
    VAR_3->port_enabled);

 FUNC_0(VAR_3, VAR_0);
}
