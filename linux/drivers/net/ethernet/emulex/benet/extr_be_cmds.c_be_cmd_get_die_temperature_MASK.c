
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_get_cntl_addnl_attribs {int hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct be_cmd_req_get_cntl_addnl_attribs* FUNC_2 (struct be_mcc_wrb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_3)
{
 struct be_mcc_wrb *VAR_4;
 struct be_cmd_req_get_cntl_addnl_attribs *VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_3->mcc_lock);

 VAR_4 = FUNC_5(VAR_3);
 if (!VAR_4) {
  VAR_6 = -VAR_1;
  goto err;
 }
 VAR_5 = FUNC_2(VAR_4);

 FUNC_1(&VAR_5->hdr, VAR_0,
          VAR_2,
          sizeof(*VAR_5), VAR_4, ((void*)0));

 VAR_6 = FUNC_0(VAR_3);
err:
 FUNC_4(&VAR_3->mcc_lock);
 return VAR_6;
}
