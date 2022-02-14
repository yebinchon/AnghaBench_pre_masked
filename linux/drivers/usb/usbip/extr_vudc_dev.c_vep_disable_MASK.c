
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vudc {int lock; } ;
struct vep {int * desc; } ;
struct TYPE_2__ {scalar_t__ type_control; } ;
struct usb_ep {TYPE_1__ caps; } ;


 int VAR_0 ;
 struct vudc* FUNC_0 (struct vep*) ;
 int FUNC_1 (struct vudc*,struct vep*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vep* FUNC_4 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_5(struct usb_ep *VAR_1)
{
 struct vep *VAR_2;
 struct vudc *VAR_3;
 unsigned long VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_1 || !VAR_2->desc || VAR_1->caps.type_control)
  return -VAR_0;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_2->desc = ((void*)0);
 FUNC_1(VAR_3, VAR_2);
 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
