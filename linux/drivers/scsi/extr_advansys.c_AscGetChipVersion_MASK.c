
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PortAddr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned short VAR_2 ;
 unsigned char FUNC_1 (int) ;
 unsigned char FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(PortAddr VAR_3,
           unsigned short VAR_4)
{
 if (VAR_4 & VAR_2) {
  PortAddr VAR_5;
  unsigned char VAR_6;
  VAR_5 = (PortAddr) FUNC_0(VAR_3) |
      (PortAddr) VAR_1;
  VAR_6 = FUNC_2(VAR_5);
  return VAR_0 - 1 + VAR_6;
 }
 return FUNC_1(VAR_3);
}
