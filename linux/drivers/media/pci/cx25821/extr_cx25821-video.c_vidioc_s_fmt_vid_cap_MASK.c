
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; int width; int height; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx25821_dev {int dummy; } ;
struct cx25821_channel {int width; int use_cif_resolution; int cif_width; int height; int field; int fmt; struct cx25821_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cx25821_dev*,int ,int) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_3 (struct cx25821_dev*,int,int ) ;
 struct cx25821_channel* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct cx25821_channel *VAR_7 = FUNC_4(VAR_4);
 struct cx25821_dev *VAR_8 = VAR_7->dev;
 int VAR_9 = VAR_1;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);

 if (0 != VAR_10)
  return VAR_10;

 VAR_7->fmt = FUNC_0(VAR_6->fmt.pix.pixelformat);
 VAR_7->field = VAR_6->fmt.pix.field;
 VAR_7->width = VAR_6->fmt.pix.width;
 VAR_7->height = VAR_6->fmt.pix.height;

 if (VAR_6->fmt.pix.pixelformat == VAR_3)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;

 FUNC_1(VAR_8, VAR_2, VAR_9);


 if (VAR_7->width == 320 || VAR_7->width == 352)
  VAR_7->use_cif_resolution = 1;
 else
  VAR_7->use_cif_resolution = 0;

 VAR_7->cif_width = VAR_7->width;
 FUNC_3(VAR_8, VAR_7->width, VAR_2);
 return 0;
}
