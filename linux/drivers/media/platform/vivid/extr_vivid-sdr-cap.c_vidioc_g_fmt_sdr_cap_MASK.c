
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vivid_dev {int sdr_buffersize; int sdr_pixelformat; } ;
struct TYPE_3__ {int reserved; int buffersize; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 struct vivid_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct vivid_dev *VAR_3 = FUNC_1(VAR_0);

 VAR_2->fmt.sdr.pixelformat = VAR_3->sdr_pixelformat;
 VAR_2->fmt.sdr.buffersize = VAR_3->sdr_buffersize;
 FUNC_0(VAR_2->fmt.sdr.reserved, 0, sizeof(VAR_2->fmt.sdr.reserved));
 return 0;
}
