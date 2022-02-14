
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_5(u8 *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 int VAR_4;
 u8 VAR_5[16];
 u8 VAR_6[16];
 u8 VAR_7[16];

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  VAR_7[VAR_4] = VAR_0[VAR_4];
 for (VAR_3 = 0; VAR_3 < 11; VAR_3++) {
  if (VAR_3 == 0) {
   FUNC_4(VAR_7, VAR_1, VAR_2);
   FUNC_2(VAR_7, VAR_3);
  } else if (VAR_3 == 10) {
   FUNC_0(VAR_2, VAR_5);
   FUNC_3(VAR_5, VAR_6);
   FUNC_4(VAR_6, VAR_7, VAR_2);
  } else {
   FUNC_0(VAR_2, VAR_5);
   FUNC_3(VAR_5, VAR_6);
   FUNC_1(&VAR_6[0], &VAR_5[0]);
   FUNC_1(&VAR_6[4], &VAR_5[4]);
   FUNC_1(&VAR_6[8], &VAR_5[8]);
   FUNC_1(&VAR_6[12], &VAR_5[12]);
   FUNC_4(VAR_5, VAR_7, VAR_2);
   FUNC_2(VAR_7, VAR_3);
  }
 }
}
