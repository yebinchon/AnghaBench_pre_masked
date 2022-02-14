
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct snvs_rtc_data {scalar_t__ offset; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int*) ;

__attribute__((used)) static u64 FUNC_1(struct snvs_rtc_data *VAR_2)
{
 u32 VAR_3, VAR_4;

 FUNC_0(VAR_2->regmap, VAR_2->offset + VAR_1, &VAR_3);
 FUNC_0(VAR_2->regmap, VAR_2->offset + VAR_0, &VAR_4);
 return (u64)VAR_3 << 32 | VAR_4;
}
