
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_asy {int lock; TYPE_1__* tty; scalar_t__ xleft; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct x25_asy* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,char*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct x25_asy*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1)
{
 struct x25_asy *VAR_2 = FUNC_1(VAR_1);

 FUNC_4(&VAR_2->lock);
 if (FUNC_3(VAR_1)) {



  FUNC_2(VAR_1, "transmit timed out, %s?\n",
       (FUNC_6(VAR_2->tty) || VAR_2->xleft) ?
       "bad line quality" : "driver error");
  VAR_2->xleft = 0;
  FUNC_0(VAR_0, &VAR_2->tty->flags);
  FUNC_7(VAR_2);
 }
 FUNC_5(&VAR_2->lock);
}
