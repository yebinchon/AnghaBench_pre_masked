
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int s32 ;
typedef int __le32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;

s32 FUNC_1(u32 *VAR_2, void *VAR_3, u32 VAR_4)
{
 __le32 *VAR_5 = (__le32 *)VAR_3;
 u32 VAR_6;


 if (!VAR_3 || !VAR_2)
  return VAR_0;

 if ((*VAR_2 >> VAR_1) != VAR_4)
  return VAR_0;

 VAR_2++;

 for (VAR_6 = 0; VAR_4; VAR_6++, VAR_4 -= 4)
  VAR_5[VAR_6] = FUNC_0(VAR_2[VAR_6]);

 return 0;
}
