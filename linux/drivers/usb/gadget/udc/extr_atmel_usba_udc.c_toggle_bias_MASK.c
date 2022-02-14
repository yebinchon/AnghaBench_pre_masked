
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usba_udc {TYPE_1__* errata; } ;
struct TYPE_2__ {int (* toggle_bias ) (struct usba_udc*,int) ;} ;


 int FUNC_0 (struct usba_udc*,int) ;

__attribute__((used)) static void FUNC_1(struct usba_udc *VAR_0, int VAR_1)
{
 if (VAR_0->errata && VAR_0->errata->toggle_bias)
  VAR_0->errata->toggle_bias(VAR_0, VAR_1);
}
