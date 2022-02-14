
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*,int,int) ;

__attribute__((used)) static void FUNC_2(struct usbhs_pipe *VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_2);

 VAR_3 &= VAR_0;





 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_2, VAR_0, 129);

 case 129:
  FUNC_1(VAR_2, VAR_0, VAR_1);
 }
}
