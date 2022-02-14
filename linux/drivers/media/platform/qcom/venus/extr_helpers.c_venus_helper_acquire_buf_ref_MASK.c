
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_buffer {int flags; } ;
struct vb2_v4l2_buffer {int dummy; } ;


 int VAR_0 ;
 struct venus_buffer* FUNC_0 (struct vb2_v4l2_buffer*) ;

void FUNC_1(struct vb2_v4l2_buffer *VAR_1)
{
 struct venus_buffer *VAR_2 = FUNC_0(VAR_1);

 VAR_2->flags |= VAR_0;
}
