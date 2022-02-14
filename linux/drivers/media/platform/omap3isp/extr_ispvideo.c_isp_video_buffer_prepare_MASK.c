
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_8__ {int sizeimage; } ;
struct TYPE_9__ {TYPE_3__ pix; } ;
struct TYPE_10__ {TYPE_4__ fmt; } ;
struct isp_video_fh {TYPE_5__ format; struct isp_video* video; } ;
struct isp_video {TYPE_1__* isp; int error; } ;
struct TYPE_7__ {int vb2_buf; } ;
struct isp_buffer {int dma; TYPE_2__ vb; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 struct isp_buffer* FUNC_2 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct vb2_buffer*,int ) ;
 struct isp_video_fh* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3 = FUNC_3(VAR_2);
 struct isp_video_fh *VAR_4 = FUNC_6(VAR_2->vb2_queue);
 struct isp_buffer *VAR_5 = FUNC_2(VAR_3);
 struct isp_video *VAR_6 = VAR_4->video;
 dma_addr_t VAR_7;







 if (FUNC_4(VAR_6->error))
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_2, 0);
 if (!FUNC_0(VAR_7, 32)) {
  FUNC_1(VAR_6->isp->dev,
   "Buffer address must be aligned to 32 bytes boundary.\n");
  return -VAR_0;
 }

 FUNC_7(&VAR_5->vb.vb2_buf, 0,
         VAR_4->format.fmt.pix.sizeimage);
 VAR_5->dma = VAR_7;

 return 0;
}
