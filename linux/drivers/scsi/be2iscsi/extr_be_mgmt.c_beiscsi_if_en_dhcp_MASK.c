
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct beiscsi_hba {int interface_handle; } ;
struct be_dma_mem {struct be_cmd_set_dhcp_req* va; } ;
struct be_cmd_set_dhcp_req {int flags; int retry_count; int ip_type; int interface_hndl; } ;
struct TYPE_4__ {int ip_type; int * addr; } ;
struct be_cmd_get_if_info_resp {TYPE_2__ ip_addr; scalar_t__ dhcp_state; } ;
struct TYPE_3__ {int addr; } ;
struct be_cmd_get_def_gateway_resp {TYPE_1__ ip_addr; } ;
typedef int gw_resp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,int *,int ) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_cmd_get_if_info_resp*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,struct be_cmd_get_def_gateway_resp*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,struct be_cmd_get_if_info_resp**) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_7 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_8 (struct be_cmd_get_if_info_resp*) ;
 int FUNC_9 (struct be_cmd_get_def_gateway_resp*,int ,int) ;

int FUNC_10(struct beiscsi_hba *VAR_5, u32 VAR_6)
{
 struct be_cmd_get_def_gateway_resp VAR_7;
 struct be_cmd_get_if_info_resp *VAR_8;
 struct be_cmd_set_dhcp_req *VAR_9;
 struct be_dma_mem VAR_10;
 u8 *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_5, VAR_6, &VAR_8);
 if (VAR_12)
  return VAR_12;

 if (VAR_8->dhcp_state) {
  FUNC_6(VAR_5, VAR_3, VAR_0,
    "BG_%d : DHCP Already Enabled\n");
  goto exit;
 }


 if (!FUNC_5(VAR_8->ip_addr.addr, VAR_6)) {
  VAR_12 = FUNC_1(VAR_5, VAR_8);
  if (VAR_12)
   goto exit;
 }


 FUNC_9(&VAR_7, 0, sizeof(VAR_7));

 VAR_12 = FUNC_2(VAR_5, VAR_8->ip_addr.ip_type, &VAR_7);
 if (VAR_12) {
  FUNC_6(VAR_5, VAR_3, VAR_0,
       "BG_%d : Failed to Get Gateway Addr\n");
  goto exit;
 }
 VAR_11 = (u8 *)&VAR_7.ip_addr.addr;
 if (!FUNC_5(VAR_11, VAR_8->ip_addr.ip_type)) {
  VAR_12 = FUNC_4(VAR_5, VAR_2,
           VAR_8->ip_addr.ip_type, VAR_11);
  if (VAR_12) {
   FUNC_6(VAR_5, VAR_3, VAR_0,
        "BG_%d : Failed to clear Gateway Addr Set\n");
   goto exit;
  }
 }

 VAR_12 = FUNC_7(VAR_5, &VAR_10, VAR_1,
   VAR_4,
   sizeof(*VAR_9));
 if (VAR_12)
  goto exit;

 VAR_9 = VAR_10.va;
 VAR_9->flags = 1;
 VAR_9->retry_count = 1;
 VAR_9->interface_hndl = VAR_5->interface_handle;
 VAR_9->ip_type = VAR_6;
 VAR_12 = FUNC_0(VAR_5, &VAR_10, ((void*)0), ((void*)0), 0);

exit:
 FUNC_8(VAR_8);
 return VAR_12;
}
