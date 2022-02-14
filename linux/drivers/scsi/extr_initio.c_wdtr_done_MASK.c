
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct initio_host {scalar_t__ addr; TYPE_1__* active_tc; scalar_t__* msg; } ;
struct TYPE_2__ {int js_period; int sconfig0; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct initio_host * VAR_6)
{
 VAR_6->active_tc->flags &= ~VAR_0;
 VAR_6->active_tc->flags |= VAR_1;

 VAR_6->active_tc->js_period = 0;
 if (VAR_6->msg[2])
  VAR_6->active_tc->js_period |= VAR_3;
 VAR_6->active_tc->sconfig0 &= ~VAR_2;
 FUNC_0(VAR_6->active_tc->sconfig0, VAR_6->addr + VAR_4);
 FUNC_0(VAR_6->active_tc->js_period, VAR_6->addr + VAR_5);

 return 1;
}
