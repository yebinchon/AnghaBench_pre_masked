
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rvin_video_format {int bpp; } ;
struct TYPE_6__ {int field; int bytesperline; int pixelformat; } ;
struct TYPE_4__ {int left; int width; int top; int height; } ;
struct rvin_dev {TYPE_3__ format; TYPE_2__* info; TYPE_1__ crop; } ;
struct TYPE_5__ {scalar_t__ model; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rvin_dev*) ;
 struct rvin_video_format* FUNC_1 (struct rvin_dev*,int ) ;
 int FUNC_2 (struct rvin_dev*,int,int ) ;

void FUNC_3(struct rvin_dev *VAR_6)
{
 const struct rvin_video_format *VAR_7;
 u32 VAR_8;


 FUNC_2(VAR_6, VAR_6->crop.left, VAR_5);
 FUNC_2(VAR_6, VAR_6->crop.left + VAR_6->crop.width - 1, VAR_2);

 switch (VAR_6->format.field) {
 case 130:
 case 128:
 case 129:
  FUNC_2(VAR_6, VAR_6->crop.top / 2, VAR_4);
  FUNC_2(VAR_6, (VAR_6->crop.top + VAR_6->crop.height) / 2 - 1,
      VAR_1);
  break;
 default:
  FUNC_2(VAR_6, VAR_6->crop.top, VAR_4);
  FUNC_2(VAR_6, VAR_6->crop.top + VAR_6->crop.height - 1,
      VAR_1);
  break;
 }


 if (VAR_6->info->model != VAR_0)
  FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_6, VAR_6->format.pixelformat);
 VAR_8 = VAR_6->format.bytesperline / VAR_7->bpp;
 FUNC_2(VAR_6, VAR_8, VAR_3);
}
