
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct men_z069_drv {int mem; int wdt; } ;
struct mcb_device {int dummy; } ;


 struct men_z069_drv* FUNC_0 (struct mcb_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mcb_device *VAR_0)
{
 struct men_z069_drv *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->wdt);
 FUNC_1(VAR_1->mem);
}
