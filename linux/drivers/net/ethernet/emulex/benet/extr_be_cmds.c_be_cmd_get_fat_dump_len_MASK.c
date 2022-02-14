
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct be_mcc_wrb {int member_0; } ;
struct be_cmd_resp_get_fat {scalar_t__ log_size; } ;
struct be_cmd_req_get_fat {int fat_operation; int hdr; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*,struct be_mcc_wrb*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

int FUNC_5(struct be_adapter *VAR_3, u32 *VAR_4)
{
 struct be_mcc_wrb VAR_5 = {0};
 struct be_cmd_req_get_fat *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(&VAR_5);

 FUNC_1(&VAR_6->hdr, VAR_0,
          VAR_1, sizeof(*VAR_6),
          &VAR_5, ((void*)0));
 VAR_6->fat_operation = FUNC_2(VAR_2);
 VAR_7 = FUNC_0(VAR_3, &VAR_5);
 if (!VAR_7) {
  struct be_cmd_resp_get_fat *VAR_8 = FUNC_3(&VAR_5);

  if (VAR_4 && VAR_8->log_size)
   *VAR_4 = FUNC_4(VAR_8->log_size) -
     sizeof(u32);
 }
 return VAR_7;
}
