
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const*,size_t) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;

int FUNC_3(struct rt2x00_dev *VAR_8,
     const u8 *VAR_9, const size_t VAR_10)
{
 size_t VAR_11 = 0;
 size_t VAR_12;
 bool VAR_13;
 if (FUNC_1(VAR_8) || FUNC_2(VAR_8, VAR_7))
  VAR_12 = 4096;
 else
  VAR_12 = 8192;

 VAR_13 = 1;



 if (VAR_10 != VAR_12 && (!VAR_13 || (VAR_10 % VAR_12) != 0))
  return VAR_1;





 if (FUNC_1(VAR_8) &&
     !FUNC_2(VAR_8, VAR_4) &&
     !FUNC_2(VAR_8, VAR_5) &&
     !FUNC_2(VAR_8, VAR_6) &&
     ((VAR_10 / VAR_12) == 1))
  return VAR_2;





 while (VAR_11 < VAR_10) {
  if (!FUNC_0(VAR_9 + VAR_11, VAR_12))
   return VAR_0;

  VAR_11 += VAR_12;
 }

 return VAR_3;
}
