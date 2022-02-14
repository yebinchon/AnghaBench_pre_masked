
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_udc {int transceiver; scalar_t__ vbus_sensed; scalar_t__ driver; scalar_t__ pullup_on; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pxa_udc *VAR_0)
{
 int VAR_1;

 VAR_1 = ((VAR_0->pullup_on) && (VAR_0->driver));
 VAR_1 &= ((VAR_0->vbus_sensed) || (FUNC_0(VAR_0->transceiver)));
 return VAR_1;
}
