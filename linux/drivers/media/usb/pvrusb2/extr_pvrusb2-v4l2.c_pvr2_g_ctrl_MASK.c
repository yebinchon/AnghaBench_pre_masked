
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {int value; int id; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_control *VAR_2)
{
 struct pvr2_v4l2_fh *VAR_3 = VAR_0->private_data;
 struct pvr2_hdw *VAR_4 = VAR_3->channel.mc_head->hdw;
 int VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_0(FUNC_1(VAR_4, VAR_2->id),
   &VAR_5);
 VAR_2->value = VAR_5;
 return VAR_6;
}
