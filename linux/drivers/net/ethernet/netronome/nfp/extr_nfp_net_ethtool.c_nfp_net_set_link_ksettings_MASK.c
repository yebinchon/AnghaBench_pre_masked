
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nfp_port {TYPE_1__* app; } ;
struct nfp_nsp {int dummy; } ;
struct nfp_eth_table_port {int lanes; int index; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ autoneg; int speed; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct TYPE_3__ {int cpp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nfp_nsp*) ;
 int VAR_5 ;
 int FUNC_2 (struct nfp_nsp*,int ) ;
 int FUNC_3 (struct nfp_nsp*,int) ;
 struct nfp_eth_table_port* FUNC_4 (struct nfp_port*) ;
 int FUNC_5 (struct net_device*,char*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct nfp_nsp*) ;
 int FUNC_8 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct nfp_port*) ;
 struct nfp_port* FUNC_11 (struct net_device*) ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_6,
      const struct ethtool_link_ksettings *VAR_7)
{
 struct nfp_eth_table_port *VAR_8;
 struct nfp_port *VAR_9;
 struct nfp_nsp *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_11(VAR_6);
 VAR_8 = FUNC_4(VAR_9);
 if (!VAR_8)
  return -VAR_2;

 if (FUNC_6(VAR_6)) {
  FUNC_5(VAR_6, "Changing settings not allowed on an active interface. It may cause the port to be disabled until driver reload.\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_9(VAR_9->app->cpp, VAR_8->index);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_11 = FUNC_2(VAR_10, VAR_7->base.autoneg == VAR_0 ?
     VAR_3 : VAR_4);
 if (VAR_11)
  goto err_bad_set;
 if (VAR_7->base.speed != VAR_5) {
  u32 VAR_12 = VAR_7->base.speed / VAR_8->lanes;

  VAR_11 = FUNC_3(VAR_10, VAR_12);
  if (VAR_11)
   goto err_bad_set;
 }

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11 > 0)
  return 0;

 FUNC_10(VAR_9);

 return VAR_11;

err_bad_set:
 FUNC_7(VAR_10);
 return VAR_11;
}
