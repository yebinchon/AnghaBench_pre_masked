
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int dummy; } ;
struct imgu_device {int lock; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int FUNC_0 (struct vb2_buffer*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct imgu_device *VAR_0, struct vb2_buffer *VAR_1,
        enum vb2_buffer_state VAR_2)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);
}
