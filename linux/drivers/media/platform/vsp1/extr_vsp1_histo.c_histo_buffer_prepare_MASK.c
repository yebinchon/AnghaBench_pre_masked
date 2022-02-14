
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_histogram_buffer {int addr; } ;
struct vsp1_histogram {scalar_t__ data_size; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int num_planes; int vb2_queue; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct vsp1_histogram_buffer* FUNC_1 (struct vb2_v4l2_buffer*) ;
 struct vsp1_histogram* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vb2_buffer*,int ) ;
 int FUNC_4 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct vsp1_histogram *VAR_3 = FUNC_2(VAR_1->vb2_queue);
 struct vsp1_histogram_buffer *VAR_4 = FUNC_1(VAR_2);

 if (VAR_1->num_planes != 1)
  return -VAR_0;

 if (FUNC_3(VAR_1, 0) < VAR_3->data_size)
  return -VAR_0;

 VAR_4->addr = FUNC_4(VAR_1, 0);

 return 0;
}
