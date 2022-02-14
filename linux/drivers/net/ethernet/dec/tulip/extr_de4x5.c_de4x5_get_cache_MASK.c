
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int queue; } ;
struct de4x5_private {TYPE_1__ cache; } ;


 struct sk_buff* FUNC_0 (int *) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct net_device *VAR_0)
{
    struct de4x5_private *VAR_1 = FUNC_1(VAR_0);

    return FUNC_0(&VAR_1->cache.queue);
}
