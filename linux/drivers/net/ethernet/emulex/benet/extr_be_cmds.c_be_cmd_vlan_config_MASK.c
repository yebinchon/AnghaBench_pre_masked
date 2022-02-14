
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vtag_array ;
typedef void* u32 ;
typedef int u16 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {void* domain; } ;
struct be_cmd_req_vlan_config {int untagged; int num_vlan; int normal_vlan; void* interface_id; TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct be_cmd_req_vlan_config* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

int FUNC_8(struct be_adapter *VAR_4, u32 VAR_5, u16 *VAR_6,
         u32 VAR_7, u32 VAR_8)
{
 struct be_mcc_wrb *VAR_9;
 struct be_cmd_req_vlan_config *VAR_10;
 int VAR_11;

 FUNC_5(&VAR_4->mcc_lock);

 VAR_9 = FUNC_7(VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto err;
 }
 VAR_10 = FUNC_3(VAR_9);

 FUNC_2(&VAR_10->hdr, VAR_1,
          VAR_3, sizeof(*VAR_10),
          VAR_9, ((void*)0));
 VAR_10->hdr.domain = VAR_8;

 VAR_10->interface_id = VAR_5;
 VAR_10->untagged = VAR_0 & FUNC_0(VAR_4) ? 1 : 0;
 VAR_10->num_vlan = VAR_7;
 FUNC_4(VAR_10->normal_vlan, VAR_6,
        VAR_10->num_vlan * sizeof(VAR_6[0]));

 VAR_11 = FUNC_1(VAR_4);
err:
 FUNC_6(&VAR_4->mcc_lock);
 return VAR_11;
}
