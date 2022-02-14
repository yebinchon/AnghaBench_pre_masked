
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {struct be_cmd_req_acpi_wol_magic_config* va; } ;
struct be_cmd_req_acpi_wol_magic_config {int magic_mac; int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_4, u8 *VAR_5,
       struct be_dma_mem *VAR_6)
{
 struct be_mcc_wrb *VAR_7;
 struct be_cmd_req_acpi_wol_magic_config *VAR_8;
 int VAR_9;

 FUNC_3(&VAR_4->mcc_lock);

 VAR_7 = FUNC_5(VAR_4);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }
 VAR_8 = VAR_6->va;

 FUNC_1(&VAR_8->hdr, VAR_0,
          VAR_3, sizeof(*VAR_8),
          VAR_7, VAR_6);
 FUNC_2(VAR_8->magic_mac, VAR_5, VAR_2);

 VAR_9 = FUNC_0(VAR_4);

err:
 FUNC_4(&VAR_4->mcc_lock);
 return VAR_9;
}
