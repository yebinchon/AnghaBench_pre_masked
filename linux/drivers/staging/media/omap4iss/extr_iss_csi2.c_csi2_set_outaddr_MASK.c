
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct iss_csi2_device {int regs1; int iss; struct iss_csi2_ctx_cfg* contexts; } ;
struct iss_csi2_ctx_cfg {void* pong_addr; int ctxnum; void* ping_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,void*) ;

__attribute__((used)) static void FUNC_3(struct iss_csi2_device *VAR_0, u32 VAR_1)
{
 struct iss_csi2_ctx_cfg *VAR_2 = &VAR_0->contexts[0];

 VAR_2->ping_addr = VAR_1;
 VAR_2->pong_addr = VAR_1;
 FUNC_2(VAR_0->iss, VAR_0->regs1, FUNC_0(VAR_2->ctxnum),
        VAR_2->ping_addr);
 FUNC_2(VAR_0->iss, VAR_0->regs1, FUNC_1(VAR_2->ctxnum),
        VAR_2->pong_addr);
}
