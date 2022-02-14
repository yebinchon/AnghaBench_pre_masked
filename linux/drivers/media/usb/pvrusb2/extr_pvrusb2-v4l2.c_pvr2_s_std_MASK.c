
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, v4l2_std_id VAR_3)
{
 struct pvr2_v4l2_fh *VAR_4 = VAR_1->private_data;
 struct pvr2_hdw *VAR_5 = VAR_4->channel.mc_head->hdw;
 int VAR_6;

 VAR_6 = FUNC_0(
  FUNC_2(VAR_5, VAR_0), VAR_3);
 FUNC_1(VAR_5);
 return VAR_6;
}
