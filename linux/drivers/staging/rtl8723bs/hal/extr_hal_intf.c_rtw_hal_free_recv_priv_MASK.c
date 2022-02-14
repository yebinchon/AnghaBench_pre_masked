
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free_recv_priv ) (struct adapter*) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*) ;

void FUNC_1(struct adapter *VAR_0)
{

 if (VAR_0->HalFunc.free_recv_priv)
  VAR_0->HalFunc.free_recv_priv(VAR_0);
}
