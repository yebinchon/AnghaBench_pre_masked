
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct rockchip_rga {int dev; } ;
struct rga_ctx {struct rockchip_rga* rga; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_queue*,int ) ;
 struct rga_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_3(struct vb2_queue *VAR_1)
{
 struct rga_ctx *VAR_2 = FUNC_2(VAR_1);
 struct rockchip_rga *VAR_3 = VAR_2->rga;

 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_3->dev);
}
