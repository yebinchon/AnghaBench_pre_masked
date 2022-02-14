
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_composite_dev {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_composite_dev *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_1(VAR_0[VAR_5]);
  FUNC_2(VAR_1[VAR_5]);
 }

 FUNC_0(VAR_3[0]);
 VAR_3[0] = ((void*)0);

 return 0;
}
