
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_rga {struct rga_ctx* curr; } ;
struct rga_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rga_ctx*) ;
 int FUNC_1 (struct rockchip_rga*,int ,int) ;

void FUNC_2(struct rockchip_rga *VAR_3)
{
 struct rga_ctx *VAR_4 = VAR_3->curr;

 FUNC_0(VAR_4);

 FUNC_1(VAR_3, VAR_2, 0x00);

 FUNC_1(VAR_3, VAR_2, 0x22);

 FUNC_1(VAR_3, VAR_1, 0x600);

 FUNC_1(VAR_3, VAR_0, 0x1);
}
