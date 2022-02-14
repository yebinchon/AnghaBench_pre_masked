
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hdlcdrv_state {scalar_t__ opened; int * skb; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* close ) (struct net_device*) ;} ;


 int FUNC_0 (int *) ;
 struct hdlcdrv_state* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct hdlcdrv_state *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 FUNC_2(VAR_0);

 if (VAR_1->ops && VAR_1->ops->close)
  VAR_2 = VAR_1->ops->close(VAR_0);
 FUNC_0(VAR_1->skb);
 VAR_1->skb = ((void*)0);
 VAR_1->opened = 0;
 return VAR_2;
}
