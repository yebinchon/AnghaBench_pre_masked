
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef int uchar ;
typedef int PortAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(PortAddr VAR_6)
{
 uchar VAR_7;
 uchar VAR_8;
 ushort VAR_9;

 VAR_9 = 0;
 do {
  VAR_8 = FUNC_1(VAR_6, VAR_1);
  if (VAR_9++ > 0x7FFF) {
   break;
  }
 } while ((VAR_8 & VAR_3) != 0);
 VAR_7 =
     FUNC_1(VAR_6,
       VAR_0) & (~VAR_2);
 FUNC_3(VAR_6, VAR_0,
    (uchar)(VAR_7 | VAR_2));
 FUNC_2(VAR_6, VAR_4);
 VAR_9 = 0;
 while (FUNC_0(VAR_6) & VAR_5) {
  FUNC_2(VAR_6, VAR_4);
  if (VAR_9++ > 3) {
   break;
  }
 }
 FUNC_3(VAR_6, VAR_0, VAR_7);
}
