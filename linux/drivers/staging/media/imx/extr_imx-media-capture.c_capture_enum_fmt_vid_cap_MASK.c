
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; int pad; } ;
struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct imx_media_pixfmt {scalar_t__ cs; int fourcc; } ;
struct file {int dummy; } ;
struct capture_priv {int src_sd; int src_sd_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 struct imx_media_pixfmt* FUNC_2 (int ,int ) ;
 struct imx_media_pixfmt* FUNC_3 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct capture_priv* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_8, void *VAR_9,
        struct v4l2_fmtdesc *VAR_10)
{
 struct capture_priv *VAR_11 = FUNC_6(VAR_8);
 const struct imx_media_pixfmt *VAR_12;
 struct v4l2_subdev_format VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_13.pad = VAR_11->src_sd_pad;
 VAR_13.which = VAR_5;
 VAR_15 = FUNC_5(VAR_11->src_sd, VAR_7, VAR_6, ((void*)0), &VAR_13);
 if (VAR_15) {
  FUNC_4(VAR_11->src_sd, "failed to get src_sd format\n");
  return VAR_15;
 }

 VAR_12 = FUNC_2(VAR_13.format.code, VAR_0);
 if (VAR_12) {
  u32 VAR_16 = (VAR_12->cs == VAR_4) ?
   VAR_2 : VAR_1;

  VAR_15 = FUNC_1(&VAR_14, VAR_10->index, VAR_16);
  if (VAR_15)
   return VAR_15;
 } else {
  VAR_12 = FUNC_3(VAR_13.format.code,
          VAR_0, 1);
  if (FUNC_0(!VAR_12))
   return -VAR_3;

  if (VAR_10->index != 0)
   return -VAR_3;
  VAR_14 = VAR_12->fourcc;
 }

 VAR_10->pixelformat = VAR_14;

 return 0;
}
