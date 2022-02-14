
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;







 int VAR_0 ;
 int FUNC_1 () ;

int FUNC_2(int VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1() & VAR_0;
 switch (VAR_3) {
 case 134:
  VAR_2 = (VAR_2 >> 8) & 0xff;
  break;
 case 129:
 case 128:
 case 133:
 case 132:
  VAR_2 = ((VAR_2 >> 8) & 0xff) - 100;
  break;
 case 131:
 case 130:
  VAR_2 = (VAR_2 & 0xffff)*731/0x4000 - 273;
  break;
 }
 return (int)VAR_2 * 1000;
}
