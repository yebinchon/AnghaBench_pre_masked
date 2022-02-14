
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static s32 FUNC_1(u32 *VAR_3)
{
 u32 *VAR_4;
 u32 VAR_5;


 if (!VAR_3)
  return VAR_0;


 VAR_4 = &VAR_3[FUNC_0(*VAR_3)];
 VAR_5 = (VAR_4[0] >> VAR_2) << VAR_2;


 if (VAR_5) {
  VAR_5 += VAR_1 << VAR_2;
  *VAR_3 += VAR_5;
 }

 return 0;
}
