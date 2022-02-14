
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u32 ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__ const) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const s32 *VAR_1, int VAR_2, u32 VAR_3,
  u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3, VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5 <= VAR_1[VAR_6])
   return VAR_6;
 }


 return -VAR_0;
}
