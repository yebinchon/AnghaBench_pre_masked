
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mtk_pin_spec_pupd_set_samereg {unsigned int pin; unsigned char offset; int r1_bit; int r0_bit; int pupd_bit; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;




 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_2(struct regmap *VAR_1,
  const struct mtk_pin_spec_pupd_set_samereg *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4,
  unsigned char VAR_5, bool VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 const struct mtk_pin_spec_pupd_set_samereg *VAR_15;
 bool VAR_16 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_4 == VAR_2[VAR_8].pin) {
   VAR_16 = 1;
   break;
  }
 }

 if (!VAR_16)
  return -VAR_0;

 VAR_15 = VAR_2 + VAR_8;
 VAR_10 = VAR_15->offset + VAR_5;
 VAR_11 = VAR_15->offset + (VAR_5 << 1);

 if (VAR_6)
  VAR_9 = VAR_11;
 else
  VAR_9 = VAR_10;

 VAR_12 = FUNC_0(VAR_15->pupd_bit);
 FUNC_1(VAR_1, VAR_9, VAR_12);

 VAR_13 = FUNC_0(VAR_15->r0_bit);
 VAR_14 = FUNC_0(VAR_15->r1_bit);

 switch (VAR_7) {
 case 131:
  FUNC_1(VAR_1, VAR_11, VAR_13);
  FUNC_1(VAR_1, VAR_11, VAR_14);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_10, VAR_13);
  FUNC_1(VAR_1, VAR_11, VAR_14);
  break;
 case 129:
  FUNC_1(VAR_1, VAR_11, VAR_13);
  FUNC_1(VAR_1, VAR_10, VAR_14);
  break;
 case 128:
  FUNC_1(VAR_1, VAR_10, VAR_13);
  FUNC_1(VAR_1, VAR_10, VAR_14);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
