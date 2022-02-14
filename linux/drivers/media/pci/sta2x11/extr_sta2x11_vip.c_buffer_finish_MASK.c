
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vip_buffer {int list; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct sta2x11_vip {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct vip_buffer* FUNC_4 (struct vb2_v4l2_buffer*) ;
 struct sta2x11_vip* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sta2x11_vip*) ;

__attribute__((used)) static void FUNC_8(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_3(VAR_0);
 struct sta2x11_vip *VAR_2 = FUNC_5(VAR_0->vb2_queue);
 struct vip_buffer *VAR_3 = FUNC_4(VAR_1);


 FUNC_1(&VAR_2->lock);
 FUNC_0(&VAR_3->list);
 FUNC_2(&VAR_2->lock);

 if (FUNC_6(VAR_0->vb2_queue))
  FUNC_7(VAR_2);
}
