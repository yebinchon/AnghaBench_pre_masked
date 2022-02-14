
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct pwc_device {int udev; } ;


 int VAR_0 ;
 struct pwc_device* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct vb2_buffer *VAR_1)
{
 struct pwc_device *VAR_2 = FUNC_0(VAR_1->vb2_queue);


 if (!VAR_2->udev)
  return -VAR_0;

 return 0;
}
