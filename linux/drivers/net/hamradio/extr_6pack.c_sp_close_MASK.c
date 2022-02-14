
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sixpack {int lock; TYPE_1__* tty; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct sixpack* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct sixpack *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->lock);
 if (VAR_2->tty) {

  FUNC_0(VAR_0, &VAR_2->tty->flags);
 }
 FUNC_2(VAR_1);
 FUNC_4(&VAR_2->lock);

 return 0;
}
