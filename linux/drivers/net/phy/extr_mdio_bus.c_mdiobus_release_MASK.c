
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {scalar_t__ state; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mii_bus*) ;
 struct mii_bus* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2)
{
 struct mii_bus *VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_3->state != VAR_1 &&

        VAR_3->state != VAR_0);
 FUNC_1(VAR_3);
}
