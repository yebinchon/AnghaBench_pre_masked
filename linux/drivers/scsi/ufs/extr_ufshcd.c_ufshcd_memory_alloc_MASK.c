
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utp_transfer_req_desc {int dummy; } ;
struct utp_transfer_cmd_desc {int dummy; } ;
struct utp_task_req_desc {int dummy; } ;
struct ufshcd_lrb {int dummy; } ;
struct ufs_hba {int nutrs; int ucdl_dma_addr; int utrdl_dma_addr; int nutmrs; int utmrdl_dma_addr; int dev; int lrb; void* utmrdl_base_addr; void* utrdl_base_addr; void* ucdl_base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int,int ) ;
 void* FUNC_3 (int ,size_t,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ufs_hba *VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6;


 VAR_6 = (sizeof(struct utp_transfer_cmd_desc) * VAR_3->nutrs);
 VAR_3->ucdl_base_addr = FUNC_3(VAR_3->dev,
        VAR_6,
        &VAR_3->ucdl_dma_addr,
        VAR_1);







 if (!VAR_3->ucdl_base_addr ||
     FUNC_0(VAR_3->ucdl_dma_addr & (VAR_2 - 1))) {
  FUNC_1(VAR_3->dev,
   "Command Descriptor Memory allocation failed\n");
  goto out;
 }





 VAR_5 = (sizeof(struct utp_transfer_req_desc) * VAR_3->nutrs);
 VAR_3->utrdl_base_addr = FUNC_3(VAR_3->dev,
         VAR_5,
         &VAR_3->utrdl_dma_addr,
         VAR_1);
 if (!VAR_3->utrdl_base_addr ||
     FUNC_0(VAR_3->utrdl_dma_addr & (VAR_2 - 1))) {
  FUNC_1(VAR_3->dev,
   "Transfer Descriptor Memory allocation failed\n");
  goto out;
 }





 VAR_4 = sizeof(struct utp_task_req_desc) * VAR_3->nutmrs;
 VAR_3->utmrdl_base_addr = FUNC_3(VAR_3->dev,
          VAR_4,
          &VAR_3->utmrdl_dma_addr,
          VAR_1);
 if (!VAR_3->utmrdl_base_addr ||
     FUNC_0(VAR_3->utmrdl_dma_addr & (VAR_2 - 1))) {
  FUNC_1(VAR_3->dev,
  "Task Management Descriptor Memory allocation failed\n");
  goto out;
 }


 VAR_3->lrb = FUNC_2(VAR_3->dev,
    VAR_3->nutrs, sizeof(struct ufshcd_lrb),
    VAR_1);
 if (!VAR_3->lrb) {
  FUNC_1(VAR_3->dev, "LRB Memory allocation failed\n");
  goto out;
 }
 return 0;
out:
 return -VAR_0;
}
