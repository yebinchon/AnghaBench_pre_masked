
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vip_buffer {int list; int dma; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 struct vip_buffer* FUNC_2 (struct vb2_v4l2_buffer*) ;
 int FUNC_3 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_1(VAR_0);
 struct vip_buffer *VAR_2 = FUNC_2(VAR_1);

 VAR_2->dma = FUNC_3(VAR_0, 0);
 FUNC_0(&VAR_2->list);
 return 0;
}
