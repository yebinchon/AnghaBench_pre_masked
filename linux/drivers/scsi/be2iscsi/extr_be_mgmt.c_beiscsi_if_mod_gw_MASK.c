
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {struct be_cmd_set_def_gateway_req* va; } ;
struct TYPE_2__ {int addr; scalar_t__ ip_type; } ;
struct be_cmd_set_def_gateway_req {TYPE_1__ ip_addr; scalar_t__ action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,int *,int ) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct beiscsi_hba *VAR_5,
        u32 VAR_6, u32 VAR_7, u8 *VAR_8)
{
 struct be_cmd_set_def_gateway_req *VAR_9;
 struct be_dma_mem VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_5, &VAR_10, VAR_1,
   VAR_4,
   sizeof(*VAR_9));
 if (VAR_11)
  return VAR_11;

 VAR_9 = VAR_10.va;
 VAR_9->action = VAR_6;
 VAR_9->ip_addr.ip_type = VAR_7;
 FUNC_2(VAR_9->ip_addr.addr, VAR_8,
        (VAR_7 < VAR_0) ? VAR_2 : VAR_3);
 return FUNC_0(VAR_5, &VAR_10, ((void*)0), ((void*)0), 0);
}
