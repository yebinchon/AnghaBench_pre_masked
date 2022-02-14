
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int) ;

u64 FUNC_1(u64 VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4 |= FUNC_0(VAR_2[VAR_5] & VAR_3) << VAR_5;

 return VAR_3 | (u64)VAR_4 << VAR_1;
}
