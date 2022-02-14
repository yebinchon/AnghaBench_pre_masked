
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {int dummy; } ;
struct deinterlace_q_data {int field; TYPE_1__* fmt; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct deinterlace_ctx {TYPE_3__ fh; TYPE_2__* dev; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_5__ {int v4l2_dev; } ;
struct TYPE_4__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 struct deinterlace_q_data* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
      enum v4l2_buf_type VAR_8)
{
 struct deinterlace_q_data *VAR_9, *VAR_10;
 struct deinterlace_ctx *VAR_11 = VAR_7;

 VAR_9 = FUNC_0(VAR_2);
 VAR_10 = FUNC_0(VAR_1);


 if (VAR_9->fmt->fourcc != VAR_10->fmt->fourcc) {
  FUNC_1(&VAR_11->dev->v4l2_dev,
    "src and dst formats don't match.\n");
  return -VAR_0;
 }


 switch (VAR_9->field) {
 case 129:
  if (VAR_10->field != VAR_5 &&
   VAR_10->field != VAR_3) {
   FUNC_1(&VAR_11->dev->v4l2_dev,
    "src and dst field conversion [(%d)->(%d)] not supported.\n",
    VAR_9->field, VAR_10->field);
   return -VAR_0;
  }
  break;
 case 128:
  if (VAR_10->field != VAR_5 &&
   VAR_10->field != VAR_4) {
   FUNC_1(&VAR_11->dev->v4l2_dev,
    "src and dst field conversion [(%d)->(%d)] not supported.\n",
    VAR_9->field, VAR_10->field);
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_6, VAR_11->fh.m2m_ctx, VAR_8);
}
