
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; scalar_t__ type; scalar_t__ pixelformat; } ;
struct file {int dummy; } ;
struct bdisp_fmt {scalar_t__ pixelformat; } ;
struct bdisp_ctx {TYPE_1__* bdisp_dev; } ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (struct bdisp_fmt*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bdisp_fmt* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 struct bdisp_ctx* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_fmtdesc *VAR_6)
{
 struct bdisp_ctx *VAR_7 = FUNC_2(VAR_5);
 const struct bdisp_fmt *VAR_8;

 if (VAR_6->index >= FUNC_0(VAR_3))
  return -VAR_0;

 VAR_8 = &VAR_3[VAR_6->index];

 if ((VAR_8->pixelformat == VAR_2) &&
     (VAR_6->type == VAR_1)) {
  FUNC_1(VAR_7->bdisp_dev->dev, "No YU12 on capture\n");
  return -VAR_0;
 }
 VAR_6->pixelformat = VAR_8->pixelformat;

 return 0;
}
