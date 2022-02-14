
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static ushort FUNC_4(int VAR_3)
{
 int VAR_4, VAR_5 = 0;



 FUNC_2(VAR_0 + VAR_3, VAR_2);



 FUNC_1(4);

 for (VAR_4 = 15; VAR_4 >= 0; VAR_4--)
  VAR_5 = (VAR_5 << 1) + (FUNC_0(VAR_2) & 0x01);

 if (VAR_1 > 3)
  FUNC_3("  3c509 EEPROM word %d %#4.4x.\n", VAR_3, VAR_5);

 return VAR_5;
}
