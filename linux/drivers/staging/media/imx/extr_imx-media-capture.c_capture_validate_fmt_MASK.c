
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; int pad; } ;
struct v4l2_rect {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_16__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_12__ {TYPE_8__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct imx_media_pixfmt {scalar_t__ cs; } ;
struct TYPE_14__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_10__ {TYPE_1__ pix; } ;
struct TYPE_11__ {TYPE_2__ fmt; } ;
struct TYPE_15__ {TYPE_6__ compose; TYPE_5__* cc; TYPE_3__ fmt; } ;
struct capture_priv {TYPE_7__ vdev; int src_sd; int src_sd_pad; } ;
struct TYPE_13__ {scalar_t__ cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct capture_priv*,struct v4l2_subdev_format*,struct v4l2_format*,struct imx_media_pixfmt const**,struct v4l2_rect*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_8__*,int *) ;
 int FUNC_2 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_3(struct capture_priv *VAR_4)
{
 struct v4l2_subdev_format VAR_5;
 const struct imx_media_pixfmt *VAR_6;
 struct v4l2_rect VAR_7;
 struct v4l2_format VAR_8;
 int VAR_9;

 VAR_5.pad = VAR_4->src_sd_pad;
 VAR_5.which = VAR_1;
 VAR_9 = FUNC_2(VAR_4->src_sd, VAR_3, VAR_2, ((void*)0), &VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_8.fmt.pix, &VAR_5.format);

 VAR_9 = FUNC_0(VAR_4, &VAR_5, &VAR_8, &VAR_6, &VAR_7);
 if (VAR_9)
  return VAR_9;

 return (VAR_4->vdev.fmt.fmt.pix.width != VAR_8.fmt.pix.width ||
  VAR_4->vdev.fmt.fmt.pix.height != VAR_8.fmt.pix.height ||
  VAR_4->vdev.cc->cs != VAR_6->cs ||
  VAR_4->vdev.compose.width != VAR_7.width ||
  VAR_4->vdev.compose.height != VAR_7.height) ? -VAR_0 : 0;
}
