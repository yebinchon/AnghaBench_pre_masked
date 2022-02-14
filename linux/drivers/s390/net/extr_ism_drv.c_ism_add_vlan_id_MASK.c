
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int cmd; } ;
struct TYPE_4__ {int vlan_id; TYPE_1__ hdr; } ;
union ism_set_vlan_id {TYPE_2__ request; } ;
typedef int u64 ;
struct smcd_dev {struct ism_dev* priv; } ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ism_dev*,union ism_set_vlan_id*) ;
 int FUNC_1 (union ism_set_vlan_id*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smcd_dev *VAR_1, u64 VAR_2)
{
 struct ism_dev *VAR_3 = VAR_1->priv;
 union ism_set_vlan_id VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.request.hdr.cmd = VAR_0;
 VAR_4.request.hdr.len = sizeof(VAR_4.request);

 VAR_4.request.vlan_id = VAR_2;

 return FUNC_0(VAR_3, &VAR_4);
}
