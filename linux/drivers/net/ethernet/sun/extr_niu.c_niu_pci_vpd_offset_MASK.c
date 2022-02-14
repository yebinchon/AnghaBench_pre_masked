
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct niu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct niu*,scalar_t__) ;
 int FUNC_1 (struct niu*,scalar_t__) ;
 int FUNC_2 (struct niu*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct niu *VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = VAR_0, VAR_4;
 int VAR_5;

 while (VAR_2 < VAR_3) {
  VAR_4 = VAR_2;


  VAR_5 = FUNC_1(VAR_1, VAR_2 + 0);
  if (VAR_5 != 0x55aa)
   return 0;


  VAR_5 = FUNC_1(VAR_1, VAR_2 + 23);
  if (VAR_5 < 0)
   return 0;
  VAR_2 += VAR_5;


  VAR_5 = FUNC_1(VAR_1, VAR_2 + 0);
  if (VAR_5 != 0x5043)
   return 0;
  VAR_5 = FUNC_1(VAR_1, VAR_2 + 2);
  if (VAR_5 != 0x4952)
   return 0;


  VAR_5 = FUNC_0(VAR_1, VAR_2 + 20);
  if (VAR_5 < 0)
   return 0;
  if (VAR_5 != 0x01) {
   VAR_5 = FUNC_0(VAR_1, VAR_4 + 2);
   if (VAR_5 < 0)
    return 0;

   VAR_2 = VAR_4 + (VAR_5 * 512);
   continue;
  }

  VAR_5 = FUNC_2(VAR_1, VAR_2 + 8);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_4 += VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_4 + 0);
  if (VAR_5 != 0x82)
   return 0;

  return VAR_4;
 }

 return 0;
}
