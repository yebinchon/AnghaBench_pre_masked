
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct r8152 {int control; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct r8152*) ;
 int FUNC_3 (struct r8152*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct r8152* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_1)
{
 struct r8152 *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_2->control);

 if (FUNC_4(VAR_0, &VAR_2->flags))
  VAR_3 = FUNC_2(VAR_2);
 else
  VAR_3 = FUNC_3(VAR_2);

 FUNC_1(&VAR_2->control);

 return VAR_3;
}
