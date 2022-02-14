
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {struct be_cmd_req_seeprom_read* va; } ;
struct be_cmd_req_seeprom_read {int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct be_mcc_wrb* FUNC_4 (struct be_adapter*) ;

int FUNC_5(struct be_adapter *VAR_3,
       struct be_dma_mem *VAR_4)
{
 struct be_mcc_wrb *VAR_5;
 struct be_cmd_req_seeprom_read *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->mcc_lock);

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto err;
 }
 VAR_6 = VAR_4->va;

 FUNC_1(&VAR_6->hdr, VAR_0,
          VAR_2, sizeof(*VAR_6), VAR_5,
          VAR_4);

 VAR_7 = FUNC_0(VAR_3);

err:
 FUNC_3(&VAR_3->mcc_lock);
 return VAR_7;
}
