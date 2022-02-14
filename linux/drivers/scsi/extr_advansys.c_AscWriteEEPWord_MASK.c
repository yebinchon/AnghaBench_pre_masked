
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef int uchar ;
typedef int PortAddr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static ushort FUNC_5(PortAddr VAR_3, uchar VAR_4, ushort VAR_5)
{
 ushort VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6 != VAR_5) {
  FUNC_3(VAR_3, VAR_1);
  FUNC_1();
  FUNC_4(VAR_3, VAR_5);
  FUNC_1();
  FUNC_3(VAR_3,
      (uchar)((uchar)VAR_0 | VAR_4));
  FUNC_2();
  FUNC_3(VAR_3, VAR_2);
  FUNC_1();
  return (FUNC_0(VAR_3, VAR_4));
 }
 return (VAR_6);
}
