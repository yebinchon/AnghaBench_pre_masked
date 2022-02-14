
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_rga {int* cmdbuf_virt; } ;
struct rga_ctx {struct rockchip_rga* rga; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct rga_ctx *VAR_3, void *VAR_4)
{
 struct rockchip_rga *VAR_5 = VAR_3->rga;
 u32 *VAR_6 = VAR_5->cmdbuf_virt;
 unsigned int VAR_7;

 VAR_7 = VAR_1 - VAR_2;
 VAR_6[VAR_7 >> 2] = FUNC_0(VAR_4) >> 4;

 VAR_7 = VAR_0 - VAR_2;
 VAR_6[VAR_7 >> 2] |= 0x7 << 4;
}
