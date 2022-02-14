
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct regmap {int dummy; } ;
struct max17042_chip {struct regmap* regmap; } ;


 int FUNC_0 (struct regmap*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_1(struct max17042_chip *VAR_0,
     u8 VAR_1, u16 *VAR_2, int VAR_3)
{
 struct regmap *VAR_4 = VAR_0->regmap;
 int VAR_5;
 u32 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(VAR_4, VAR_1 + VAR_5, &VAR_6);
  VAR_2[VAR_5] = (u16)VAR_6;
 }
}
