
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (scalar_t__ const*,scalar_t__,scalar_t__ const*,scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_3, u16 VAR_4,
      const u8 *VAR_5, u16 VAR_6,
      u8 **VAR_7, u16 *VAR_8)
{
 u8 *VAR_9, *VAR_10;
 const u8 *VAR_11;

 if (!VAR_3)
  VAR_4 = 0;

 if (!VAR_5)
  VAR_6 = 0;

 if (VAR_4 == 0 && VAR_6 == 0) {
  *VAR_7 = ((void*)0);
  *VAR_8 = 0;
  return 0;
 }

 VAR_9 = FUNC_1(VAR_4 + VAR_6, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 if (VAR_3)
  FUNC_2(VAR_9, VAR_3, VAR_4);
 VAR_10 = VAR_9 + VAR_4;
 VAR_11 = VAR_5;
 while (VAR_11 && (VAR_11 + 1 < VAR_5 + VAR_6)) {

  u16 VAR_12 = 2 + VAR_11[1];

  if (VAR_11 + VAR_12 > VAR_5 + VAR_6)
   break;
  if (VAR_11[0] == VAR_2 &&
      (!VAR_3 || !FUNC_0(VAR_3, VAR_4,
           VAR_11, VAR_12))) {
   FUNC_2(VAR_10, VAR_11, VAR_12);
   VAR_10 += VAR_12;
  }
  VAR_11 += VAR_12;
 }

 *VAR_7 = VAR_9;
 *VAR_8 = VAR_10 - VAR_9;
 return 0;
}
