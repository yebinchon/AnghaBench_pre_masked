
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {scalar_t__ vfl_dir; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_4__ {scalar_t__ pixelformat; int buffersize; int reserved; } ;
struct TYPE_5__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct hackrf_dev {scalar_t__ pixelformat; int buffersize; struct vb2_queue tx_vb2_queue; struct vb2_queue rx_vb2_queue; int dev; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ pixelformat; int buffersize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct hackrf_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
       struct v4l2_format *VAR_6)
{
 struct hackrf_dev *VAR_7 = FUNC_4(VAR_4);
 struct video_device *VAR_8 = FUNC_3(VAR_4);
 struct vb2_queue *VAR_9;
 int VAR_10;

 FUNC_0(VAR_7->dev, "pixelformat fourcc %4.4s\n",
   (char *)&VAR_6->fmt.sdr.pixelformat);

 if (VAR_8->vfl_dir == VAR_2)
  VAR_9 = &VAR_7->rx_vb2_queue;
 else
  VAR_9 = &VAR_7->tx_vb2_queue;

 if (FUNC_2(VAR_9))
  return -VAR_0;

 FUNC_1(VAR_6->fmt.sdr.reserved, 0, sizeof(VAR_6->fmt.sdr.reserved));
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_6->fmt.sdr.pixelformat == VAR_3[VAR_10].pixelformat) {
   VAR_7->pixelformat = VAR_3[VAR_10].pixelformat;
   VAR_7->buffersize = VAR_3[VAR_10].buffersize;
   VAR_6->fmt.sdr.buffersize = VAR_3[VAR_10].buffersize;
   return 0;
  }
 }

 VAR_7->pixelformat = VAR_3[0].pixelformat;
 VAR_7->buffersize = VAR_3[0].buffersize;
 VAR_6->fmt.sdr.pixelformat = VAR_3[0].pixelformat;
 VAR_6->fmt.sdr.buffersize = VAR_3[0].buffersize;

 return 0;
}
