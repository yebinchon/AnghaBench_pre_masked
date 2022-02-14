
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; TYPE_3__ r; } ;
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
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
       struct v4l2_selection *VAR_9)
{
 struct pvr2_v4l2_fh *VAR_10 = VAR_7->private_data;
 struct pvr2_hdw *VAR_11 = VAR_10->channel.mc_head->hdw;
 int VAR_12;

 if (VAR_9->type != VAR_5 ||
     VAR_9->target != VAR_6)
  return -VAR_0;
 VAR_12 = FUNC_0(
   FUNC_2(VAR_11, VAR_2),
   VAR_9->r.left);
 if (VAR_12 != 0)
  goto commit;
 VAR_12 = FUNC_0(
   FUNC_2(VAR_11, VAR_3),
   VAR_9->r.top);
 if (VAR_12 != 0)
  goto commit;
 VAR_12 = FUNC_0(
   FUNC_2(VAR_11, VAR_4),
   VAR_9->r.width);
 if (VAR_12 != 0)
  goto commit;
 VAR_12 = FUNC_0(
   FUNC_2(VAR_11, VAR_1),
   VAR_9->r.height);
commit:
 FUNC_1(VAR_11);
 return VAR_12;
}
