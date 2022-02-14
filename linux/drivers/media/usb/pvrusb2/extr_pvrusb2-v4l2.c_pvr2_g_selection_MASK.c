
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int left; int top; int width; int height; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_3__ r; } ;
struct v4l2_cropcap {TYPE_3__ bounds; TYPE_3__ defrect; scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_4__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct pvr2_hdw*,struct v4l2_cropcap*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
       struct v4l2_selection *VAR_8)
{
 struct pvr2_v4l2_fh *VAR_9 = VAR_6->private_data;
 struct pvr2_hdw *VAR_10 = VAR_9->channel.mc_head->hdw;
 struct v4l2_cropcap VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 if (VAR_8->type != VAR_5)
  return -VAR_0;

 VAR_11.type = VAR_5;

 switch (VAR_8->target) {
 case 130:
  VAR_13 = FUNC_0(
     FUNC_2(VAR_10, VAR_2), &VAR_12);
  if (VAR_13 != 0)
   return -VAR_0;
  VAR_8->r.left = VAR_12;
  VAR_13 = FUNC_0(
     FUNC_2(VAR_10, VAR_3), &VAR_12);
  if (VAR_13 != 0)
   return -VAR_0;
  VAR_8->r.top = VAR_12;
  VAR_13 = FUNC_0(
     FUNC_2(VAR_10, VAR_4), &VAR_12);
  if (VAR_13 != 0)
   return -VAR_0;
  VAR_8->r.width = VAR_12;
  VAR_13 = FUNC_0(
     FUNC_2(VAR_10, VAR_1), &VAR_12);
  if (VAR_13 != 0)
   return -VAR_0;
  VAR_8->r.height = VAR_12;
  break;
 case 128:
  VAR_13 = FUNC_1(VAR_10, &VAR_11);
  VAR_8->r = VAR_11.defrect;
  break;
 case 129:
  VAR_13 = FUNC_1(VAR_10, &VAR_11);
  VAR_8->r = VAR_11.bounds;
  break;
 default:
  return -VAR_0;
 }
 return VAR_13;
}
