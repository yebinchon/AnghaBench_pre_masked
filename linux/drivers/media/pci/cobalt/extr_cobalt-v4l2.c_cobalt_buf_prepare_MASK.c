
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {TYPE_1__* vb2_queue; } ;
struct cobalt_stream {int stride; int height; } ;
struct TYPE_2__ {struct cobalt_stream* drv_priv; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (struct vb2_buffer*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct cobalt_stream *VAR_3 = VAR_1->vb2_queue->drv_priv;

 FUNC_1(VAR_1, 0, VAR_3->stride * VAR_3->height);
 VAR_2->field = VAR_0;
 return 0;
}
