
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {int target; struct v4l2_rect r; int type; } ;
struct file {int dummy; } ;
struct coda_q_data {struct v4l2_rect rect; int height; int width; } ;
struct coda_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 struct coda_ctx* FUNC_0 (void*) ;
 struct coda_q_data* FUNC_1 (struct coda_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
       struct v4l2_selection *VAR_5)
{
 struct coda_ctx *VAR_6 = FUNC_0(VAR_4);
 struct coda_q_data *VAR_7;
 struct v4l2_rect VAR_8, *VAR_9;

 VAR_7 = FUNC_1(VAR_6, VAR_5->type);
 if (!VAR_7)
  return -VAR_0;

 VAR_8.left = 0;
 VAR_8.top = 0;
 VAR_8.width = VAR_7->width;
 VAR_8.height = VAR_7->height;
 VAR_9 = &VAR_7->rect;

 switch (VAR_5->target) {
 case 128:
 case 129:
  VAR_9 = &VAR_8;

 case 130:
  if (VAR_5->type != VAR_2)
   return -VAR_0;
  break;
 case 133:
 case 131:
  VAR_9 = &VAR_8;

 case 134:
 case 132:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 VAR_5->r = *VAR_9;

 return 0;
}
