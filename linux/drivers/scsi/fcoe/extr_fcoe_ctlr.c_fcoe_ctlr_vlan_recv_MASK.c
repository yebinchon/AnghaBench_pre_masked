
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct fip_header {int fip_subcode; } ;
struct fcoe_rport {int dummy; } ;
struct fcoe_ctlr {int ctlr_mutex; } ;
typedef enum fip_vlan_subcode { ____Placeholder_fip_vlan_subcode } fip_vlan_subcode ;


 int VAR_0 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,int) ;
 int FUNC_1 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_2 (struct fcoe_ctlr*,struct sk_buff*,struct fcoe_rport*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fcoe_ctlr *VAR_1, struct sk_buff *VAR_2)
{
 struct fip_header *VAR_3;
 enum fip_vlan_subcode VAR_4;
 struct fcoe_rport VAR_5 = { };
 int VAR_6;

 VAR_3 = (struct fip_header *)VAR_2->data;
 VAR_4 = VAR_3->fip_subcode;
 VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_1, "vlan_recv vlan_parse error %d\n", VAR_6);
  goto drop;
 }
 FUNC_4(&VAR_1->ctlr_mutex);
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_1, &VAR_5);
 FUNC_5(&VAR_1->ctlr_mutex);

drop:
 FUNC_3(VAR_2);
 return VAR_6;
}
