
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(loff_t VAR_4, int *VAR_5, int *VAR_6, int *VAR_7,
         int *VAR_8, int VAR_9)
{
 uint VAR_10, VAR_11;

 VAR_11 = VAR_1 * VAR_0;
 if (VAR_9 == 1 || VAR_9 == 2)
  VAR_11 /= 2;

 VAR_10 = VAR_4 / VAR_3;
 *VAR_5 = VAR_10 / VAR_11 * VAR_0;
 *VAR_6 = *VAR_5 + 1;
 *VAR_7 = VAR_10 % VAR_11;
 *VAR_7 /= VAR_0;
 if (VAR_9 == 1 || VAR_9 == 2)
  *VAR_7 *= 2;
 if (VAR_10 % 2)
  *VAR_8 = VAR_2;
 else
  *VAR_8 = 0;
}
