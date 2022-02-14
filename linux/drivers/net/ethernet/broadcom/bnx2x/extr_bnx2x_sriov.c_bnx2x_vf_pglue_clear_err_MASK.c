
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,int,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_4, u8 VAR_5)
{
 u32 VAR_6 = (2 * FUNC_0(VAR_4) + VAR_5) >> 5;
 u32 VAR_7 = 0;

 switch (VAR_6) {
 case 0:
     VAR_7 = VAR_1;
     break;
 case 1:
     VAR_7 = VAR_2;
     break;
 case 2:
     VAR_7 = VAR_3;
     break;
 case 3:
     VAR_7 = VAR_0;
     break;
 }
 FUNC_1(VAR_4, VAR_7, 1 << (VAR_5 & 0x1f));
}
