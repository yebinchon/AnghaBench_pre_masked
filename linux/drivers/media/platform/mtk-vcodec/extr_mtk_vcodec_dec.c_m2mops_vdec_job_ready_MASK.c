
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pic_w; scalar_t__ pic_h; } ;
struct TYPE_3__ {scalar_t__ pic_w; scalar_t__ pic_h; } ;
struct mtk_vcodec_ctx {scalar_t__ state; TYPE_2__ picinfo; TYPE_1__ last_decoded_picinfo; int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct mtk_vcodec_ctx *VAR_3 = VAR_2;

 FUNC_0(3, "[%d]", VAR_3->id);

 if (VAR_3->state == VAR_0)
  return 0;

 if ((VAR_3->last_decoded_picinfo.pic_w != VAR_3->picinfo.pic_w) ||
     (VAR_3->last_decoded_picinfo.pic_h != VAR_3->picinfo.pic_h))
  return 0;

 if (VAR_3->state != VAR_1)
  return 0;

 return 1;
}
