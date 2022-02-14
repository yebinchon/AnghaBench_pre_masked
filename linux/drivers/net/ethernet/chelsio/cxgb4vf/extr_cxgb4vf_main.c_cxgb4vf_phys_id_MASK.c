
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int viid; int adapter; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
      enum ethtool_phys_id_state VAR_4)
{
 unsigned int VAR_5;
 struct port_info *VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_5 = 0xffff;
 else if (VAR_4 == VAR_2)
  VAR_5 = 0;
 else
  return -VAR_0;

 return FUNC_1(VAR_6->adapter, VAR_6->viid, VAR_5);
}
