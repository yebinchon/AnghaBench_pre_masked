
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,int) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  if (!FUNC_1(VAR_0, 1))
   break;
 }

 FUNC_0(VAR_0);
}
