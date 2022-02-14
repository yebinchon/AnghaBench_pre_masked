
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct usbtv {int last_odd; scalar_t__ sequence; int * udev; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbtv*) ;
 struct usbtv* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct usbtv *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->udev == ((void*)0))
  return -VAR_0;

 VAR_3->last_odd = 1;
 VAR_3->sequence = 0;
 return FUNC_0(VAR_3);
}
