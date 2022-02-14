
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtk_vcodec_ctx {scalar_t__ state; int encode_work; TYPE_3__* dev; TYPE_2__* q_data; } ;
struct TYPE_6__ {int encode_workqueue; } ;
struct TYPE_5__ {TYPE_1__* fmt; } ;
struct TYPE_4__ {scalar_t__ fourcc; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mtk_vcodec_ctx*) ;
 int FUNC_1 (struct mtk_vcodec_ctx*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
 struct mtk_vcodec_ctx *VAR_4 = VAR_3;

 if ((VAR_4->q_data[VAR_0].fmt->fourcc == VAR_2) &&
     (VAR_4->state != VAR_1)) {

  FUNC_0(VAR_4);
  FUNC_2(VAR_4->dev->encode_workqueue, &VAR_4->encode_work);
  return;
 }

 FUNC_1(VAR_4);
 FUNC_2(VAR_4->dev->encode_workqueue, &VAR_4->encode_work);
}
