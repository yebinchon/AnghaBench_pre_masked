
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int sizeimage; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {TYPE_2__ fmt; } ;
struct imx7_csi {int last_eof; int last_eof_completion; scalar_t__ frame_sequence; int sd; int underrun_buf; int dev; struct imx_media_video_dev* vdev; } ;


 int FUNC_0 (struct imx7_csi*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct imx7_csi *VAR_0)
{
 struct imx_media_video_dev *VAR_1 = VAR_0->vdev;
 struct v4l2_pix_format *VAR_2 = &VAR_1->fmt.fmt.pix;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->dev, &VAR_0->underrun_buf,
          VAR_2->sizeimage);
 if (VAR_3 < 0) {
  FUNC_3(&VAR_0->sd, "consider increasing the CMA area\n");
  return VAR_3;
 }

 VAR_0->frame_sequence = 0;
 VAR_0->last_eof = 0;
 FUNC_2(&VAR_0->last_eof_completion);

 FUNC_0(VAR_0);

 return 0;
}
