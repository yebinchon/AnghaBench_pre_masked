
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct sym_hcb {TYPE_2__ s; } ;
struct TYPE_6__ {int timer; } ;
struct TYPE_4__ {int host_lock; } ;


 struct sym_hcb* FUNC_0 (int ,struct timer_list*,int ) ;
 struct sym_hcb* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct sym_hcb*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct sym_hcb *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1.timer);
 unsigned long VAR_4;

 FUNC_1(VAR_3->s.host->host_lock, VAR_4);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3->s.host->host_lock, VAR_4);
}
