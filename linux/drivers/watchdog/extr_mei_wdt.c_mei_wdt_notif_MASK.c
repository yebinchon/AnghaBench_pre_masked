
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_wdt {scalar_t__ state; } ;
struct mei_cl_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mei_wdt* FUNC_0 (struct mei_cl_device*) ;
 int FUNC_1 (struct mei_wdt*) ;

__attribute__((used)) static void FUNC_2(struct mei_cl_device *VAR_1)
{
 struct mei_wdt *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->state != VAR_0)
  return;

 FUNC_1(VAR_2);
}
