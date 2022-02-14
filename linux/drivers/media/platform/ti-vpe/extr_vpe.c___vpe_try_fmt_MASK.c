
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpe_fmt {int types; scalar_t__ fourcc; TYPE_2__** vpdma_fmt; scalar_t__ coplanar; } ;
struct vpe_ctx {int dev; } ;
struct v4l2_plane_pix_format {unsigned int bytesperline; int sizeimage; int reserved; } ;
struct v4l2_pix_format_mplane {scalar_t__ pixelformat; scalar_t__ field; int width; int height; int num_planes; struct v4l2_plane_pix_format* plane_fmt; int reserved; scalar_t__ colorspace; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_4__ {int depth; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,int) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int*,int ,int ,unsigned int,int*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct vpe_ctx *VAR_21, struct v4l2_format *VAR_22,
         struct vpe_fmt *VAR_23, int VAR_24)
{
 struct v4l2_pix_format_mplane *VAR_25 = &VAR_22->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_26;
 unsigned int VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 unsigned int VAR_32 = 0;

 if (!VAR_23 || !(VAR_23->types & VAR_24)) {
  FUNC_5(VAR_21->dev, "Fourcc format (0x%08x) invalid.\n",
   VAR_25->pixelformat);
  return -VAR_0;
 }

 if (VAR_25->field != VAR_11 && VAR_25->field != VAR_10
   && VAR_25->field != VAR_12)
  VAR_25->field = VAR_11;

 VAR_29 = VAR_23->vpdma_fmt[VAR_20]->depth;






 VAR_30 = VAR_29 >> 3;

 if (VAR_30 == 3) {




  VAR_27 = 4;
 } else {
  VAR_27 = FUNC_3(VAR_17 / VAR_30);
  VAR_27 = FUNC_1(VAR_27);
 }

 FUNC_4(&VAR_25->width, VAR_5, VAR_3, VAR_27,
         &VAR_25->height, VAR_4, VAR_2, VAR_1,
         VAR_6);

 if (!VAR_25->num_planes)
  VAR_25->num_planes = VAR_23->coplanar ? 2 : 1;
 else if (VAR_25->num_planes > 1 && !VAR_23->coplanar)
  VAR_25->num_planes = 1;

 VAR_25->pixelformat = VAR_23->fourcc;





 if (VAR_25->field == VAR_12)
  VAR_31 = VAR_25->height / 2;
 else
  VAR_31 = VAR_25->height;

 if (!VAR_25->colorspace) {
  if (VAR_23->fourcc == VAR_15 ||
    VAR_23->fourcc == VAR_13 ||
    VAR_23->fourcc == VAR_16 ||
    VAR_23->fourcc == VAR_14) {
   VAR_25->colorspace = VAR_9;
  } else {
   if (VAR_31 > 1280)
    VAR_25->colorspace = VAR_7;
   else
    VAR_25->colorspace = VAR_8;
  }
 }

 FUNC_2(VAR_25->reserved, 0, sizeof(VAR_25->reserved));
 for (VAR_28 = 0; VAR_28 < VAR_25->num_planes; VAR_28++) {
  VAR_26 = &VAR_25->plane_fmt[VAR_28];
  VAR_29 = VAR_23->vpdma_fmt[VAR_28]->depth;

  VAR_32 = (VAR_25->width * VAR_23->vpdma_fmt[VAR_20]->depth) >> 3;
  if (VAR_32 > VAR_26->bytesperline)
   VAR_26->bytesperline = VAR_32;

  VAR_26->bytesperline = FUNC_0(VAR_26->bytesperline,
      VAR_18);

  if (VAR_28 == VAR_20) {
   VAR_26->sizeimage = VAR_25->height *
            VAR_26->bytesperline;

   if (VAR_25->num_planes == 1 && VAR_23->coplanar)
    VAR_26->sizeimage += VAR_25->height *
     VAR_26->bytesperline *
     VAR_23->vpdma_fmt[VAR_19]->depth >> 3;

  } else {
   VAR_26->sizeimage = (VAR_25->height *
            VAR_26->bytesperline *
            VAR_29) >> 3;
  }
  FUNC_2(VAR_26->reserved, 0, sizeof(VAR_26->reserved));
 }

 return 0;
}
