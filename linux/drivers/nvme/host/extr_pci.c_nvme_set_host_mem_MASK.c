
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int device; int admin_q; int page_size; } ;
struct nvme_dev {int host_mem_size; int nr_host_mem_descs; TYPE_2__ ctrl; int host_mem_descs_dma; } ;
struct TYPE_3__ {void* dword15; void* dword14; void* dword13; void* dword12; void* dword11; void* fid; int opcode; } ;
struct nvme_command {TYPE_1__ features; } ;
typedef int c ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_command*,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct nvme_command*,int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nvme_dev *VAR_2, u32 VAR_3)
{
 u64 VAR_4 = VAR_2->host_mem_descs_dma;
 struct nvme_command VAR_5;
 int VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.features.opcode = VAR_1;
 VAR_5.features.fid = FUNC_0(VAR_0);
 VAR_5.features.dword11 = FUNC_0(VAR_3);
 VAR_5.features.dword12 = FUNC_0(VAR_2->host_mem_size >>
           FUNC_2(VAR_2->ctrl.page_size));
 VAR_5.features.dword13 = FUNC_0(FUNC_3(VAR_4));
 VAR_5.features.dword14 = FUNC_0(FUNC_6(VAR_4));
 VAR_5.features.dword15 = FUNC_0(VAR_2->nr_host_mem_descs);

 VAR_6 = FUNC_5(VAR_2->ctrl.admin_q, &VAR_5, ((void*)0), 0);
 if (VAR_6) {
  FUNC_1(VAR_2->ctrl.device,
    "failed to set host mem (err %d, flags %#x).\n",
    VAR_6, VAR_3);
 }
 return VAR_6;
}
