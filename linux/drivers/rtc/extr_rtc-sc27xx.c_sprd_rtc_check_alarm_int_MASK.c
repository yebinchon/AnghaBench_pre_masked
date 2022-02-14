
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_rtc {scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sprd_rtc *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->regmap, VAR_4->base + VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (!(VAR_5 & VAR_2))
  return 0;

 return FUNC_1(VAR_4->regmap, VAR_4->base + VAR_1,
      VAR_0, VAR_0);
}
