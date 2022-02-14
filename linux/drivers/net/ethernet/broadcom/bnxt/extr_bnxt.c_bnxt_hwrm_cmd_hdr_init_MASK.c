
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct input {void* resp_addr; void* target_id; void* cmpl_ring; void* req_type; } ;
struct bnxt {int hwrm_cmd_resp_dma_addr; int hwrm_cmd_kong_resp_dma_addr; } ;


 scalar_t__ FUNC_0 (struct bnxt*,struct input*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

void FUNC_3(struct bnxt *VAR_0, void *VAR_1, u16 VAR_2,
       u16 VAR_3, u16 VAR_4)
{
 struct input *VAR_5 = VAR_1;

 VAR_5->req_type = FUNC_1(VAR_2);
 VAR_5->cmpl_ring = FUNC_1(VAR_3);
 VAR_5->target_id = FUNC_1(VAR_4);
 if (FUNC_0(VAR_0, VAR_5))
  VAR_5->resp_addr = FUNC_2(VAR_0->hwrm_cmd_kong_resp_dma_addr);
 else
  VAR_5->resp_addr = FUNC_2(VAR_0->hwrm_cmd_resp_dma_addr);
}
