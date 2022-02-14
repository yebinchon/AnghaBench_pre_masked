
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_remove_template_pages_req {int type; int hdr; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_remove_template_pages_req* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (int *) ;

int FUNC_8(struct be_ctrl_info *VAR_3)
{
 struct be_mcc_wrb *VAR_4 = FUNC_7(&VAR_3->mbox_mem);
 struct be_remove_template_pages_req *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 FUNC_5(&VAR_3->mbox_lock);

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 FUNC_2(VAR_4, sizeof(*VAR_5), 1, 0);
 FUNC_0(&VAR_5->hdr, VAR_1,
      VAR_2,
      sizeof(*VAR_5));

 VAR_5->type = VAR_0;

 VAR_6 = FUNC_1(VAR_3);
 FUNC_6(&VAR_3->mbox_lock);
 return VAR_6;
}
