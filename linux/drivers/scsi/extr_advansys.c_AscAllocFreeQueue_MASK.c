
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef scalar_t__ uchar ;
typedef int PortAddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static uchar FUNC_2(PortAddr VAR_4, uchar VAR_5)
{
 ushort VAR_6;
 uchar VAR_7;
 uchar VAR_8;

 VAR_6 = FUNC_0(VAR_5);
 VAR_8 = (uchar)FUNC_1(VAR_4,
       (ushort)(VAR_6 +
         VAR_2));
 VAR_7 = FUNC_1(VAR_4, (ushort)(VAR_6 + VAR_1));
 if (((VAR_8 & VAR_3) == 0) && (VAR_7 != VAR_0))
  return VAR_7;
 return VAR_0;
}
