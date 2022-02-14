
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_params {int rx_coalesce_usecs; } ;
struct sge {int fixed_intrtimer; TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(struct sge *VAR_1, struct sge_params *VAR_2)
{
 VAR_1->fixed_intrtimer = VAR_2->rx_coalesce_usecs *
  FUNC_0(VAR_1->adapter);
 FUNC_1(VAR_1->fixed_intrtimer, VAR_1->adapter->regs + VAR_0);
 return 0;
}
