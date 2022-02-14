
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int carrier; int state_lock; scalar_t__ open; } ;
typedef TYPE_1__ hdlc_device ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 VAR_1->carrier = 1;
 VAR_1->open = 0;
 FUNC_2(&VAR_1->state_lock);
}
