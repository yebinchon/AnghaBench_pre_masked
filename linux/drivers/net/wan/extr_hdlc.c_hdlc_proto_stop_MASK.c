
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* proto; } ;
typedef TYPE_2__ hdlc_device ;
struct TYPE_4__ {int (* stop ) (struct net_device*) ;} ;


 TYPE_2__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0)
{
 hdlc_device *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->proto->stop)
  VAR_1->proto->stop(VAR_0);
}
