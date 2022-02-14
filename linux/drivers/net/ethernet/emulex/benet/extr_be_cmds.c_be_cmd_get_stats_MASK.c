
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; struct be_cmd_req_hdr* va; } ;
struct be_cmd_req_hdr {int version; } ;
struct be_adapter {int stats_cmd_sent; int mcc_lock; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_cmd_req_hdr*,int ,int ,int ,struct be_mcc_wrb*,struct be_dma_mem*) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

int FUNC_8(struct be_adapter *VAR_3, struct be_dma_mem *VAR_4)
{
 struct be_mcc_wrb *VAR_5;
 struct be_cmd_req_hdr *VAR_6;
 int VAR_7 = 0;

 FUNC_5(&VAR_3->mcc_lock);

 VAR_5 = FUNC_7(VAR_3);
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto err;
 }
 VAR_6 = VAR_4->va;

 FUNC_3(VAR_6, VAR_0,
          VAR_2, VAR_4->size, VAR_5,
          VAR_4);


 if (FUNC_0(VAR_3))
  VAR_6->version = 0;
 if (FUNC_1(VAR_3) || FUNC_4(VAR_3))
  VAR_6->version = 1;
 else
  VAR_6->version = 2;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7)
  goto err;

 VAR_3->stats_cmd_sent = 1;

err:
 FUNC_6(&VAR_3->mcc_lock);
 return VAR_7;
}
