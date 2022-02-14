
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mtk_vcodec_ctx {TYPE_1__* dev; TYPE_2__* dec_if; } ;
struct TYPE_6__ {int (* init ) (struct mtk_vcodec_ctx*) ;} ;
struct TYPE_5__ {int pm; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_vcodec_ctx*) ;
 int FUNC_3 (struct mtk_vcodec_ctx*) ;
 int FUNC_4 (struct mtk_vcodec_ctx*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;

int FUNC_5(struct mtk_vcodec_ctx *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_5) {
 case 130:
  VAR_4->dec_if = &VAR_1;
  break;
 case 129:
  VAR_4->dec_if = &VAR_2;
  break;
 case 128:
  VAR_4->dec_if = &VAR_3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_4);
 FUNC_1(&VAR_4->dev->pm);
 VAR_6 = VAR_4->dec_if->init(VAR_4);
 FUNC_0(&VAR_4->dev->pm);
 FUNC_3(VAR_4);

 return VAR_6;
}
