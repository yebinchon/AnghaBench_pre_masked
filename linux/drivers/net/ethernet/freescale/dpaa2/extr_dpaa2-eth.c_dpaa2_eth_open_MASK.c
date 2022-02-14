
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; int bpid; TYPE_1__* dpbp_dev; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {TYPE_2__ obj_desc; } ;


 int FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 int FUNC_3 (struct dpaa2_eth_priv*) ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 struct dpaa2_eth_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct dpaa2_eth_priv*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_0)
{
 struct dpaa2_eth_priv *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_9(VAR_1, VAR_1->bpid);
 if (VAR_2) {




  FUNC_5(VAR_0, "Buffer seeding failed for DPBP %d (bpid=%d)\n",
      VAR_1->dpbp_dev->obj_desc.id, VAR_1->bpid);
 }





 FUNC_8(VAR_0);
 FUNC_3(VAR_1);




 FUNC_7(VAR_0);

 VAR_2 = FUNC_1(VAR_1->mc_io, 0, VAR_1->mc_token);
 if (VAR_2 < 0) {
  FUNC_5(VAR_0, "dpni_enable() failed\n");
  goto enable_err;
 }




 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0) {
  FUNC_5(VAR_0, "Can't update link state\n");
  goto link_state_err;
 }

 return 0;

link_state_err:
enable_err:
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 return VAR_2;
}
