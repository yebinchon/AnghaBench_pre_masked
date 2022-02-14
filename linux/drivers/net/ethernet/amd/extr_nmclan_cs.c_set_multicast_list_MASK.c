
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_3__ {int multicast_num_addrs; } ;
typedef TYPE_1__ mace_private ;


 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
  mace_private *VAR_1 = FUNC_1(VAR_0);
  VAR_1->multicast_num_addrs = FUNC_0(VAR_0);
  FUNC_3(VAR_0);

}
