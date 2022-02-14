
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(u32 *VAR_6, u32 *VAR_7, u32 VAR_8,
       u32 VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 u32 VAR_12 = (VAR_0 >> VAR_1);
 bool VAR_13;

 *VAR_7 |= VAR_5;
 VAR_13 = *VAR_6 & VAR_4;

 if (VAR_13)
  VAR_11 = VAR_8 * VAR_10 * 8;
 else
  VAR_11 = VAR_8 * VAR_10 * 16;

 VAR_11 = FUNC_0(VAR_11, 1000);
 VAR_11 = VAR_11 > VAR_12 ?
     VAR_12 : VAR_11;
 VAR_11 = (VAR_11 << VAR_1) &
      VAR_0;
 *VAR_6 |= VAR_11;

 if (VAR_13)
  VAR_11 = VAR_9 * VAR_10 * 8;
 else
  VAR_11 = VAR_9 * VAR_10 * 16;

 VAR_11 = FUNC_0(VAR_11, 1000);
 VAR_11 = VAR_11 > VAR_12 ?
     VAR_12 : VAR_11;
 VAR_11 = (VAR_11 << VAR_3) &
      VAR_2;
 *VAR_6 |= VAR_11;
}
