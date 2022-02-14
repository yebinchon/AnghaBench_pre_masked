
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sd*,int*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_2, u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 u8 VAR_6[VAR_1 * 2];
 int VAR_7;

 if (FUNC_1((VAR_5 <= 0) || (VAR_5 >= VAR_1) ||
       (VAR_3 + VAR_5 > 0xff)))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6[2 * VAR_7] = VAR_3;
  VAR_6[2 * VAR_7 + 1] = VAR_4[VAR_7];


  VAR_3 += 2;
 }

 return FUNC_0(VAR_2, VAR_6, VAR_5);
}
