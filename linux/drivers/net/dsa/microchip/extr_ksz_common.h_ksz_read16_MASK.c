
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef unsigned int u16 ;
struct ksz_device {int * regmap; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static inline int FUNC_1(struct ksz_device *VAR_0, u32 VAR_1, u16 *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = FUNC_0(VAR_0->regmap[1], VAR_1, &VAR_3);

 *VAR_2 = VAR_3;
 return VAR_4;
}
