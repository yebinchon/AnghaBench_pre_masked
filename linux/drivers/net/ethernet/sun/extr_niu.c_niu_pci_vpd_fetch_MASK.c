
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct niu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct niu*,scalar_t__) ;
 int FUNC_1 (struct niu*,scalar_t__) ;
 int FUNC_2 (struct niu*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2 + 1);
 if (VAR_4 < 0)
  return;

 VAR_3 = VAR_4 + 3;

 while (VAR_2 + VAR_3 < VAR_0) {
  u32 VAR_5 = VAR_2 + VAR_3;
  u32 VAR_6;

  VAR_4 = FUNC_0(VAR_1, VAR_5);
  if (VAR_4 != 0x90)
   return;

  VAR_4 = FUNC_1(VAR_1, VAR_5 + 1);
  if (VAR_4 < 0)
   return;

  VAR_5 = VAR_2 + VAR_3 + 3;
  VAR_6 = VAR_2 + VAR_3 + VAR_4;

  VAR_3 += VAR_4;

  VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_6);
  if (VAR_4 < 0 || VAR_4 == 1)
   return;
 }
}
