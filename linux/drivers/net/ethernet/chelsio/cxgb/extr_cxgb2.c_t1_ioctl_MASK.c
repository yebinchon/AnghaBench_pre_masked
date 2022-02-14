
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct mdio_if_info {int dummy; } ;
struct ifreq {int dummy; } ;
struct adapter {TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* phy; } ;
struct TYPE_3__ {struct mdio_if_info mdio; } ;


 int FUNC_0 (struct ifreq*) ;
 int FUNC_1 (struct mdio_if_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct adapter *VAR_3 = VAR_0->ml_priv;
 struct mdio_if_info *VAR_4 = &VAR_3->port[VAR_0->if_port].phy->mdio;

 return FUNC_1(VAR_4, FUNC_0(VAR_1), VAR_2);
}
