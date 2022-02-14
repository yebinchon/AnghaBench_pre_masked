
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12 = VAR_0;

 VAR_4 = FUNC_0(FUNC_1(VAR_2, 32), 64);
 VAR_5 = VAR_4 * FUNC_0(FUNC_1(VAR_3, 8), 16);
 VAR_5 = FUNC_0(VAR_5, VAR_1);

 VAR_6 = FUNC_0(VAR_2, 128);
 VAR_7 = FUNC_0(VAR_6 * FUNC_0(VAR_3, 32), VAR_1);

 VAR_8 = FUNC_0(FUNC_1(VAR_2 / 2, 16), 64);
 VAR_9 = VAR_8 * FUNC_0(FUNC_1(VAR_3 / 2, 8), 16);
 VAR_9 = FUNC_0(VAR_9, VAR_1);

 VAR_10 = FUNC_0(VAR_2, 128);
 VAR_11 = FUNC_0(VAR_10 * FUNC_0(VAR_3 / 2, 32), VAR_1);

 return FUNC_0(VAR_5 + VAR_7 + VAR_9 + VAR_11 +
       FUNC_2(VAR_12, VAR_6 * 48), VAR_1);
}
