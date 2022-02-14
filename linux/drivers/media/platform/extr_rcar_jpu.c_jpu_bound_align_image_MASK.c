
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (unsigned int*,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, unsigned int VAR_3,
      u32 *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = *VAR_0;
 VAR_9 = *VAR_4;

 VAR_10 = 1U << VAR_3;
 VAR_11 = 1U << VAR_7;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, 3);

 if (*VAR_0 < VAR_8 && *VAR_0 + VAR_10 < VAR_2)
  *VAR_0 += VAR_10;
 if (*VAR_4 < VAR_9 && *VAR_4 + VAR_11 < VAR_6)
  *VAR_4 += VAR_11;
}
