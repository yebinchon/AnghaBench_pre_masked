
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {struct be_cmd_get_def_gateway_req* va; } ;
struct be_cmd_get_def_gateway_resp {int dummy; } ;
struct be_cmd_get_def_gateway_req {int ip_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,struct be_cmd_get_def_gateway_resp*,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;

int FUNC_2(struct beiscsi_hba *VAR_2, u32 VAR_3,
        struct be_cmd_get_def_gateway_resp *VAR_4)
{
 struct be_cmd_get_def_gateway_req *VAR_5;
 struct be_dma_mem VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_6, VAR_0,
   VAR_1,
   sizeof(*VAR_4));
 if (VAR_7)
  return VAR_7;

 VAR_5 = VAR_6.va;
 VAR_5->ip_type = VAR_3;

 return FUNC_0(VAR_2, &VAR_6, ((void*)0),
         VAR_4, sizeof(*VAR_4));
}
