
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ethsw_port_priv {scalar_t__* vlans; } ;
struct TYPE_2__ {int num_ifs; } ;
struct ethsw_core {struct ethsw_port_priv** ports; TYPE_1__ sw_attr; scalar_t__* vlans; int dev; int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct ethsw_core *VAR_1, u16 VAR_2)
{
 struct ethsw_port_priv *VAR_3 = ((void*)0);
 int VAR_4, VAR_5;

 if (!VAR_1->vlans[VAR_2])
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1->mc_io, 0, VAR_1->dpsw_handle, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_1->dev, "dpsw_vlan_remove err %d\n", VAR_5);
  return VAR_5;
 }
 VAR_1->vlans[VAR_2] = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->sw_attr.num_ifs; VAR_4++) {
  VAR_3 = VAR_1->ports[VAR_4];
  VAR_3->vlans[VAR_2] = 0;
 }

 return 0;
}
