
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps6586x_regulator {scalar_t__* enable_reg; int* enable_bit; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,scalar_t__,int) ;
 int FUNC_1 (struct device*,scalar_t__,int*) ;
 int FUNC_2 (struct device*,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_3(struct device *VAR_0,
          struct tps6586x_regulator *VAR_1)
{
 uint8_t VAR_2, VAR_3;
 int VAR_4;

 if (VAR_1->enable_reg[0] == VAR_1->enable_reg[1] &&
     VAR_1->enable_bit[0] == VAR_1->enable_bit[1])
   return 0;

 VAR_4 = FUNC_1(VAR_0, VAR_1->enable_reg[0], &VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1->enable_reg[1], &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (!(VAR_3 & (1 << VAR_1->enable_bit[1])))
  return 0;





 if (!(VAR_2 & (1 << VAR_1->enable_bit[0]))) {
  VAR_4 = FUNC_2(VAR_0, VAR_1->enable_reg[0],
     1 << VAR_1->enable_bit[0]);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_0(VAR_0, VAR_1->enable_reg[1],
     1 << VAR_1->enable_bit[1]);
}
