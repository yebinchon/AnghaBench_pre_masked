
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, const struct v4l2_tuner *VAR_4)
{
 struct pvr2_v4l2_fh *VAR_5 = VAR_2->private_data;
 struct pvr2_hdw *VAR_6 = VAR_5->channel.mc_head->hdw;
 int VAR_7;

 if (VAR_4->index != 0)
  return -VAR_0;

 VAR_7 = FUNC_0(
   FUNC_2(VAR_6, VAR_1),
   VAR_4->audmode);
 FUNC_1(VAR_6);
 return VAR_7;
}
