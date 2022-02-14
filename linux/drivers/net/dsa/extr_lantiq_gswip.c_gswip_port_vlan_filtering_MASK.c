
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gswip_priv {int port_vlan_filter; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
struct TYPE_2__ {struct net_device* bridge_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct gswip_priv*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_6, int VAR_7,
         bool VAR_8)
{
 struct gswip_priv *VAR_9 = VAR_6->priv;
 struct net_device *VAR_10 = FUNC_3(VAR_6, VAR_7)->bridge_dev;


 if (!!(VAR_9->port_vlan_filter & FUNC_0(VAR_7)) != VAR_8 && VAR_10)
  return -VAR_0;

 if (VAR_8) {

  FUNC_4(VAR_9,
      VAR_5,
      VAR_2 | VAR_4 |
      VAR_3,
      FUNC_2(VAR_7));
  FUNC_4(VAR_9, VAR_1, 0,
      FUNC_1(VAR_7));
 } else {

  FUNC_4(VAR_9,
      VAR_2 | VAR_4 |
      VAR_3,
      VAR_5,
      FUNC_2(VAR_7));
  FUNC_4(VAR_9, 0, VAR_1,
      FUNC_1(VAR_7));
 }

 return 0;
}
