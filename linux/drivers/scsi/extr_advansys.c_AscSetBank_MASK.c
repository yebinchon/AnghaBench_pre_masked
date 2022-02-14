
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int PortAddr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(PortAddr VAR_6, uchar VAR_7)
{
 uchar VAR_8;

 VAR_8 = FUNC_0(VAR_6) &
     (~
      (VAR_4 | VAR_5 | VAR_2 | VAR_3 |
       VAR_1));
 if (VAR_7 == 1) {
  VAR_8 |= VAR_0;
 } else if (VAR_7 == 2) {
  VAR_8 |= VAR_2 | VAR_0;
 } else {
  VAR_8 &= ~VAR_0;
 }
 FUNC_1(VAR_6, VAR_8);
}
