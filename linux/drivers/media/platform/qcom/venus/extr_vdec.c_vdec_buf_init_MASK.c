
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int buf_count; } ;
struct vb2_buffer {int vb2_queue; } ;


 struct venus_inst* FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_0)
{
 struct venus_inst *VAR_1 = FUNC_0(VAR_0->vb2_queue);

 VAR_1->buf_count++;

 return FUNC_1(VAR_0);
}
