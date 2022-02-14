
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_mcc_wrb {int member_0; } ;
struct TYPE_2__ {int domain; } ;
struct be_cmd_req_if_destroy {int interface_id; TYPE_1__ hdr; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,struct be_mcc_wrb*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_2 (int) ;
 struct be_cmd_req_if_destroy* FUNC_3 (struct be_mcc_wrb*) ;

int FUNC_4(struct be_adapter *VAR_2, int VAR_3, u32 VAR_4)
{
 struct be_mcc_wrb VAR_5 = {0};
 struct be_cmd_req_if_destroy *VAR_6;
 int VAR_7;

 if (VAR_3 == -1)
  return 0;

 VAR_6 = FUNC_3(&VAR_5);

 FUNC_1(&VAR_6->hdr, VAR_0,
          VAR_1,
          sizeof(*VAR_6), &VAR_5, ((void*)0));
 VAR_6->hdr.domain = VAR_4;
 VAR_6->interface_id = FUNC_2(VAR_3);

 VAR_7 = FUNC_0(VAR_2, &VAR_5);
 return VAR_7;
}
