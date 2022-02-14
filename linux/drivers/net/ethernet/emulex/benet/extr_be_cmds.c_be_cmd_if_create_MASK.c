
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct be_mcc_wrb {int member_0; } ;
struct be_cmd_resp_if_create {int pmac_id; int interface_id; } ;
struct TYPE_2__ {void* domain; } ;
struct be_cmd_req_if_create {int pmac_invalid; void* enable_flags; void* capability_flags; TYPE_1__ hdr; } ;
struct be_adapter {void** pmac_id; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct be_adapter*,struct be_mcc_wrb*) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (struct be_mcc_wrb*) ;
 void* FUNC_6 (int ) ;

int FUNC_7(struct be_adapter *VAR_2, u32 VAR_3, u32 VAR_4,
       u32 *VAR_5, u32 VAR_6)
{
 struct be_mcc_wrb VAR_7 = {0};
 struct be_cmd_req_if_create *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(&VAR_7);
 FUNC_3(&VAR_8->hdr, VAR_0,
          VAR_1,
          sizeof(*VAR_8), &VAR_7, ((void*)0));
 VAR_8->hdr.domain = VAR_6;
 VAR_8->capability_flags = FUNC_4(VAR_3);
 VAR_8->enable_flags = FUNC_4(VAR_4);
 VAR_8->pmac_invalid = 1;

 VAR_9 = FUNC_1(VAR_2, &VAR_7);
 if (!VAR_9) {
  struct be_cmd_resp_if_create *VAR_10 = FUNC_5(&VAR_7);

  *VAR_5 = FUNC_6(VAR_10->interface_id);


  if (FUNC_0(VAR_2) && FUNC_2(VAR_2))
   VAR_2->pmac_id[0] = FUNC_6(VAR_10->pmac_id);
 }
 return VAR_9;
}
