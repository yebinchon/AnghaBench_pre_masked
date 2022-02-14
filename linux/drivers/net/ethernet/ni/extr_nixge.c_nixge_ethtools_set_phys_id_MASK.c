
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nixge_priv {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nixge_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nixge_priv*,int ) ;
 int FUNC_2 (struct nixge_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
          enum ethtool_phys_id_state VAR_4)
{
 struct nixge_priv *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 switch (VAR_4) {
 case 131:
  VAR_6 |= VAR_0;

  FUNC_2(VAR_5, VAR_2, VAR_6);
  return 2;

 case 128:
  VAR_6 |= VAR_1;
  FUNC_2(VAR_5, VAR_2, VAR_6);
  break;

 case 129:
  VAR_6 &= ~VAR_1;
  FUNC_2(VAR_5, VAR_2, VAR_6);
  break;

 case 130:

  VAR_6 &= ~VAR_0;
  FUNC_2(VAR_5, VAR_2, VAR_6);
  break;
 }

 return 0;
}
