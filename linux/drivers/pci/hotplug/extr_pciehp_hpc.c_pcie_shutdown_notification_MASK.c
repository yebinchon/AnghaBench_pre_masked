
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {scalar_t__ notification_enabled; } ;


 int FUNC_0 (struct controller*) ;
 int FUNC_1 (struct controller*) ;

void FUNC_2(struct controller *VAR_0)
{
 if (VAR_0->notification_enabled) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
  VAR_0->notification_enabled = 0;
 }
}
