
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct adapter {int pf; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_2__ {int viid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct adapter* FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
    enum ethtool_phys_id_state VAR_4)
{
 unsigned int VAR_5;
 struct adapter *VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_5 = 0xffff;
 else if (VAR_4 == VAR_2)
  VAR_5 = 0;
 else
  return -VAR_0;

 return FUNC_2(VAR_6, VAR_6->pf, FUNC_1(VAR_3)->viid, VAR_5);
}
