
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_fat_conf_params {int dummy; } ;
struct be_dma_mem {int size; struct be_cmd_req_set_ext_fat_caps* va; } ;
struct be_cmd_req_set_ext_fat_caps {int hdr; int set_params; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int ,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_2 (int *,struct be_fat_conf_params*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_3,
       struct be_dma_mem *VAR_4,
       struct be_fat_conf_params *VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_set_ext_fat_caps *VAR_7;
 int VAR_8;

 FUNC_3(&VAR_3->mcc_lock);

 VAR_6 = FUNC_5(VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }

 VAR_7 = VAR_4->va;
 FUNC_2(&VAR_7->set_params, VAR_5, sizeof(struct be_fat_conf_params));
 FUNC_1(&VAR_7->hdr, VAR_0,
          VAR_2,
          VAR_4->size, VAR_6, VAR_4);

 VAR_8 = FUNC_0(VAR_3);
err:
 FUNC_4(&VAR_3->mcc_lock);
 return VAR_8;
}
