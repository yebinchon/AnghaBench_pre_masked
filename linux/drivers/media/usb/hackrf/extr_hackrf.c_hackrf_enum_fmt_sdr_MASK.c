
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct hackrf_dev {int dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int pixelformat; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 TYPE_1__* VAR_2 ;
 struct hackrf_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
          struct v4l2_fmtdesc *VAR_5)
{
 struct hackrf_dev *VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_6->dev, "index=%d\n", VAR_5->index);

 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 VAR_5->pixelformat = VAR_2[VAR_5->index].pixelformat;

 return 0;
}
