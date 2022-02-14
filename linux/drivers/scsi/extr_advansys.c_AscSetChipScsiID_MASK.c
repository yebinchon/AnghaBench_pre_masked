
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int uchar ;
typedef int PortAddr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static uchar FUNC_3(PortAddr VAR_1, uchar VAR_2)
{
 ushort VAR_3;

 if (FUNC_1(VAR_1) == VAR_2) {
  return (VAR_2);
 }
 VAR_3 = FUNC_0(VAR_1);
 VAR_3 &= 0xF8FF;
 VAR_3 |= (ushort)((VAR_2 & VAR_0) << 8);
 FUNC_2(VAR_1, VAR_3);
 return (FUNC_1(VAR_1));
}
