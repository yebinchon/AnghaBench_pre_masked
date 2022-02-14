
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct capi_driver {int dummy; } ;
struct TYPE_7__ {int cardnr; int irq; scalar_t__ port; } ;
typedef TYPE_2__ capicardparams ;
struct TYPE_8__ {int irq; TYPE_1__* resource; } ;
struct TYPE_6__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_1(struct capi_driver *VAR_3, capicardparams *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5].resource[0].start)
   continue;

  VAR_2[VAR_5].resource[0].start = VAR_4->port;
  VAR_2[VAR_5].irq = VAR_4->irq;

  if (FUNC_0(&VAR_2[VAR_5], VAR_4->cardnr) == 0)
   return 0;
 }
 return -VAR_0;
}
