
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format_mplane {int width; int height; int field; int colorspace; int pixelformat; int num_planes; TYPE_2__* plane_fmt; } ;
struct flite_drvdata {int max_height; int out_width_align; int max_width; } ;
struct TYPE_3__ {struct fimc_fmt* fmt; } ;
struct fimc_lite {TYPE_1__ inp_frame; struct flite_drvdata* dd; } ;
struct fimc_fmt {int flags; int* depth; int colorspace; int fourcc; int memplanes; } ;
struct TYPE_4__ {int bytesperline; int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct fimc_fmt* FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int*,int,int ,scalar_t__,int*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fimc_lite *VAR_3,
        struct v4l2_pix_format_mplane *VAR_4,
        const struct fimc_fmt **VAR_5)
{
 u32 VAR_6 = VAR_4->plane_fmt[0].bytesperline;
 struct flite_drvdata *VAR_7 = VAR_3->dd;
 const struct fimc_fmt *VAR_8 = VAR_3->inp_frame.fmt;
 const struct fimc_fmt *VAR_9;

 if (FUNC_0(VAR_8 == ((void*)0)))
  return -VAR_0;





 if (VAR_8->flags & VAR_1)
  VAR_9 = FUNC_2(&VAR_4->pixelformat, ((void*)0),
      VAR_8->flags, 0);
 else
  VAR_9 = VAR_8;

 if (FUNC_0(VAR_9 == ((void*)0)))
  return -VAR_0;
 if (VAR_5)
  *VAR_5 = VAR_9;
 FUNC_3(&VAR_4->width, 8, VAR_7->max_width,
         FUNC_1(VAR_7->out_width_align) - 1,
         &VAR_4->height, 0, VAR_7->max_height, 0, 0);

 if ((VAR_6 == 0 || ((VAR_6 * 8) / VAR_9->depth[0]) < VAR_4->width))
  VAR_4->plane_fmt[0].bytesperline = (VAR_4->width *
         VAR_9->depth[0]) / 8;

 if (VAR_4->plane_fmt[0].sizeimage == 0)
  VAR_4->plane_fmt[0].sizeimage = (VAR_4->width * VAR_4->height *
      VAR_9->depth[0]) / 8;
 VAR_4->num_planes = VAR_9->memplanes;
 VAR_4->pixelformat = VAR_9->fourcc;
 VAR_4->colorspace = VAR_9->colorspace;
 VAR_4->field = VAR_2;
 return 0;
}
