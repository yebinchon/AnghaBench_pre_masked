
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_hdr {int dummy; } ;
struct be_adapter {int mbox_lock; TYPE_1__* pdev; scalar_t__ db; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_cmd_req_hdr*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_2 (int *,char*) ;
 struct be_cmd_req_hdr* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct be_mcc_wrb* FUNC_9 (struct be_adapter*) ;

int FUNC_10(struct be_adapter *VAR_4)
{
 struct be_mcc_wrb *VAR_5;
 struct be_cmd_req_hdr *VAR_6;
 int VAR_7;

 if (FUNC_5(VAR_4)) {
  FUNC_4(VAR_3,
     VAR_4->db + VAR_2);
  VAR_7 = FUNC_6(VAR_4);
  if (VAR_7)
   FUNC_2(&VAR_4->pdev->dev,
    "Adapter in non recoverable error\n");
  return VAR_7;
 }

 if (FUNC_7(&VAR_4->mbox_lock))
  return -1;

 VAR_5 = FUNC_9(VAR_4);
 VAR_6 = FUNC_3(VAR_5);

 FUNC_1(VAR_6, VAR_0,
          VAR_1, sizeof(*VAR_6), VAR_5,
          ((void*)0));

 VAR_7 = FUNC_0(VAR_4);

 FUNC_8(&VAR_4->mbox_lock);
 return VAR_7;
}
