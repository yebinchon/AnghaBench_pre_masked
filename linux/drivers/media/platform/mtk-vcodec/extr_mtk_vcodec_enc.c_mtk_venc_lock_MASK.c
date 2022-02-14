
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_dev {int enc_mutex; } ;
struct mtk_vcodec_ctx {struct mtk_vcodec_dev* dev; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct mtk_vcodec_ctx *VAR_0)
{
 struct mtk_vcodec_dev *VAR_1 = VAR_0->dev;

 FUNC_0(&VAR_1->enc_mutex);
 return 0;
}
