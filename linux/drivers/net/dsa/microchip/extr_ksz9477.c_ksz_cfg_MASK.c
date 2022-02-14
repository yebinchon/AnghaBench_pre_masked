
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ksz_device {int * regmap; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_device *VAR_0, u32 VAR_1, u8 VAR_2, bool VAR_3)
{
 FUNC_0(VAR_0->regmap[0], VAR_1, VAR_2, VAR_3 ? VAR_2 : 0);
}
