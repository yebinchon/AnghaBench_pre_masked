
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtk_vcodec_ctx {TYPE_1__* dev; TYPE_2__* enc_if; } ;
struct TYPE_5__ {int (* init ) (struct mtk_vcodec_ctx*) ;} ;
struct TYPE_4__ {int pm; } ;


 int VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_vcodec_ctx*) ;
 int FUNC_3 (struct mtk_vcodec_ctx*) ;
 int FUNC_4 (struct mtk_vcodec_ctx*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;

int FUNC_5(struct mtk_vcodec_ctx *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4) {
 case 128:
  VAR_3->enc_if = &VAR_2;
  break;
 case 129:
  VAR_3->enc_if = &VAR_1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_3);
 FUNC_1(&VAR_3->dev->pm);
 VAR_5 = VAR_3->enc_if->init(VAR_3);
 FUNC_0(&VAR_3->dev->pm);
 FUNC_3(VAR_3);

 return VAR_5;
}
