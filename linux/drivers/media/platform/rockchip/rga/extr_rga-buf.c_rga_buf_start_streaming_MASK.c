
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

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct rga_ctx *VAR_3 = FUNC_2(VAR_1);
 struct rockchip_rga *VAR_4 = VAR_3->rga;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->dev);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1, VAR_0);
  return VAR_5;
 }

 return 0;
}
