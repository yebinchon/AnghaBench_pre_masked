
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ov5640_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct ov5640_dev*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct ov5640_dev *VAR_5,
      unsigned long VAR_6,
      u8 *VAR_7, u8 *VAR_8,
      u8 *VAR_9)
{
 unsigned long VAR_10 = ~0;
 u8 VAR_11 = 1, VAR_12 = 1;
 u8 VAR_13, VAR_14;

 for (VAR_13 = VAR_4;
      VAR_13 <= VAR_3;
      VAR_13++) {
  for (VAR_14 = VAR_1;
       VAR_14 <= VAR_0;
       VAR_14++) {
   unsigned long VAR_15;





   if (VAR_14 > 127 && (VAR_14 % 2))
    continue;

   VAR_15 = FUNC_1(VAR_5,
             VAR_2,
             VAR_14, VAR_13);





   if (!VAR_6)
    break;





   if (VAR_15 < VAR_6)
    continue;

   if (FUNC_0(VAR_6 - VAR_15) < FUNC_0(VAR_6 - VAR_10)) {
    VAR_10 = VAR_15;
    VAR_11 = VAR_13;
    VAR_12 = VAR_14;
   }

   if (VAR_15 == VAR_6)
    goto out;
  }
 }

out:
 *VAR_9 = VAR_11;
 *VAR_7 = VAR_2;
 *VAR_8 = VAR_12;

 return VAR_10;
}
