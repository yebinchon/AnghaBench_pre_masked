
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int poll_time_us; } ;
struct sccnxp_port {TYPE_1__ pdata; int timer; int lock; } ;


 struct sccnxp_port* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct sccnxp_port* VAR_1 ;
 int FUNC_2 (struct sccnxp_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct sccnxp_port *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);
 FUNC_2(VAR_4);
 FUNC_4(&VAR_4->lock, VAR_5);

 FUNC_1(&VAR_4->timer, VAR_0 + FUNC_5(VAR_4->pdata.poll_time_us));
}
