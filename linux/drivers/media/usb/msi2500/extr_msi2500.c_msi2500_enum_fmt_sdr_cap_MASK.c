
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; } ;
struct msi2500_dev {scalar_t__ num_formats; int dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pixelformat; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 struct msi2500_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_fmtdesc *VAR_4)
{
 struct msi2500_dev *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_5->dev, "index=%d\n", VAR_4->index);

 if (VAR_4->index >= VAR_5->num_formats)
  return -VAR_0;

 VAR_4->pixelformat = VAR_1[VAR_4->index].pixelformat;

 return 0;
}
