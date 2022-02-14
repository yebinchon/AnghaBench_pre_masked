
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int cmd; } ;
struct TYPE_3__ {void* vlan_id; void* vlan_valid; int rgid; TYPE_2__ hdr; } ;
union ism_query_rgid {TYPE_1__ request; } ;
typedef int u64 ;
typedef void* u32 ;
struct smcd_dev {struct ism_dev* priv; } ;
struct ism_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ism_dev*,union ism_query_rgid*) ;
 int FUNC_1 (union ism_query_rgid*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smcd_dev *VAR_1, u64 VAR_2, u32 VAR_3,
     u32 VAR_4)
{
 struct ism_dev *VAR_5 = VAR_1->priv;
 union ism_query_rgid VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.request.hdr.cmd = VAR_0;
 VAR_6.request.hdr.len = sizeof(VAR_6.request);

 VAR_6.request.rgid = VAR_2;
 VAR_6.request.vlan_valid = VAR_3;
 VAR_6.request.vlan_id = VAR_4;

 return FUNC_0(VAR_5, &VAR_6);
}
