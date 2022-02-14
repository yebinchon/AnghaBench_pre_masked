
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct isp_device {int dummy; } ;
struct isp_csi2_device {int regs1; struct isp_csi2_ctx_cfg* contexts; struct isp_device* isp; } ;
struct isp_csi2_ctx_cfg {int ctxnum; void* pong_addr; void* ping_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct isp_device*,void*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct isp_csi2_device *VAR_0, u32 VAR_1)
{
 struct isp_device *VAR_2 = VAR_0->isp;
 struct isp_csi2_ctx_cfg *VAR_3 = &VAR_0->contexts[0];

 VAR_3->ping_addr = VAR_1;
 VAR_3->pong_addr = VAR_1;
 FUNC_2(VAR_2, VAR_3->ping_addr,
         VAR_0->regs1, FUNC_0(VAR_3->ctxnum));
 FUNC_2(VAR_2, VAR_3->pong_addr,
         VAR_0->regs1, FUNC_1(VAR_3->ctxnum));
}
