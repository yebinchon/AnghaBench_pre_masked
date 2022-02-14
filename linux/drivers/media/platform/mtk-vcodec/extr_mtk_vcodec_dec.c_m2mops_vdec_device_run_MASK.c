
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_dev {int decode_workqueue; } ;
struct mtk_vcodec_ctx {int decode_work; struct mtk_vcodec_dev* dev; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct mtk_vcodec_ctx *VAR_1 = VAR_0;
 struct mtk_vcodec_dev *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2->decode_workqueue, &VAR_1->decode_work);
}
