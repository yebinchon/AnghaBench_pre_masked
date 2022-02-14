
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {int domain; } ;
struct be_cmd_req_pmac_del {void* pmac_id; void* if_id; TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (int) ;
 struct be_cmd_req_pmac_del* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

int FUNC_7(struct be_adapter *VAR_3, u32 VAR_4, int VAR_5, u32 VAR_6)
{
 struct be_mcc_wrb *VAR_7;
 struct be_cmd_req_pmac_del *VAR_8;
 int VAR_9;

 if (VAR_5 == -1)
  return 0;

 FUNC_4(&VAR_3->mcc_lock);

 VAR_7 = FUNC_6(VAR_3);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }
 VAR_8 = FUNC_3(VAR_7);

 FUNC_1(&VAR_8->hdr, VAR_0,
          VAR_2, sizeof(*VAR_8),
          VAR_7, ((void*)0));

 VAR_8->hdr.domain = VAR_6;
 VAR_8->if_id = FUNC_2(VAR_4);
 VAR_8->pmac_id = FUNC_2(VAR_5);

 VAR_9 = FUNC_0(VAR_3);

err:
 FUNC_5(&VAR_3->mcc_lock);
 return VAR_9;
}
