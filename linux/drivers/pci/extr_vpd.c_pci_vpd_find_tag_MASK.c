
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

int FUNC_2(const u8 *VAR_6, unsigned int VAR_7, unsigned int VAR_8, u8 VAR_9)
{
 int VAR_10;

 for (VAR_10 = VAR_7; VAR_10 < VAR_8; ) {
  u8 VAR_11 = VAR_6[VAR_10];

  if (VAR_11 & VAR_1) {

   if (VAR_10 + VAR_2 > VAR_8)
    break;

   if (VAR_11 == VAR_9)
    return VAR_10;

   VAR_10 += VAR_2 +
        FUNC_0(&VAR_6[VAR_10]);
  } else {
   u8 VAR_12 = VAR_11 & ~VAR_4;

   if (VAR_12 == VAR_9)
    return VAR_10;

   if (VAR_12 == VAR_3)
    break;

   VAR_10 += VAR_5 +
        FUNC_1(&VAR_6[VAR_10]);
  }
 }

 return -VAR_0;
}
