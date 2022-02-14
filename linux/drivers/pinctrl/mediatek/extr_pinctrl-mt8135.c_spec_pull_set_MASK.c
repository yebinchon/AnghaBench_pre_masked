
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_3__ {unsigned int pin; unsigned char pupd_offset; unsigned char r0_offset; unsigned char r1_offset; int r1_bit; int r0_bit; int pupd_bit; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;




 int FUNC_1 (struct regmap*,unsigned int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2, unsigned int VAR_3,
  unsigned char VAR_4, bool VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 bool VAR_13 = 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_3 == VAR_1[VAR_7].pin) {
   VAR_13 = 1;
   break;
  }
 }

 if (!VAR_13)
  return -VAR_0;

 if (VAR_5)
  VAR_8 = VAR_1[VAR_7].pupd_offset + VAR_4;
 else
  VAR_8 = VAR_1[VAR_7].pupd_offset + (VAR_4 << 1);

 FUNC_1(VAR_2, VAR_8, VAR_1[VAR_7].pupd_bit);

 VAR_9 = VAR_1[VAR_7].r0_offset + VAR_4;
 VAR_11 = VAR_1[VAR_7].r0_offset + (VAR_4 << 1);
 VAR_10 = VAR_1[VAR_7].r1_offset + VAR_4;
 VAR_12 = VAR_1[VAR_7].r1_offset + (VAR_4 << 1);

 switch (VAR_6) {
 case 131:
  FUNC_1(VAR_2, VAR_11, VAR_1[VAR_7].r0_bit);
  FUNC_1(VAR_2, VAR_12, VAR_1[VAR_7].r1_bit);
  break;
 case 130:
  FUNC_1(VAR_2, VAR_9, VAR_1[VAR_7].r0_bit);
  FUNC_1(VAR_2, VAR_12, VAR_1[VAR_7].r1_bit);
  break;
 case 129:
  FUNC_1(VAR_2, VAR_11, VAR_1[VAR_7].r0_bit);
  FUNC_1(VAR_2, VAR_10, VAR_1[VAR_7].r1_bit);
  break;
 case 128:
  FUNC_1(VAR_2, VAR_9, VAR_1[VAR_7].r0_bit);
  FUNC_1(VAR_2, VAR_10, VAR_1[VAR_7].r1_bit);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
