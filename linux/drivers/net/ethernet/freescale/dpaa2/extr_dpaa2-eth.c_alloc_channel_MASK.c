
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dpcon_attr {int qbman_ch_id; int id; } ;
struct dpaa2_eth_priv {int mc_io; TYPE_2__* net_dev; } ;
struct dpaa2_eth_channel {TYPE_3__* dpcon; struct dpaa2_eth_priv* priv; int ch_id; int dpcon_id; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int mc_handle; } ;
struct TYPE_7__ {struct device* parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 struct dpaa2_eth_channel* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ,int ,int ,struct dpcon_attr*) ;
 int FUNC_5 (struct dpaa2_eth_priv*,TYPE_3__*) ;
 int FUNC_6 (struct dpaa2_eth_channel*) ;
 struct dpaa2_eth_channel* FUNC_7 (int,int ) ;
 TYPE_3__* FUNC_8 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static struct dpaa2_eth_channel *
FUNC_9(struct dpaa2_eth_priv *VAR_1)
{
 struct dpaa2_eth_channel *VAR_2;
 struct dpcon_attr VAR_3;
 struct device *VAR_4 = VAR_1->net_dev->dev.parent;
 int VAR_5;

 VAR_2 = FUNC_7(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->dpcon = FUNC_8(VAR_1);
 if (FUNC_1(VAR_2->dpcon)) {
  VAR_5 = FUNC_2(VAR_2->dpcon);
  goto err_setup;
 }

 VAR_5 = FUNC_4(VAR_1->mc_io, 0, VAR_2->dpcon->mc_handle,
       &VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_4, "dpcon_get_attributes() failed\n");
  goto err_get_attr;
 }

 VAR_2->dpcon_id = VAR_3.id;
 VAR_2->ch_id = VAR_3.qbman_ch_id;
 VAR_2->priv = VAR_1;

 return VAR_2;

err_get_attr:
 FUNC_5(VAR_1, VAR_2->dpcon);
err_setup:
 FUNC_6(VAR_2);
 return FUNC_0(VAR_5);
}
