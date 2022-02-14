
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct beiscsi_hba {int interface_handle; } ;
struct be_ip_addr_subnet_format {int dummy; } ;
struct be_dma_mem {struct be_cmd_set_ip_addr_req* va; } ;
struct TYPE_5__ {int size_of_structure; int subnet_mask; int addr; int ip_type; } ;
struct TYPE_7__ {scalar_t__ status; TYPE_1__ ip_addr; int interface_hndl; int action; } ;
struct TYPE_8__ {int record_entry_count; TYPE_3__ ip_record; } ;
struct be_cmd_set_ip_addr_req {TYPE_4__ ip_params; } ;
struct TYPE_6__ {int subnet_mask; int addr; int ip_type; } ;
struct be_cmd_get_if_info_resp {TYPE_2__ ip_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,int *,int ) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,int,scalar_t__) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct beiscsi_hba *VAR_5,
    struct be_cmd_get_if_info_resp *VAR_6)
{
 struct be_cmd_set_ip_addr_req *VAR_7;
 struct be_dma_mem VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, &VAR_8, VAR_1,
   VAR_4,
   sizeof(*VAR_7));
 if (VAR_9)
  return VAR_9;

 VAR_7 = VAR_8.va;
 VAR_7->ip_params.record_entry_count = 1;
 VAR_7->ip_params.ip_record.action = VAR_2;
 VAR_7->ip_params.ip_record.interface_hndl =
  VAR_5->interface_handle;
 VAR_7->ip_params.ip_record.ip_addr.size_of_structure =
  sizeof(struct be_ip_addr_subnet_format);
 VAR_7->ip_params.ip_record.ip_addr.ip_type = VAR_6->ip_addr.ip_type;
 FUNC_3(VAR_7->ip_params.ip_record.ip_addr.addr,
        VAR_6->ip_addr.addr,
        sizeof(VAR_6->ip_addr.addr));
 FUNC_3(VAR_7->ip_params.ip_record.ip_addr.subnet_mask,
        VAR_6->ip_addr.subnet_mask,
        sizeof(VAR_6->ip_addr.subnet_mask));
 VAR_9 = FUNC_0(VAR_5, &VAR_8, ((void*)0), ((void*)0), 0);
 if (VAR_9 < 0 || VAR_7->ip_params.ip_record.status) {
  FUNC_1(VAR_5, VAR_3, VAR_0,
       "BG_%d : failed to clear IP: rc %d status %d\n",
       VAR_9, VAR_7->ip_params.ip_record.status);
 }
 return VAR_9;
}
