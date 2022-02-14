
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_4__ {scalar_t__ pixelformat; int buffersize; int reserved; } ;
struct TYPE_5__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct msi2500_dev {int num_formats; scalar_t__ pixelformat; int buffersize; int dev; struct vb2_queue vb_queue; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ pixelformat; int buffersize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 struct msi2500_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct msi2500_dev *VAR_5 = FUNC_3(VAR_2);
 struct vb2_queue *VAR_6 = &VAR_5->vb_queue;
 int VAR_7;

 FUNC_0(VAR_5->dev, "pixelformat fourcc %4.4s\n",
  (char *)&VAR_4->fmt.sdr.pixelformat);

 if (FUNC_2(VAR_6))
  return -VAR_0;

 FUNC_1(VAR_4->fmt.sdr.reserved, 0, sizeof(VAR_4->fmt.sdr.reserved));
 for (VAR_7 = 0; VAR_7 < VAR_5->num_formats; VAR_7++) {
  if (VAR_1[VAR_7].pixelformat == VAR_4->fmt.sdr.pixelformat) {
   VAR_5->pixelformat = VAR_1[VAR_7].pixelformat;
   VAR_5->buffersize = VAR_1[VAR_7].buffersize;
   VAR_4->fmt.sdr.buffersize = VAR_1[VAR_7].buffersize;
   return 0;
  }
 }

 VAR_5->pixelformat = VAR_1[0].pixelformat;
 VAR_5->buffersize = VAR_1[0].buffersize;
 VAR_4->fmt.sdr.pixelformat = VAR_1[0].pixelformat;
 VAR_4->fmt.sdr.buffersize = VAR_1[0].buffersize;

 return 0;
}
