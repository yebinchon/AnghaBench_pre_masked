
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vb2_buf; } ;
struct vip_buffer {TYPE_1__ vb; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_4__ {unsigned long sizeimage; } ;
struct sta2x11_vip {int v4l2_dev; TYPE_2__ format; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct vip_buffer* FUNC_1 (struct vb2_v4l2_buffer*) ;
 int FUNC_2 (int *,char*,unsigned long,unsigned long) ;
 struct sta2x11_vip* FUNC_3 (int ) ;
 unsigned long FUNC_4 (struct vb2_buffer*,int ) ;
 int FUNC_5 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct sta2x11_vip *VAR_3 = FUNC_3(VAR_1->vb2_queue);
 struct vip_buffer *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 VAR_5 = VAR_3->format.sizeimage;
 if (FUNC_4(VAR_1, 0) < VAR_5) {
  FUNC_2(&VAR_3->v4l2_dev, "buffer too small (%lu < %lu)\n",
    FUNC_4(VAR_1, 0), VAR_5);
  return -VAR_0;
 }

 FUNC_5(&VAR_4->vb.vb2_buf, 0, VAR_5);

 return 0;
}
