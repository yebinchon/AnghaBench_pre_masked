
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gradient_sat; int bitblt; int render; } ;
union rga_mode_ctrl {scalar_t__ val; TYPE_1__ data; } ;
union rga_alpha_ctrl1 {scalar_t__ val; } ;
union rga_alpha_ctrl0 {scalar_t__ val; } ;
typedef scalar_t__ u32 ;
struct rockchip_rga {scalar_t__* cmdbuf_virt; } ;
struct rga_ctx {struct rockchip_rga* rga; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct rga_ctx *VAR_6)
{
 struct rockchip_rga *VAR_7 = VAR_6->rga;
 u32 *VAR_8 = VAR_7->cmdbuf_virt;
 union rga_mode_ctrl VAR_9;
 union rga_alpha_ctrl0 VAR_10;
 union rga_alpha_ctrl1 VAR_11;

 VAR_9.val = 0;
 VAR_10 = 0;
 VAR_11 = 0;

 VAR_9.data.gradient_sat = 1;
 VAR_9.data.render = VAR_5;
 VAR_9.data.bitblt = VAR_3;


 VAR_8[(VAR_0 - VAR_2) >> 2] = VAR_10;
 VAR_8[(VAR_1 - VAR_2) >> 2] = VAR_11;

 VAR_8[(VAR_4 - VAR_2) >> 2] = VAR_9.val;
}
