
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_4__ {unsigned long sizeimage; int field; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct isc_device {TYPE_3__ fmt; int v4l2_dev; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long) ;
 struct isc_device* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct vb2_buffer*,int ) ;
 int FUNC_4 (struct vb2_buffer*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct isc_device *VAR_3 = FUNC_2(VAR_1->vb2_queue);
 unsigned long VAR_4 = VAR_3->fmt.fmt.pix.sizeimage;

 if (FUNC_3(VAR_1, 0) < VAR_4) {
  FUNC_1(&VAR_3->v4l2_dev, "buffer too small (%lu < %lu)\n",
    FUNC_3(VAR_1, 0), VAR_4);
  return -VAR_0;
 }

 FUNC_4(VAR_1, 0, VAR_4);

 VAR_2->field = VAR_3->fmt.fmt.pix.field;

 return 0;
}
