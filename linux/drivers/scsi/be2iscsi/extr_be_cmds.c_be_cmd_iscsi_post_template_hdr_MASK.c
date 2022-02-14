
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_post_template_pages_req {int pages; int type; int num_pages; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int va; } ;
struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int ,int ,struct be_dma_mem*) ;
 int FUNC_4 (struct be_ctrl_info*) ;
 int FUNC_5 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_post_template_pages_req* FUNC_6 (struct be_mcc_wrb*) ;
 int FUNC_7 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct be_mcc_wrb* FUNC_10 (int *) ;

int FUNC_11(struct be_ctrl_info *VAR_3,
        struct be_dma_mem *VAR_4)
{
 struct be_mcc_wrb *VAR_5 = FUNC_10(&VAR_3->mbox_mem);
 struct be_post_template_pages_req *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 FUNC_8(&VAR_3->mbox_lock);

 FUNC_7(VAR_5, 0, sizeof(*VAR_5));
 FUNC_5(VAR_5, sizeof(*VAR_6), 1, 0);
 FUNC_2(&VAR_6->hdr, VAR_1,
      VAR_2,
      sizeof(*VAR_6));

 VAR_6->num_pages = FUNC_1(VAR_4->va, VAR_4->size);
 VAR_6->type = VAR_0;
 FUNC_3(VAR_6->pages, FUNC_0(VAR_6->pages), VAR_4);

 VAR_7 = FUNC_4(VAR_3);
 FUNC_9(&VAR_3->mbox_lock);
 return VAR_7;
}
