
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sizeimage; } ;
struct via_camera {TYPE_1__ user_format; } ;
struct vb2_buffer {int vb2_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct via_camera*,char*,scalar_t__,scalar_t__) ;
 struct via_camera* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct via_camera *VAR_2 = FUNC_1(VAR_1->vb2_queue);

 if (FUNC_2(VAR_1, 0) < VAR_2->user_format.sizeimage) {
  FUNC_0(VAR_2,
   "Plane size too small (%lu < %u)\n",
   FUNC_2(VAR_1, 0),
   VAR_2->user_format.sizeimage);
  return -VAR_0;
 }

 FUNC_3(VAR_1, 0, VAR_2->user_format.sizeimage);

 return 0;
}
