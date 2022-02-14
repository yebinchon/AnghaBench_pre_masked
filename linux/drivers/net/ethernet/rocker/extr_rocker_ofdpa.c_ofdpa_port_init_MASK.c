
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {int brport_flags; TYPE_1__* dev; int internal_vlan_id; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct ofdpa_port*,int ) ;
 int FUNC_2 (struct ofdpa_port*,int ) ;
 int FUNC_3 (struct ofdpa_port*,int ,int ) ;
 int FUNC_4 (struct rocker_port*,int) ;

__attribute__((used)) static int FUNC_5(struct rocker_port *VAR_3)
{
 struct ofdpa_port *VAR_4 = VAR_3->wpriv;
 int VAR_5;

 FUNC_4(VAR_3,
     !!(VAR_4->brport_flags & VAR_0));

 VAR_5 = FUNC_1(VAR_4, 0);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "install ig port table failed\n");
  return VAR_5;
 }

 VAR_4->internal_vlan_id =
  FUNC_2(VAR_4,
      VAR_4->dev->ifindex);

 VAR_5 = FUNC_3(VAR_4, VAR_2, 0);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "install untagged VLAN failed\n");
  goto err_untagged_vlan;
 }
 return 0;

err_untagged_vlan:
 FUNC_1(VAR_4, VAR_1);
 return VAR_5;
}
