
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int field; int sizeimage; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct TYPE_4__ {TYPE_2__ fmt; } ;
struct vpfe_device {TYPE_1__ fmt; } ;
struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {int vb2_queue; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct vpfe_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_3 (struct vb2_buffer*,int ) ;
 int FUNC_4 (struct vb2_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct vpfe_device *VAR_3 = FUNC_1(VAR_1->vb2_queue);

 FUNC_4(VAR_1, 0, VAR_3->fmt.fmt.pix.sizeimage);

 if (FUNC_2(VAR_1, 0) > FUNC_3(VAR_1, 0))
  return -VAR_0;

 VAR_2->field = VAR_3->fmt.fmt.pix.field;

 return 0;
}
