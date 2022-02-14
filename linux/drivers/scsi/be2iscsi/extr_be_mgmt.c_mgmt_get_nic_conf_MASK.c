
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {int dummy; } ;
struct be_cmd_get_nic_conf_resp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,struct be_cmd_get_nic_conf_resp*,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;

int FUNC_2(struct beiscsi_hba *VAR_2,
        struct be_cmd_get_nic_conf_resp *VAR_3)
{
 struct be_dma_mem VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_4, VAR_0,
   VAR_1,
   sizeof(*VAR_3));
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2, &VAR_4, ((void*)0),
         VAR_3, sizeof(*VAR_3));
}
