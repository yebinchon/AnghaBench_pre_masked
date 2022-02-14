
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct aspeed_video {scalar_t__ max_compressed_size; } ;


 int VAR_0 ;
 struct aspeed_video* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_1)
{
 struct aspeed_video *VAR_2 = FUNC_0(VAR_1->vb2_queue);

 if (FUNC_1(VAR_1, 0) < VAR_2->max_compressed_size)
  return -VAR_0;

 return 0;
}
