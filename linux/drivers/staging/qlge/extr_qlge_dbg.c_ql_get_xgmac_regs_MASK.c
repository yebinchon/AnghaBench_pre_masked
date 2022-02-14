
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int,int*) ;
 int FUNC_1 (struct ql_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct ql_adapter *VAR_2, u32 *VAR_3,
     unsigned int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = VAR_0; VAR_6 < VAR_1; VAR_6 += 4, VAR_3++) {



  if ((VAR_6 == 0x00000114) ||
   (VAR_6 == 0x00000118) ||
   (VAR_6 == 0x0000013c) ||
   (VAR_6 == 0x00000140) ||
   (VAR_6 > 0x00000150 && VAR_6 < 0x000001fc) ||
   (VAR_6 > 0x00000278 && VAR_6 < 0x000002a0) ||
   (VAR_6 > 0x000002c0 && VAR_6 < 0x000002cf) ||
   (VAR_6 > 0x000002dc && VAR_6 < 0x000002f0) ||
   (VAR_6 > 0x000003c8 && VAR_6 < 0x00000400) ||
   (VAR_6 > 0x00000400 && VAR_6 < 0x00000410) ||
   (VAR_6 > 0x00000410 && VAR_6 < 0x00000420) ||
   (VAR_6 > 0x00000420 && VAR_6 < 0x00000430) ||
   (VAR_6 > 0x00000430 && VAR_6 < 0x00000440) ||
   (VAR_6 > 0x00000440 && VAR_6 < 0x00000450) ||
   (VAR_6 > 0x00000450 && VAR_6 < 0x00000500) ||
   (VAR_6 > 0x0000054c && VAR_6 < 0x00000568) ||
   (VAR_6 > 0x000005c8 && VAR_6 < 0x00000600)) {
   if (VAR_4)
    VAR_5 =
    FUNC_0(VAR_2, VAR_6, VAR_3);
   else
    VAR_5 = FUNC_1(VAR_2, VAR_6, VAR_3);

   if (VAR_5)
    *VAR_3 = 0xdeadbeef;
   break;
  }
 }
 return VAR_5;
}
