
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdisp_frame {int dummy; } ;
struct bdisp_ctx {TYPE_1__* bdisp_dev; struct bdisp_frame dst; struct bdisp_frame src; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct bdisp_frame* FUNC_0 (int ) ;


 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static struct bdisp_frame *FUNC_2(struct bdisp_ctx *VAR_1,
      enum v4l2_buf_type VAR_2)
{
 switch (VAR_2) {
 case 128:
  return &VAR_1->src;
 case 129:
  return &VAR_1->dst;
 default:
  FUNC_1(VAR_1->bdisp_dev->dev,
   "Wrong buffer/video queue type (%d)\n", VAR_2);
  break;
 }

 return FUNC_0(-VAR_0);
}
