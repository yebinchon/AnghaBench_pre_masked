
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int code; } ;
struct TYPE_8__ {int vdev; } ;
struct fimc_vid_cap {TYPE_3__ ci_fmt; TYPE_2__ ve; TYPE_1__* ctx; } ;
struct fimc_source_info {int fimc_bus_type; } ;
struct fimc_frame {int o_width; int o_height; TYPE_4__* fmt; } ;
struct fimc_dev {scalar_t__ regs; struct fimc_vid_cap vid_cap; } ;
struct TYPE_11__ {int cisrcfmt; int bus_width; int pixelcode; } ;
struct TYPE_10__ {int color; } ;
struct TYPE_7__ {struct fimc_frame s_frame; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int,scalar_t__) ;

int FUNC_4(struct fimc_dev *VAR_5,
         struct fimc_source_info *VAR_6)
{
 struct fimc_vid_cap *VAR_7 = &VAR_5->vid_cap;
 struct fimc_frame *VAR_8 = &VAR_7->ctx->s_frame;
 u32 VAR_9, VAR_10 = 0;
 int VAR_11;

 switch (VAR_6->fimc_bus_type) {
 case 130:
 case 129:
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
   if (VAR_7->ci_fmt.code == VAR_4[VAR_11].pixelcode) {
    VAR_10 = VAR_4[VAR_11].cisrcfmt;
    VAR_9 = VAR_4[VAR_11].bus_width;
    break;
   }
  }

  if (VAR_11 == FUNC_0(VAR_4)) {
   FUNC_2(&VAR_7->ve.vdev,
     "Camera color format not supported: %d\n",
     VAR_7->ci_fmt.code);
   return -VAR_0;
  }

  if (VAR_6->fimc_bus_type == 130) {
   if (VAR_9 == 8)
    VAR_10 |= VAR_3;
   else if (VAR_9 == 16)
    VAR_10 |= VAR_2;
  }
  break;
 case 128:
  if (FUNC_1(VAR_8->fmt->color))
   VAR_10 |= VAR_3;
  break;
 default:
 case 131:

  break;
 }

 VAR_10 |= (VAR_8->o_width << 16) | VAR_8->o_height;
 FUNC_3(VAR_10, VAR_5->regs + VAR_1);
 return 0;
}
