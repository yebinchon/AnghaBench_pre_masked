
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reserved; int buffersize; scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct msi2500_dev {int buffersize; scalar_t__ pixelformat; int dev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 struct msi2500_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct msi2500_dev *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3->dev, "pixelformat fourcc %4.4s\n",
  (char *)&VAR_3->pixelformat);

 VAR_2->fmt.sdr.pixelformat = VAR_3->pixelformat;
 VAR_2->fmt.sdr.buffersize = VAR_3->buffersize;
 FUNC_1(VAR_2->fmt.sdr.reserved, 0, sizeof(VAR_2->fmt.sdr.reserved));

 return 0;
}
