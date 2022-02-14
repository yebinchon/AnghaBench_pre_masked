
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int PortAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(PortAddr VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 0;
 uchar VAR_6;

 if (FUNC_0(VAR_3))
  return 1;
 VAR_6 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_0,
    VAR_1 | VAR_2);
 do {
  if (FUNC_0(VAR_3)) {
   VAR_5 = 1;
   break;
  }
  FUNC_3(100);
 } while (VAR_4++ < 20);
 FUNC_2(VAR_3, VAR_0, VAR_6);
 return VAR_5;
}
