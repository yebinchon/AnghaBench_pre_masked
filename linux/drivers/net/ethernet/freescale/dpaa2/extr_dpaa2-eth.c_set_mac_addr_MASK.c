
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {int addr_len; int * dev_addr; int addr_assign_type; TYPE_1__ dev; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; struct net_device* net_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct dpaa2_eth_priv *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->net_dev;
 struct device *VAR_4 = VAR_3->dev.parent;
 u8 VAR_5[VAR_0], VAR_6[VAR_0];
 int VAR_7;


 VAR_7 = FUNC_2(VAR_2->mc_io, 0, VAR_2->mc_token, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_4, "dpni_get_port_mac_addr() failed\n");
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_2->mc_io, 0, VAR_2->mc_token,
     VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_4, "dpni_get_primary_mac_addr() failed\n");
  return VAR_7;
 }


 if (!FUNC_7(VAR_5)) {

  if (!FUNC_6(VAR_5, VAR_6)) {
   VAR_7 = FUNC_4(VAR_2->mc_io, 0,
       VAR_2->mc_token,
       VAR_5);
   if (VAR_7) {
    FUNC_1(VAR_4, "dpni_set_primary_mac_addr() failed\n");
    return VAR_7;
   }
  }
  FUNC_8(VAR_3->dev_addr, VAR_5, VAR_3->addr_len);
 } else if (FUNC_7(VAR_6)) {



  FUNC_5(VAR_3);
  FUNC_0(VAR_4, "device(s) have all-zero hwaddr, replaced with random\n");

  VAR_7 = FUNC_4(VAR_2->mc_io, 0, VAR_2->mc_token,
      VAR_3->dev_addr);
  if (VAR_7) {
   FUNC_1(VAR_4, "dpni_set_primary_mac_addr() failed\n");
   return VAR_7;
  }






  VAR_3->addr_assign_type = VAR_1;
 } else {



  FUNC_8(VAR_3->dev_addr, VAR_6, VAR_3->addr_len);
 }

 return 0;
}
