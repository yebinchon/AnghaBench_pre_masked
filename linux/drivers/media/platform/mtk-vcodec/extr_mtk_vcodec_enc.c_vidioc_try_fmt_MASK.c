
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int num_planes; int height; int width; int reserved; scalar_t__ flags; TYPE_2__* plane_fmt; int field; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct mtk_video_fmt {int num_planes; } ;
struct TYPE_4__ {int bytesperline; int sizeimage; int * reserved; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_4 (int*,int ,int,int,int*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_format *VAR_7,
     const struct mtk_video_fmt *VAR_8)
{
 struct v4l2_pix_format_mplane *VAR_9 = &VAR_7->fmt.pix_mp;
 int VAR_10;

 VAR_9->field = VAR_6;

 if (VAR_7->type == VAR_4) {
  VAR_9->num_planes = 1;
  VAR_9->plane_fmt[0].bytesperline = 0;
 } else if (VAR_7->type == VAR_5) {
  int VAR_11, VAR_12;

  VAR_9->height = FUNC_1(VAR_9->height,
     VAR_2,
     VAR_0);
  VAR_9->width = FUNC_1(VAR_9->width,
     VAR_3,
     VAR_1);




  VAR_11 = VAR_9->width;
  VAR_12 = VAR_9->height;
  FUNC_4(&VAR_9->width,
     VAR_3,
     VAR_1, 4,
     &VAR_9->height,
     VAR_2,
     VAR_0, 5, 6);

  if (VAR_9->width < VAR_11 &&
   (VAR_9->width + 16) <= VAR_1)
   VAR_9->width += 16;
  if (VAR_9->height < VAR_12 &&
   (VAR_9->height + 32) <= VAR_0)
   VAR_9->height += 32;

  FUNC_3(0,
   "before resize width=%d, height=%d, after resize width=%d, height=%d, sizeimage=%d %d",
   VAR_11, VAR_12, VAR_9->width,
   VAR_9->height,
   VAR_9->plane_fmt[0].sizeimage,
   VAR_9->plane_fmt[1].sizeimage);

  VAR_9->num_planes = VAR_8->num_planes;
  VAR_9->plane_fmt[0].sizeimage =
    VAR_9->width * VAR_9->height +
    ((FUNC_0(VAR_9->width, 16) * 2) * 16);
  VAR_9->plane_fmt[0].bytesperline = VAR_9->width;

  if (VAR_9->num_planes == 2) {
   VAR_9->plane_fmt[1].sizeimage =
    (VAR_9->width * VAR_9->height) / 2 +
    (FUNC_0(VAR_9->width, 16) * 16);
   VAR_9->plane_fmt[2].sizeimage = 0;
   VAR_9->plane_fmt[1].bytesperline =
       VAR_9->width;
   VAR_9->plane_fmt[2].bytesperline = 0;
  } else if (VAR_9->num_planes == 3) {
   VAR_9->plane_fmt[1].sizeimage =
   VAR_9->plane_fmt[2].sizeimage =
    (VAR_9->width * VAR_9->height) / 4 +
    ((FUNC_0(VAR_9->width, 16) / 2) * 16);
   VAR_9->plane_fmt[1].bytesperline =
    VAR_9->plane_fmt[2].bytesperline =
    VAR_9->width / 2;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->num_planes; VAR_10++)
  FUNC_2(&(VAR_9->plane_fmt[VAR_10].reserved[0]), 0x0,
      sizeof(VAR_9->plane_fmt[0].reserved));

 VAR_9->flags = 0;
 FUNC_2(&VAR_9->reserved, 0x0,
  sizeof(VAR_9->reserved));

 return 0;
}
