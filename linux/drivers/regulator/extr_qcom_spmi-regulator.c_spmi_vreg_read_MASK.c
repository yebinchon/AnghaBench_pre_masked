
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct spmi_regulator {scalar_t__ base; int regmap; } ;


 int FUNC_0 (int ,scalar_t__,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct spmi_regulator *VAR_0, u16 VAR_1, u8 *VAR_2,
     int VAR_3)
{
 return FUNC_0(VAR_0->regmap, VAR_0->base + VAR_1, VAR_2, VAR_3);
}
