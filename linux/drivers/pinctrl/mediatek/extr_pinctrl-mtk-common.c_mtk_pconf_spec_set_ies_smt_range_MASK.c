
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mtk_pin_ies_smt_set {unsigned int start; unsigned int end; unsigned char offset; int bit; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_2(struct regmap *VAR_1,
  const struct mtk_pin_ies_smt_set *VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned char VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_4 >= VAR_2[VAR_7].start &&
    VAR_4 <= VAR_2[VAR_7].end) {
   break;
  }
 }

 if (VAR_7 == VAR_3)
  return -VAR_0;

 if (VAR_6)
  VAR_8 = VAR_2[VAR_7].offset + VAR_5;
 else
  VAR_8 = VAR_2[VAR_7].offset + (VAR_5 << 1);

 VAR_9 = FUNC_0(VAR_2[VAR_7].bit);
 FUNC_1(VAR_1, VAR_8, VAR_9);
 return 0;
}
