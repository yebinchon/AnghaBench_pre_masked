
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ const s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;

const void *
FUNC_1(const void *VAR_1, size_t VAR_2,
    size_t VAR_3, size_t VAR_4,
    size_t VAR_5, s32 VAR_6, s32 VAR_7)
{
 u32 VAR_8, VAR_9 = VAR_0;
 const void *VAR_10 = ((void*)0);
 unsigned int VAR_11;

 if (!VAR_1)
  return ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++, VAR_1 += VAR_3) {
  const u32 *VAR_12 = VAR_1 + VAR_4;
  const u32 *VAR_13 = VAR_1 + VAR_5;

  VAR_8 = FUNC_0(*VAR_12 - VAR_6) + FUNC_0(*VAR_13 - VAR_7);
  if (VAR_8 > VAR_9)
   continue;

  VAR_9 = VAR_8;
  VAR_10 = VAR_1;
  if (!VAR_8)
   break;
 }

 return VAR_10;
}
