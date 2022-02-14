
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;
struct TYPE_3__ {int wolopts; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 pegasus_t *VAR_4 = FUNC_0(VAR_2);

 VAR_3->supported = VAR_0 | VAR_1;
 VAR_3->wolopts = VAR_4->wolopts;
}
