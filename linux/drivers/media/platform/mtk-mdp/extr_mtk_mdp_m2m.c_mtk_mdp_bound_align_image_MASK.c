
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int*,unsigned int,unsigned int,int,int*,unsigned int,unsigned int,int,int ) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_0, unsigned int VAR_1,
          unsigned int VAR_2, unsigned int VAR_3,
          u32 *VAR_4, unsigned int VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = *VAR_0;
 VAR_9 = *VAR_4;
 VAR_12 = FUNC_0(VAR_3) - 1;
 VAR_13 = FUNC_0(VAR_7) - 1;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_12, VAR_4, VAR_5, VAR_6, VAR_13, 0);

 VAR_10 = 1 << VAR_12;
 VAR_11 = 1 << VAR_13;
 if (*VAR_0 < VAR_8 && (*VAR_0 + VAR_10) <= VAR_2)
  *VAR_0 += VAR_10;
 if (*VAR_4 < VAR_9 && (*VAR_4 + VAR_11) <= VAR_6)
  *VAR_4 += VAR_11;
}
