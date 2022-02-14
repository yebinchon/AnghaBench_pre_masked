
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct vivid_dev {scalar_t__ sdr_pixelformat; int sdr_buffersize; struct vb2_queue vb_sdr_cap_q; } ;
struct TYPE_5__ {scalar_t__ pixelformat; int buffersize; int reserved; } ;
struct TYPE_6__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_7__ {scalar_t__ pixelformat; int buffersize; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 struct vivid_dev* FUNC_3 (struct file*) ;

int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_3(VAR_2);
 struct vb2_queue *VAR_6 = &VAR_5->vb_sdr_cap_q;
 int VAR_7;

 if (FUNC_2(VAR_6))
  return -VAR_0;

 FUNC_1(VAR_4->fmt.sdr.reserved, 0, sizeof(VAR_4->fmt.sdr.reserved));
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_1[VAR_7].pixelformat == VAR_4->fmt.sdr.pixelformat) {
   VAR_5->sdr_pixelformat = VAR_1[VAR_7].pixelformat;
   VAR_5->sdr_buffersize = VAR_1[VAR_7].buffersize;
   VAR_4->fmt.sdr.buffersize = VAR_1[VAR_7].buffersize;
   return 0;
  }
 }
 VAR_5->sdr_pixelformat = VAR_1[0].pixelformat;
 VAR_5->sdr_buffersize = VAR_1[0].buffersize;
 VAR_4->fmt.sdr.pixelformat = VAR_1[0].pixelformat;
 VAR_4->fmt.sdr.buffersize = VAR_1[0].buffersize;
 return 0;
}
