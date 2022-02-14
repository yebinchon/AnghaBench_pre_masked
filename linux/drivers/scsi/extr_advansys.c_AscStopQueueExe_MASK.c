
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PortAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(PortAddr VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_3, VAR_0) == 0) {
  FUNC_1(VAR_3, VAR_0,
     VAR_2);
  do {
   if (FUNC_0(VAR_3, VAR_0) &
       VAR_1) {
    return (1);
   }
   FUNC_2(100);
  } while (VAR_4++ < 20);
 }
 return (0);
}
