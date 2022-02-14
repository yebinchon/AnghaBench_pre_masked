
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ state; } ;
struct imx_port {int timer; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 struct imx_port* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct imx_port*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct imx_port* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct imx_port *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;

 if (VAR_5->port.state) {
  FUNC_3(&VAR_5->port.lock, VAR_6);
  FUNC_1(VAR_5);
  FUNC_4(&VAR_5->port.lock, VAR_6);

  FUNC_2(&VAR_5->timer, VAR_1 + VAR_0);
 }
}
