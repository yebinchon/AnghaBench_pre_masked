
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsps_glue {scalar_t__ vbus_irq; } ;


 int FUNC_0 (struct dsps_glue*,int) ;

__attribute__((used)) static void FUNC_1(struct dsps_glue *VAR_0)
{
 if (VAR_0->vbus_irq)
  return;

 FUNC_0(VAR_0, -1);
}
