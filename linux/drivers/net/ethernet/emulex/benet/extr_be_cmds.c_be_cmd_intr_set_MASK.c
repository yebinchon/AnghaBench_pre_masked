
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_intr_set {int intr_enabled; int hdr; } ;
struct be_adapter {int mbox_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 struct be_cmd_req_intr_set* FUNC_2 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;

int FUNC_6(struct be_adapter *VAR_2, bool VAR_3)
{
 struct be_mcc_wrb *VAR_4;
 struct be_cmd_req_intr_set *VAR_5;
 int VAR_6;

 if (FUNC_3(&VAR_2->mbox_lock))
  return -1;

 VAR_4 = FUNC_5(VAR_2);

 VAR_5 = FUNC_2(VAR_4);

 FUNC_1(&VAR_5->hdr, VAR_0,
          VAR_1, sizeof(*VAR_5),
          VAR_4, ((void*)0));

 VAR_5->intr_enabled = VAR_3;

 VAR_6 = FUNC_0(VAR_2);

 FUNC_4(&VAR_2->mbox_lock);
 return VAR_6;
}
