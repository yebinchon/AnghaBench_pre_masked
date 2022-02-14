
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mic_data {int dummy; } ;


 int FUNC_0 (struct mic_data*,int*) ;
 int FUNC_1 (struct mic_data*,int*,int) ;
 int FUNC_2 (struct mic_data*,int*) ;

void FUNC_3(u8 *VAR_0, u8 *VAR_1, u8 *VAR_2, u32 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 struct mic_data VAR_6;
 u8 VAR_7[4] = {0x0, 0x0, 0x0, 0x0};

 FUNC_2(&VAR_6, VAR_0);
 VAR_7[0] = VAR_5;


 if (VAR_1[1]&1) {
  FUNC_1(&VAR_6, &VAR_1[16], 6);
  if (VAR_1[1]&2)
   FUNC_1(&VAR_6, &VAR_1[24], 6);
  else
   FUNC_1(&VAR_6, &VAR_1[10], 6);
 } else {
  FUNC_1(&VAR_6, &VAR_1[4], 6);
  if (VAR_1[1]&2)
   FUNC_1(&VAR_6, &VAR_1[16], 6);
  else
   FUNC_1(&VAR_6, &VAR_1[10], 6);
 }
 FUNC_1(&VAR_6, &VAR_7[0], 4);

 FUNC_1(&VAR_6, VAR_2, VAR_3);

 FUNC_0(&VAR_6, VAR_4);
}
