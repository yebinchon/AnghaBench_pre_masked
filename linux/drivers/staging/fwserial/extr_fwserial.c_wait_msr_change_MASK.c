
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delta_msr_wait; } ;
struct async_icount {int dummy; } ;
struct fwtty_port {TYPE_1__ port; struct async_icount icount; } ;


 int FUNC_0 (struct fwtty_port*,unsigned long,struct async_icount*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fwtty_port *VAR_0, unsigned long VAR_1)
{
 struct async_icount VAR_2;

 VAR_2 = VAR_0->icount;

 return FUNC_1(VAR_0->port.delta_msr_wait,
     FUNC_0(VAR_0, VAR_1, &VAR_2));
}
