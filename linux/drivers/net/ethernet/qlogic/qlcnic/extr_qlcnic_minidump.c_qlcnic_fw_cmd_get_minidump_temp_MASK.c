
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qlcnic_fw_dump {int use_pex_dma; int cap_mask; int * dma_buffer; int phys_addr; int * tmpl_hdr; } ;
struct qlcnic_hardware_context {struct qlcnic_fw_dump fw_dump; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int ) ;
 void* FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_fw_dump*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,scalar_t__*,scalar_t__) ;
 int FUNC_7 (struct qlcnic_adapter*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (scalar_t__) ;

int FUNC_11(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_hardware_context *VAR_5;
 struct qlcnic_fw_dump *VAR_6;
 u32 VAR_7, VAR_8, *VAR_9;
 u8 VAR_10 = 0;
 u32 VAR_11 = 0;
 void *VAR_12;
 int VAR_13;

 VAR_5 = VAR_4->ahw;
 VAR_6 = &VAR_5->fw_dump;
 VAR_13 = FUNC_7(VAR_4, &VAR_7, &VAR_11,
            &VAR_10);
 if (VAR_13) {
  FUNC_1(&VAR_4->pdev->dev,
   "Can't get template size %d\n", VAR_13);
  return -VAR_0;
 }

 VAR_6->tmpl_hdr = FUNC_10(VAR_11);
 if (!VAR_6->tmpl_hdr)
  return -VAR_1;

 VAR_9 = (u32 *)VAR_6->tmpl_hdr;
 if (VAR_10)
  goto flash_temp;

 VAR_13 = FUNC_0(VAR_4, VAR_9, VAR_11);

 if (VAR_13) {
flash_temp:
  VAR_13 = FUNC_6(VAR_4, (u8 *)VAR_9,
       VAR_11);

  if (VAR_13) {
   FUNC_1(&VAR_4->pdev->dev,
    "Failed to get minidump template header %d\n",
    VAR_13);
   FUNC_9(VAR_6->tmpl_hdr);
   VAR_6->tmpl_hdr = ((void*)0);
   return -VAR_0;
  }
 }

 VAR_8 = FUNC_8((uint32_t *)VAR_9, VAR_11);

 if (VAR_8) {
  FUNC_1(&VAR_4->pdev->dev,
   "Template header checksum validation failed\n");
  FUNC_9(VAR_6->tmpl_hdr);
  VAR_6->tmpl_hdr = ((void*)0);
  return -VAR_0;
 }

 FUNC_4(VAR_4, VAR_6);

 if (VAR_6->use_pex_dma) {
  VAR_6->dma_buffer = ((void*)0);
  VAR_12 = FUNC_3(&VAR_4->pdev->dev,
       VAR_3,
       &VAR_6->phys_addr,
       VAR_2);
  if (!VAR_12)
   VAR_6->use_pex_dma = 0;
  else
   VAR_6->dma_buffer = VAR_12;
 }


 FUNC_2(&VAR_4->pdev->dev,
   "Default minidump capture mask 0x%x\n",
   VAR_6->cap_mask);

 FUNC_5(VAR_4);

 return 0;
}
