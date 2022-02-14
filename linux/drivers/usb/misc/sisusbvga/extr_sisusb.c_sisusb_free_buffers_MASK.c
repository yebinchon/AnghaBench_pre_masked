
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int * ibuf; int ** obuf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sisusb_usb_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->obuf[VAR_2]);
  VAR_1->obuf[VAR_2] = ((void*)0);
 }
 FUNC_0(VAR_1->ibuf);
 VAR_1->ibuf = ((void*)0);
}
