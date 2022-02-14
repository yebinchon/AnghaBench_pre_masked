
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
         enum ethtool_phys_id_state VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_0(VAR_2, VAR_1);
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  break;
 default:
  break;
 }

 return VAR_4;
}
