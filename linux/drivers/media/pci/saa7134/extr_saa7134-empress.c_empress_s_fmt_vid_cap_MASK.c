
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; } ;
struct TYPE_7__ {int sizeimage; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_6__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_5__ {int nr_packets; } ;
struct saa7134_dev {TYPE_1__ ts; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 struct saa7134_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7,
    struct v4l2_format *VAR_8)
{
 struct saa7134_dev *VAR_9 = FUNC_3(VAR_6);
 struct v4l2_subdev_format VAR_10 = {
  .which = VAR_3,
 };

 FUNC_1(&VAR_10.format, &VAR_8->fmt.pix, VAR_0);
 FUNC_0(VAR_9, VAR_4, VAR_5, ((void*)0), &VAR_10);
 FUNC_2(&VAR_8->fmt.pix, &VAR_10.format);

 VAR_8->fmt.pix.pixelformat = VAR_2;
 VAR_8->fmt.pix.sizeimage = VAR_1 * VAR_9->ts.nr_packets;
 VAR_8->fmt.pix.bytesperline = 0;

 return 0;
}
