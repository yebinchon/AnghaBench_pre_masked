
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int FUNC_0 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1)
{
 struct pvr2_v4l2_fh *VAR_2 = VAR_0->private_data;
 struct pvr2_hdw *VAR_3 = VAR_2->channel.mc_head->hdw;

 FUNC_0(VAR_3);
 return 0;
}
