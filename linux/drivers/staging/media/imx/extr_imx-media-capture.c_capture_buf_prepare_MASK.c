
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct v4l2_pix_format {scalar_t__ sizeimage; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct capture_priv {int src_sd; TYPE_3__ vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,long) ;
 struct capture_priv* FUNC_1 (struct vb2_queue*) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct vb2_queue *VAR_2 = VAR_1->vb2_queue;
 struct capture_priv *VAR_3 = FUNC_1(VAR_2);
 struct v4l2_pix_format *VAR_4 = &VAR_3->vdev.fmt.fmt.pix;

 if (FUNC_2(VAR_1, 0) < VAR_4->sizeimage) {
  FUNC_0(VAR_3->src_sd,
    "data will not fit into plane (%lu < %lu)\n",
    FUNC_2(VAR_1, 0), (long)VAR_4->sizeimage);
  return -VAR_0;
 }

 FUNC_3(VAR_1, 0, VAR_4->sizeimage);

 return 0;
}
