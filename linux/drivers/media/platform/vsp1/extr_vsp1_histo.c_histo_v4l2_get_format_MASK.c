
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct vsp1_histogram {int data_size; int meta_format; TYPE_1__ queue; } ;
struct v4l2_meta_format {int buffersize; int dataformat; } ;
struct TYPE_4__ {struct v4l2_meta_format meta; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_meta_format*,int ,int) ;
 struct vsp1_histogram* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct vsp1_histogram *VAR_5 = FUNC_1(VAR_4->vdev);
 struct v4l2_meta_format *VAR_6 = &VAR_3->fmt.meta;

 if (VAR_3->type != VAR_5->queue.type)
  return -VAR_0;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->dataformat = VAR_5->meta_format;
 VAR_6->buffersize = VAR_5->data_size;

 return 0;
}
