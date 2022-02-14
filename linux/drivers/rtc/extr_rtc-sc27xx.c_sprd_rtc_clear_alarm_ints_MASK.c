
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_rtc {scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct sprd_rtc *VAR_2)
{
 return FUNC_0(VAR_2->regmap, VAR_2->base + VAR_1,
       VAR_0);
}
