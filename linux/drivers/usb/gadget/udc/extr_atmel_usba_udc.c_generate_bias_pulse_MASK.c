
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usba_udc {int bias_pulse_needed; TYPE_1__* errata; } ;
struct TYPE_2__ {int (* pulse_bias ) (struct usba_udc*) ;} ;


 int FUNC_0 (struct usba_udc*) ;

__attribute__((used)) static void FUNC_1(struct usba_udc *VAR_0)
{
 if (!VAR_0->bias_pulse_needed)
  return;

 if (VAR_0->errata && VAR_0->errata->pulse_bias)
  VAR_0->errata->pulse_bias(VAR_0);

 VAR_0->bias_pulse_needed = 0;
}
