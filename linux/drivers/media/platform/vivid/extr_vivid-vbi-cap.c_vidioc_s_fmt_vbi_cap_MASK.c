
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* queue; } ;
struct vivid_dev {int stream_sliced_vbi_cap; TYPE_2__ vbi_cap_dev; int vb_vbi_cap_q; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

int FUNC_3(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);

 if (VAR_6)
  return VAR_6;
 if (VAR_5->stream_sliced_vbi_cap && FUNC_0(&VAR_5->vb_vbi_cap_q))
  return -VAR_0;
 VAR_5->stream_sliced_vbi_cap = 0;
 VAR_5->vbi_cap_dev.queue->type = VAR_1;
 return 0;
}
