
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tps6598x {int regmap; int i2c_protocol; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,size_t*,size_t) ;
 int FUNC_2 (int ,size_t,size_t*,int) ;

__attribute__((used)) static int
FUNC_3(struct tps6598x *VAR_3, u8 VAR_4, void *VAR_5, size_t VAR_6)
{
 u8 VAR_7[VAR_2 + 1];
 int VAR_8;

 if (FUNC_0(VAR_6 + 1 > sizeof(VAR_7)))
  return -VAR_0;

 if (!VAR_3->i2c_protocol)
  return FUNC_2(VAR_3->regmap, VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_2(VAR_3->regmap, VAR_4, VAR_7, sizeof(VAR_7));
 if (VAR_8)
  return VAR_8;

 if (VAR_7[0] < VAR_6)
  return -VAR_1;

 FUNC_1(VAR_5, &VAR_7[1], VAR_6);
 return 0;
}
