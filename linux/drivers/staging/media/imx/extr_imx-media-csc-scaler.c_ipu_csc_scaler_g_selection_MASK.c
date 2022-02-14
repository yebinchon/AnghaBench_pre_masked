
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct TYPE_4__ {int height; int width; } ;
struct ipu_csc_scaler_q_data {TYPE_2__ cur_fmt; TYPE_1__ rect; } ;
struct ipu_csc_scaler_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 struct ipu_csc_scaler_ctx* FUNC_0 (void*) ;
 struct ipu_csc_scaler_q_data* FUNC_1 (struct ipu_csc_scaler_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
          struct v4l2_selection *VAR_5)
{
 struct ipu_csc_scaler_ctx *VAR_6 = FUNC_0(VAR_4);
 struct ipu_csc_scaler_q_data *VAR_7;

 switch (VAR_5->target) {
 case 130:
 case 128:
 case 129:
  if (VAR_5->type != VAR_2)
   return -VAR_0;
  VAR_7 = FUNC_1(VAR_6, VAR_2);
  break;
 case 133:
 case 131:
 case 132:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  VAR_7 = FUNC_1(VAR_6, VAR_1);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5->target == 130 ||
     VAR_5->target == 133) {
  VAR_5->r = VAR_7->rect;
 } else {
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_7->cur_fmt.width;
  VAR_5->r.height = VAR_7->cur_fmt.height;
 }

 return 0;
}
