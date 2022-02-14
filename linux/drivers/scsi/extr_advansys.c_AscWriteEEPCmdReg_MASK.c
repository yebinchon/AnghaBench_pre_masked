
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uchar ;
typedef int PortAddr ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(PortAddr VAR_1, uchar VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  unsigned char VAR_4;
  FUNC_1(VAR_1, VAR_2);
  FUNC_2(1);
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == VAR_2)
   return 1;
 }
 return 0;
}
