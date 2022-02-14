
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 size_t** VAR_0 ;
 int FUNC_0 (size_t*,int ,int ) ;

void FUNC_1(void *VAR_1, u32 VAR_2, u8 VAR_3)
{
 u8 *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 u8 VAR_8, VAR_9, VAR_10;

 VAR_7 = (u8 * const)VAR_1;
 VAR_4 = &VAR_7[VAR_0[0][VAR_3]];
 VAR_5 = &VAR_7[VAR_0[1][VAR_3]];
 VAR_6 = &VAR_7[VAR_0[2][VAR_3]];

 VAR_8 = *VAR_4;
 VAR_9 = *VAR_5;
 VAR_10 = *VAR_6;

 FUNC_0(VAR_7, 0, VAR_2);

 *VAR_4 = VAR_8;
 *VAR_5 = VAR_9;
 *VAR_6 = VAR_10;
}
