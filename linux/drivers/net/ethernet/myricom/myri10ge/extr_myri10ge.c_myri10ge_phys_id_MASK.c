
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct myri10ge_priv {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;


 int FUNC_0 (struct myri10ge_priv*,int) ;
 struct myri10ge_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, enum ethtool_phys_id_state VAR_2)
{
 struct myri10ge_priv *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_0(VAR_3, 1);
  break;

 case 128:
  VAR_4 = FUNC_0(VAR_3, 0);
  break;

 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
