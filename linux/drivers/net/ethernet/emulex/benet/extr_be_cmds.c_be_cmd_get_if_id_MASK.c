
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct be_vf_cfg {int if_handle; } ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_3__ {int if_id; } ;
struct be_cmd_resp_get_iface_list {TYPE_1__ if_desc; } ;
struct TYPE_4__ {int domain; } ;
struct be_cmd_req_get_iface_list {TYPE_2__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct be_cmd_req_get_iface_list* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_3, struct be_vf_cfg *VAR_4,
       int VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_get_iface_list *VAR_7;
 struct be_cmd_resp_get_iface_list *VAR_8;
 int VAR_9;

 FUNC_4(&VAR_3->mcc_lock);

 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6) {
  VAR_9 = -VAR_1;
  goto err;
 }
 VAR_7 = FUNC_2(VAR_6);

 FUNC_1(&VAR_7->hdr, VAR_0,
          VAR_2, sizeof(*VAR_8),
          VAR_6, ((void*)0));
 VAR_7->hdr.domain = VAR_5 + 1;

 VAR_9 = FUNC_0(VAR_3);
 if (!VAR_9) {
  VAR_8 = (struct be_cmd_resp_get_iface_list *)VAR_7;
  VAR_4->if_handle = FUNC_3(VAR_8->if_desc.if_id);
 }

err:
 FUNC_5(&VAR_3->mcc_lock);
 return VAR_9;
}
