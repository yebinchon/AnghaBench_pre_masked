
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct beiscsi_hba {int interface_handle; } ;
struct be_ip_addr_subnet_format {int dummy; } ;
struct be_dma_mem {struct be_cmd_set_ip_addr_req* va; } ;
struct TYPE_4__ {int size_of_structure; int subnet_mask; int addr; scalar_t__ ip_type; } ;
struct TYPE_5__ {scalar_t__ status; TYPE_1__ ip_addr; int interface_hndl; int action; } ;
struct TYPE_6__ {int record_entry_count; TYPE_2__ ip_record; } ;
struct be_cmd_set_ip_addr_req {TYPE_3__ ip_params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*,int,scalar_t__) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,int *,int *,int ) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct beiscsi_hba *VAR_8, u8 *VAR_9,
    u8 *VAR_10, u32 VAR_11)
{
 struct be_cmd_set_ip_addr_req *VAR_12;
 struct be_dma_mem VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_8, &VAR_13, VAR_1,
   VAR_7,
   sizeof(*VAR_12));
 if (VAR_15)
  return VAR_15;

 VAR_12 = VAR_13.va;
 VAR_12->ip_params.record_entry_count = 1;
 VAR_12->ip_params.ip_record.action = VAR_3;
 VAR_12->ip_params.ip_record.interface_hndl =
  VAR_8->interface_handle;
 VAR_12->ip_params.ip_record.ip_addr.size_of_structure =
  sizeof(struct be_ip_addr_subnet_format);
 VAR_12->ip_params.ip_record.ip_addr.ip_type = VAR_11;
 VAR_14 = (VAR_11 < VAR_0) ? VAR_4 : VAR_5;
 FUNC_3(VAR_12->ip_params.ip_record.ip_addr.addr, VAR_9, VAR_14);
 if (VAR_10)
  FUNC_3(VAR_12->ip_params.ip_record.ip_addr.subnet_mask,
         VAR_10, VAR_14);

 VAR_15 = FUNC_1(VAR_8, &VAR_13, ((void*)0), ((void*)0), 0);




 if (VAR_15 < 0 || VAR_12->ip_params.ip_record.status) {
  FUNC_0(VAR_8, VAR_6,
       "BG_%d : failed to set IP: rc %d status %d\n",
       VAR_15, VAR_12->ip_params.ip_record.status);
  if (VAR_12->ip_params.ip_record.status)
   VAR_15 = -VAR_2;
 }
 return VAR_15;
}
