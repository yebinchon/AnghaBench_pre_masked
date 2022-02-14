
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_wdt {scalar_t__ base; int enable; int rtc_enable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sprd_wdt *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->enable);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_2->rtc_enable);
 if (VAR_4) {
  FUNC_0(VAR_2->enable);
  return VAR_4;
 }

 FUNC_4(VAR_2->base);
 VAR_3 = FUNC_2(VAR_2->base + VAR_0);
 VAR_3 |= VAR_1;
 FUNC_5(VAR_3, VAR_2->base + VAR_0);
 FUNC_3(VAR_2->base);
 return 0;
}
