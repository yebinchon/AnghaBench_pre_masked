
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int flags; int rx_tl; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 pegasus_t *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1);
 if (!(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2);
 FUNC_3(&VAR_2->rx_tl);
 FUNC_4(VAR_2);

 return 0;
}
