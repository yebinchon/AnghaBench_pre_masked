
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_8__ {int ioc; } ;
struct TYPE_9__ {TYPE_3__ ioceth; } ;
struct bnad {int bna_lock; TYPE_4__ bna; } ;
struct TYPE_6__ {int sem_timer; } ;
struct TYPE_7__ {TYPE_1__ ioc; } ;
struct TYPE_10__ {TYPE_2__ ioceth; } ;


 int FUNC_0 (int *) ;
 TYPE_5__ VAR_0 ;
 struct bnad* VAR_1 ;
 struct bnad* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_2)
{
 struct bnad *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0.ioceth.ioc.sem_timer);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->bna_lock, VAR_4);
 FUNC_0(&VAR_3->bna.ioceth.ioc);
 FUNC_3(&VAR_3->bna_lock, VAR_4);
}
