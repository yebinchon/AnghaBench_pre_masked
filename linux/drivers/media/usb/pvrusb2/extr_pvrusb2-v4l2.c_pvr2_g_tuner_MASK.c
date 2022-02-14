
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*) ;
 int FUNC_1 (struct pvr2_hdw*,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_tuner *VAR_3)
{
 struct pvr2_v4l2_fh *VAR_4 = VAR_1->private_data;
 struct pvr2_hdw *VAR_5 = VAR_4->channel.mc_head->hdw;

 if (VAR_3->index != 0)
  return -VAR_0;

 FUNC_0(VAR_5);
 return FUNC_1(VAR_5, VAR_3);
}
