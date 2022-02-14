
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ofdpa_port {struct net_device* bridge_dev; int internal_vlan_id; TYPE_1__* dev; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ofdpa_port*,int ) ;
 int FUNC_1 (struct ofdpa_port*,int ) ;
 int FUNC_2 (struct ofdpa_port*,int ,int ) ;
 int FUNC_3 (struct ofdpa_port*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ofdpa_port *VAR_1,
      struct net_device *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_3(VAR_1, VAR_0, 0);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_1,
     VAR_1->dev->ifindex);
 VAR_1->internal_vlan_id =
  FUNC_0(VAR_1, VAR_2->ifindex);

 VAR_1->bridge_dev = VAR_2;

 return FUNC_2(VAR_1, VAR_0, 0);
}
