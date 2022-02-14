
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(u8 *VAR_7, int VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 FUNC_4(VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_1);

 FUNC_1(VAR_0, 0);
 for (VAR_10 = 0; VAR_10 < 100; ++VAR_10) {
  if (FUNC_1(VAR_4, VAR_5))
   break;
  FUNC_5(1);
 }
 for (VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
  VAR_9 = FUNC_3();
  if (VAR_9 & VAR_6) {
   FUNC_0(VAR_9, VAR_7, VAR_8);
   break;
  }
  FUNC_2();
 }
}
