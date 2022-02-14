
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ stale; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
    struct net_device *VAR_2 = VAR_1;
    FUNC_0(VAR_2)->stale = 0;
    return FUNC_1(VAR_0, VAR_1);
}
