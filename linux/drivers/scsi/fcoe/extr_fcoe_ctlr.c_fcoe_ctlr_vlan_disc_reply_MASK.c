
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_rport {int enode_mac; } ;
struct fcoe_ctlr {scalar_t__ mode; } ;
typedef enum fip_vlan_subcode { ____Placeholder_fip_vlan_subcode } fip_vlan_subcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fcoe_ctlr*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct fcoe_ctlr *VAR_3,
          struct fcoe_rport *VAR_4)
{
 enum fip_vlan_subcode VAR_5 = VAR_1;

 if (VAR_3->mode == VAR_0)
  VAR_5 = VAR_2;

 FUNC_0(VAR_3, VAR_5, VAR_4->enode_mac);
}
