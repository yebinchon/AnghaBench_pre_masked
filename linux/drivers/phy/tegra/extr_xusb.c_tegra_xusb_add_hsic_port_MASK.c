
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tegra_xusb_padctl {int ports; TYPE_3__* soc; int dev; } ;
struct TYPE_12__ {int list; int lane; TYPE_4__* ops; } ;
struct tegra_xusb_hsic_port {TYPE_5__ base; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {int (* map ) (TYPE_5__*) ;} ;
struct TYPE_8__ {TYPE_4__* ops; } ;
struct TYPE_9__ {TYPE_1__ hsic; } ;
struct TYPE_10__ {TYPE_2__ ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tegra_xusb_hsic_port* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (TYPE_5__*) ;
 struct device_node* FUNC_7 (struct tegra_xusb_padctl*,char*,unsigned int) ;
 int FUNC_8 (struct tegra_xusb_hsic_port*) ;
 int FUNC_9 (TYPE_5__*,struct tegra_xusb_padctl*,struct device_node*,char*,unsigned int) ;
 int FUNC_10 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_11(struct tegra_xusb_padctl *VAR_2,
        unsigned int VAR_3)
{
 struct tegra_xusb_hsic_port *VAR_4;
 struct device_node *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_7(VAR_2, "hsic", VAR_3);
 if (!VAR_5 || !FUNC_4(VAR_5))
  goto out;

 VAR_4 = FUNC_2(VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_9(&VAR_4->base, VAR_2, VAR_5, "hsic", VAR_3);
 if (VAR_6 < 0)
  goto out;

 VAR_4->base.ops = VAR_2->soc->ports.hsic.ops;

 VAR_4->base.lane = VAR_4->base.ops->map(&VAR_4->base);
 if (FUNC_0(VAR_4->base.lane)) {
  VAR_6 = FUNC_1(VAR_4->base.lane);
  goto out;
 }

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6 < 0) {
  FUNC_10(&VAR_4->base);
  goto out;
 }

 FUNC_3(&VAR_4->base.list, &VAR_2->ports);

out:
 FUNC_5(VAR_5);
 return VAR_6;
}
