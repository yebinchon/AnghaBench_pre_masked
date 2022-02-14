
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* queue; } ;
struct vivid_dev {int stream_sliced_vbi_out; TYPE_2__ vbi_out_dev; int service_set_out; int vb_vbi_out_q; } ;
struct v4l2_sliced_vbi_format {int service_set; } ;
struct TYPE_6__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

int FUNC_3(struct file *VAR_2, void *VAR_3,
  struct v4l2_format *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_sliced_vbi_format *VAR_6 = &VAR_4->fmt.sliced;
 int VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);

 if (VAR_7)
  return VAR_7;
 if (FUNC_0(&VAR_5->vb_vbi_out_q))
  return -VAR_0;
 VAR_5->service_set_out = VAR_6->service_set;
 VAR_5->stream_sliced_vbi_out = 1;
 VAR_5->vbi_out_dev.queue->type = VAR_1;
 return 0;
}
