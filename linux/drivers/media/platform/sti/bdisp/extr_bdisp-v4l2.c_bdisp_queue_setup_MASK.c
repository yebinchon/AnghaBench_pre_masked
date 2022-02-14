
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct bdisp_frame {unsigned int sizeimage; int fmt; } ;
struct bdisp_ctx {TYPE_1__* bdisp_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bdisp_frame*) ;
 int FUNC_1 (struct bdisp_frame*) ;
 struct bdisp_frame* FUNC_2 (struct bdisp_ctx*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct bdisp_ctx* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_1,
        unsigned int *VAR_2, unsigned int *VAR_3,
        unsigned int VAR_4[], struct device *VAR_5[])
{
 struct bdisp_ctx *VAR_6 = FUNC_4(VAR_1);
 struct bdisp_frame *VAR_7 = FUNC_2(VAR_6, VAR_1->type);

 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_6->bdisp_dev->dev, "Invalid frame (%p)\n", VAR_7);
  return FUNC_1(VAR_7);
 }

 if (!VAR_7->fmt) {
  FUNC_3(VAR_6->bdisp_dev->dev, "Invalid format\n");
  return -VAR_0;
 }

 if (*VAR_3)
  return VAR_4[0] < VAR_7->sizeimage ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_7->sizeimage;

 return 0;
}
