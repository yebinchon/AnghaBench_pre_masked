
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_dev {int irqlock; struct mtk_vcodec_ctx* curr_ctx; } ;
struct mtk_vcodec_ctx {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct mtk_vcodec_ctx *FUNC_2(struct mtk_vcodec_dev *VAR_0)
{
 unsigned long VAR_1;
 struct mtk_vcodec_ctx *VAR_2;

 FUNC_0(&VAR_0->irqlock, VAR_1);
 VAR_2 = VAR_0->curr_ctx;
 FUNC_1(&VAR_0->irqlock, VAR_1);
 return VAR_2;
}
