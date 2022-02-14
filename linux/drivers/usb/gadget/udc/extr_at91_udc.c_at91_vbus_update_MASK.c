
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int vbus_active_low; } ;
struct at91_udc {unsigned int vbus; int gadget; TYPE_1__ board; } ;


 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct at91_udc *VAR_0, unsigned VAR_1)
{
 VAR_1 ^= VAR_0->board.vbus_active_low;
 if (VAR_1 != VAR_0->vbus)
  FUNC_0(&VAR_0->gadget, VAR_1);
}
