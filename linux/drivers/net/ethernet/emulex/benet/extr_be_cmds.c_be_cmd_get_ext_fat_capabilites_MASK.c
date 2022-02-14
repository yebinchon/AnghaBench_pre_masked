
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; struct be_cmd_req_get_ext_fat_caps* va; } ;
struct be_cmd_req_get_ext_fat_caps {int parameter_type; int hdr; } ;
struct be_adapter {int mbox_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,int ,int ,int ,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_4,
       struct be_dma_mem *VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_get_ext_fat_caps *VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_4, VAR_3,
       VAR_0))
  return -VAR_2;

 if (FUNC_4(&VAR_4->mbox_lock))
  return -1;

 VAR_6 = FUNC_6(VAR_4);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }

 VAR_7 = VAR_5->va;
 FUNC_2(&VAR_7->hdr, VAR_0,
          VAR_3,
          VAR_5->size, VAR_6, VAR_5);
 VAR_7->parameter_type = FUNC_3(1);

 VAR_8 = FUNC_1(VAR_4);
err:
 FUNC_5(&VAR_4->mbox_lock);
 return VAR_8;
}
