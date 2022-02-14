
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ofdpa_port {TYPE_1__* dev; TYPE_2__* bridge_dev; int internal_vlan_id; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int flags; int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ofdpa_port*,int ) ;
 int FUNC_1 (struct ofdpa_port*,int ) ;
 int FUNC_2 (struct ofdpa_port*,int ) ;
 int FUNC_3 (struct ofdpa_port*,int ,int ) ;
 int FUNC_4 (struct ofdpa_port*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ofdpa_port *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2,
     VAR_2->bridge_dev->ifindex);
 VAR_2->internal_vlan_id =
  FUNC_1(VAR_2,
      VAR_2->dev->ifindex);

 VAR_2->bridge_dev = ((void*)0);

 VAR_3 = FUNC_3(VAR_2, VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->dev->flags & VAR_0)
  VAR_3 = FUNC_0(VAR_2, 0);

 return VAR_3;
}
