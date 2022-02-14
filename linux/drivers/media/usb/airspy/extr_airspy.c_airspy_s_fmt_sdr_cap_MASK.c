
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
struct file {int dummy; } ;
struct airspy {scalar_t__ pixelformat; int buffersize; struct vb2_queue vb_queue; } ;
struct TYPE_6__ {scalar_t__ pixelformat; int buffersize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct vb2_queue*) ;
 struct airspy* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
  struct v4l2_format *VAR_5)
{
 struct airspy *VAR_6 = FUNC_2(VAR_3);
 struct vb2_queue *VAR_7 = &VAR_6->vb_queue;
 int VAR_8;

 if (FUNC_1(VAR_7))
  return -VAR_0;

 FUNC_0(VAR_5->fmt.sdr.reserved, 0, sizeof(VAR_5->fmt.sdr.reserved));
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_2[VAR_8].pixelformat == VAR_5->fmt.sdr.pixelformat) {
   VAR_6->pixelformat = VAR_2[VAR_8].pixelformat;
   VAR_6->buffersize = VAR_2[VAR_8].buffersize;
   VAR_5->fmt.sdr.buffersize = VAR_2[VAR_8].buffersize;
   return 0;
  }
 }

 VAR_6->pixelformat = VAR_2[0].pixelformat;
 VAR_6->buffersize = VAR_2[0].buffersize;
 VAR_5->fmt.sdr.pixelformat = VAR_2[0].pixelformat;
 VAR_5->fmt.sdr.buffersize = VAR_2[0].buffersize;

 return 0;
}
