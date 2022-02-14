
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_post_sgl_pages_req {int hdr; } ;
struct be_mcc_wrb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_post_sgl_pages_req* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (int *) ;

int FUNC_7(struct beiscsi_hba *VAR_2)
{
 struct be_ctrl_info *VAR_3 = &VAR_2->ctrl;
 struct be_mcc_wrb *VAR_4 = FUNC_6(&VAR_3->mbox_mem);
 struct be_post_sgl_pages_req *VAR_5;
 int VAR_6;

 FUNC_4(&VAR_3->mbox_lock);

 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_4, sizeof(*VAR_5), 1, 0);
 FUNC_0(&VAR_5->hdr, VAR_0,
      VAR_1, sizeof(*VAR_5));
 VAR_6 = FUNC_1(VAR_3);

 FUNC_5(&VAR_3->mbox_lock);
 return VAR_6;
}
