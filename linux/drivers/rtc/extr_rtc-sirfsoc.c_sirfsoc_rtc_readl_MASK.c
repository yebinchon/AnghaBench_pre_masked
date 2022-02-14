
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sirfsoc_rtc_drv {scalar_t__ rtc_base; int regmap; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static u32 FUNC_1(struct sirfsoc_rtc_drv *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_0->regmap, VAR_0->rtc_base + VAR_1, &VAR_2);
 return VAR_2;
}
