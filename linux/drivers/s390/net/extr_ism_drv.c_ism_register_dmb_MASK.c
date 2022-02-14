
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dmb_tok; } ;
struct TYPE_4__ {int len; int cmd; } ;
struct TYPE_5__ {int rgid; int vlan_id; int vlan_valid; int sba_idx; int dmb_len; int dmb; TYPE_1__ hdr; } ;
union ism_reg_dmb {TYPE_3__ response; TYPE_2__ request; } ;
struct smcd_dmb {int dmb_tok; int rgid; int vlan_id; int vlan_valid; int sba_idx; int dmb_len; int dma_addr; } ;
struct smcd_dev {struct ism_dev* priv; } ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ism_dev*,struct smcd_dmb*) ;
 int FUNC_1 (struct ism_dev*,union ism_reg_dmb*) ;
 int FUNC_2 (struct ism_dev*,struct smcd_dmb*) ;
 int FUNC_3 (union ism_reg_dmb*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct smcd_dev *VAR_1, struct smcd_dmb *VAR_2)
{
 struct ism_dev *VAR_3 = VAR_1->priv;
 union ism_reg_dmb VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (VAR_5)
  goto out;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.request.hdr.cmd = VAR_0;
 VAR_4.request.hdr.len = sizeof(VAR_4.request);

 VAR_4.request.dmb = VAR_2->dma_addr;
 VAR_4.request.dmb_len = VAR_2->dmb_len;
 VAR_4.request.sba_idx = VAR_2->sba_idx;
 VAR_4.request.vlan_valid = VAR_2->vlan_valid;
 VAR_4.request.vlan_id = VAR_2->vlan_id;
 VAR_4.request.rgid = VAR_2->rgid;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_3, VAR_2);
  goto out;
 }
 VAR_2->dmb_tok = VAR_4.response.dmb_tok;
out:
 return VAR_5;
}
