
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_wdt {int ctrl; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct aspeed_wdt *VAR_5, int VAR_6)
{
 VAR_5->ctrl |= VAR_1;

 FUNC_0(0, VAR_5->base + VAR_0);
 FUNC_0(VAR_6, VAR_5->base + VAR_2);
 FUNC_0(VAR_4, VAR_5->base + VAR_3);
 FUNC_0(VAR_5->ctrl, VAR_5->base + VAR_0);
}
