
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dpni_link_cfg {int options; int member_0; } ;
struct TYPE_4__ {int options; } ;
struct dpaa2_eth_priv {TYPE_1__ link_state; int mc_token; int mc_io; TYPE_3__* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,int ,struct dpni_link_cfg*) ;
 int FUNC_2 (int ,int ,int ,struct dpni_link_cfg*) ;

__attribute__((used)) static int FUNC_3(struct dpaa2_eth_priv *VAR_2)
{
 struct device *VAR_3 = VAR_2->net_dev->dev.parent;
 struct dpni_link_cfg VAR_4 = {0};
 int VAR_5;


 VAR_5 = FUNC_1(VAR_2->mc_io, 0, VAR_2->mc_token, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3, "dpni_get_link_cfg() failed\n");
  return VAR_5;
 }


 VAR_4.options |= VAR_1;
 VAR_4.options &= ~VAR_0;
 VAR_5 = FUNC_2(VAR_2->mc_io, 0, VAR_2->mc_token, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3, "dpni_set_link_cfg() failed\n");
  return VAR_5;
 }

 VAR_2->link_state.options = VAR_4.options;

 return 0;
}
