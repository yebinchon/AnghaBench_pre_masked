
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int height; int width; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct saa7134_dev {int field; int height; int width; int fmt; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct saa7134_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (0 != VAR_4)
  return VAR_4;

 VAR_3->fmt = FUNC_0(VAR_2->fmt.pix.pixelformat);
 VAR_3->width = VAR_2->fmt.pix.width;
 VAR_3->height = VAR_2->fmt.pix.height;
 VAR_3->field = VAR_2->fmt.pix.field;
 return 0;
}
