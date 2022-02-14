
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {struct pvr2_v4l2_dev* pdi; TYPE_2__ channel; } ;
struct pvr2_v4l2_dev {int config; int stream; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_hdw*,int ) ;
 int FUNC_1 (struct pvr2_hdw*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, enum v4l2_buf_type VAR_3)
{
 struct pvr2_v4l2_fh *VAR_4 = VAR_1->private_data;
 struct pvr2_hdw *VAR_5 = VAR_4->channel.mc_head->hdw;
 struct pvr2_v4l2_dev *VAR_6 = VAR_4->pdi;
 int VAR_7;

 if (!VAR_4->pdi->stream) {



  return -VAR_0;
 }
 VAR_7 = FUNC_0(VAR_5, VAR_6->config);
 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_1(VAR_5, !0);
}
