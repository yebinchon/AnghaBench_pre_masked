
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fmr2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fmr2*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct fmr2 *VAR_3, int VAR_4, u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_0(VAR_4 / 10) | FUNC_1((VAR_4 % 10) / 2);
 VAR_7 |= VAR_5;

 for (VAR_6 = 0; VAR_6 < 18; VAR_6++) {
  VAR_8 = VAR_7 & (1 << VAR_6) ? VAR_1 : 0;
  FUNC_2(VAR_3, VAR_8);
  FUNC_3(5);
  FUNC_2(VAR_3, VAR_8 | VAR_0);
  FUNC_3(5);
  FUNC_2(VAR_3, VAR_8);
 }


 FUNC_3(5);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(5);
 FUNC_2(VAR_3, 0);
}
