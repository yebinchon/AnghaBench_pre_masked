
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_wdt {int wdd; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct sprd_wdt *VAR_5 = (struct sprd_wdt *)VAR_4;

 FUNC_1(VAR_5->base);
 FUNC_3(VAR_1, VAR_5->base + VAR_2);
 FUNC_0(VAR_5->base);
 FUNC_2(&VAR_5->wdd);
 return VAR_0;
}
