
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sprd_rtc {int valid; scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct sprd_rtc *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_2->base + VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;






 VAR_2->valid = VAR_3 == VAR_0 ? 0 : 1;
 return 0;
}
