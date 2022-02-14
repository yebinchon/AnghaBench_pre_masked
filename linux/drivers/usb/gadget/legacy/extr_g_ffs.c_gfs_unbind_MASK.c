
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_composite_dev {int gadget; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int ** VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct usb_composite_dev *VAR_10)
{
 int VAR_11;

 FUNC_0();
 for (VAR_11 = 0; VAR_11 < VAR_0 * VAR_8; ++VAR_11)
  FUNC_3(*(VAR_2[0] + VAR_11));

 FUNC_2(VAR_9[0]);
 VAR_9[0] = ((void*)0);

 return 0;
}
