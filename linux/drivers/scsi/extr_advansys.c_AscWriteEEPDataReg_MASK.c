
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef int PortAddr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(PortAddr VAR_1, ushort VAR_2)
{
 ushort VAR_3;
 int VAR_4;

 VAR_4 = 0;
 while (1) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_2(1);
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 == VAR_2) {
   return (1);
  }
  if (VAR_4++ > VAR_0) {
   return (0);
  }
 }
}
