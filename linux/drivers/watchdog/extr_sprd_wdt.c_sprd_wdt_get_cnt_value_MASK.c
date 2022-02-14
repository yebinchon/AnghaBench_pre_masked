
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_wdt {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct sprd_wdt *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base + VAR_0) <<
  VAR_1;
 VAR_5 |= FUNC_0(VAR_4->base + VAR_2) &
  VAR_3;

 return VAR_5;
}
