
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct coda_ctx {int vdoa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct coda_ctx *VAR_2, struct v4l2_format *VAR_3,
        bool *VAR_4)
{
 int VAR_5;

 if (VAR_3->type != VAR_1)
  return -VAR_0;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_2->vdoa) {
  *VAR_4 = 0;
  return 0;
 }

 VAR_5 = FUNC_1(((void*)0), FUNC_0(VAR_3->fmt.pix.width, 16),
         VAR_3->fmt.pix.height, VAR_3->fmt.pix.pixelformat);
 if (VAR_5) {
  *VAR_4 = 0;
  return 0;
 }

 *VAR_4 = 1;
 return 0;
}
