
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct fip_header {int fip_subcode; } ;
struct fcoe_rport {int dummy; } ;
struct fcoe_ctlr {int ctlr_mutex; TYPE_1__* lp; } ;
typedef enum fip_vn2vn_subcode { ____Placeholder_fip_vn2vn_subcode } fip_vn2vn_subcode ;
struct TYPE_2__ {int vlan; } ;


 int VAR_0 ;





 int FUNC_0 (struct fcoe_ctlr*,char*,int,...) ;
 int FUNC_1 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_2 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_3 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_4 (struct fcoe_ctlr*,struct sk_buff*,struct fcoe_rport*) ;
 int FUNC_5 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_6 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct fcoe_ctlr *VAR_1, struct sk_buff *VAR_2)
{
 struct fip_header *VAR_3;
 enum fip_vn2vn_subcode VAR_4;
 struct fcoe_rport VAR_5 = { };
 int VAR_6, VAR_7 = 0;

 VAR_3 = (struct fip_header *)VAR_2->data;
 VAR_4 = VAR_3->fip_subcode;

 if (VAR_1->lp->vlan)
  VAR_7 = FUNC_10(VAR_2);

 if (VAR_7 && VAR_7 != VAR_1->lp->vlan) {
  FUNC_0(VAR_1, "vn_recv drop frame sub %x vlan %d\n",
    VAR_4, VAR_7);
  VAR_6 = -VAR_0;
  goto drop;
 }

 VAR_6 = FUNC_4(VAR_1, VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_1, "vn_recv vn_parse error %d\n", VAR_6);
  goto drop;
 }

 FUNC_8(&VAR_1->ctlr_mutex);
 switch (VAR_4) {
 case 128:
  FUNC_6(VAR_1, &VAR_5);
  break;
 case 129:
  FUNC_5(VAR_1, &VAR_5);
  break;
 case 131:
  FUNC_2(VAR_1, &VAR_5);
  break;
 case 130:
  FUNC_3(VAR_1, &VAR_5);
  break;
 case 132:
  FUNC_1(VAR_1, &VAR_5);
  break;
 default:
  FUNC_0(VAR_1, "vn_recv unknown subcode %d\n", VAR_4);
  VAR_6 = -1;
  break;
 }
 FUNC_9(&VAR_1->ctlr_mutex);
drop:
 FUNC_7(VAR_2);
 return VAR_6;
}
