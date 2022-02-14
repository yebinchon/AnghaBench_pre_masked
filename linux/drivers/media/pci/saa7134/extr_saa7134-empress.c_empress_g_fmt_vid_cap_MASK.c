
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct TYPE_6__ {int sizeimage; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_4__ {int nr_packets; } ;
struct saa7134_dev {TYPE_1__ ts; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 int FUNC_1 (TYPE_3__*,struct v4l2_mbus_framefmt*) ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    struct v4l2_format *VAR_7)
{
 struct saa7134_dev *VAR_8 = FUNC_2(VAR_5);
 struct v4l2_subdev_format VAR_9 = {
  .which = VAR_2,
 };
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_9.format;

 FUNC_0(VAR_8, VAR_4, VAR_3, ((void*)0), &VAR_9);

 FUNC_1(&VAR_7->fmt.pix, VAR_10);
 VAR_7->fmt.pix.pixelformat = VAR_1;
 VAR_7->fmt.pix.sizeimage = VAR_0 * VAR_8->ts.nr_packets;
 VAR_7->fmt.pix.bytesperline = 0;

 return 0;
}
