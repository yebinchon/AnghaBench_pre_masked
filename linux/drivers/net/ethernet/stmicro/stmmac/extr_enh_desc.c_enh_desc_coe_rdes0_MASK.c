
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_2;
 u32 VAR_8 = (VAR_5 << 2 | VAR_4 << 1 | VAR_6) & 0x7;
 if (VAR_8 == 0x0)
  VAR_7 = VAR_3;
 else if (VAR_8 == 0x4)
  VAR_7 = VAR_2;
 else if (VAR_8 == 0x5)
  VAR_7 = VAR_0;
 else if (VAR_8 == 0x6)
  VAR_7 = VAR_0;
 else if (VAR_8 == 0x7)
  VAR_7 = VAR_0;
 else if (VAR_8 == 0x1)
  VAR_7 = VAR_1;
 else if (VAR_8 == 0x3)
  VAR_7 = VAR_1;
 return VAR_7;
}
