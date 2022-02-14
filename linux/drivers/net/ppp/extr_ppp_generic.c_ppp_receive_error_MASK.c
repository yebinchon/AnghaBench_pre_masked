
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppp {scalar_t__ vj; TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct ppp *VAR_0)
{
 ++VAR_0->dev->stats.rx_errors;
 if (VAR_0->vj)
  FUNC_0(VAR_0->vj);
}
