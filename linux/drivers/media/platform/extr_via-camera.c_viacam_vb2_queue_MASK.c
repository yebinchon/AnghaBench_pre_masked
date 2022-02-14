
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_camera {int buffer_queue; } ;
struct via_buffer {int queue; } ;
struct vb2_buffer {int vb2_queue; } ;


 int FUNC_0 (int *,int *) ;
 struct via_camera* FUNC_1 (int ) ;
 struct via_buffer* FUNC_2 (struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct via_camera *VAR_1 = FUNC_1(VAR_0->vb2_queue);
 struct via_buffer *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->queue, &VAR_1->buffer_queue);
}
