
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct usbtv {scalar_t__ udev; } ;


 int FUNC_0 (struct usbtv*) ;
 struct usbtv* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_2(struct vb2_queue *VAR_0)
{
 struct usbtv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->udev)
  FUNC_0(VAR_1);
}
