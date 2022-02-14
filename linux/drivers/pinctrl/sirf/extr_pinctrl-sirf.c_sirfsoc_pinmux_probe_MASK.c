
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sirfsoc_pmx {int gpio_virtbase; int rsc_virtbase; int pmx; TYPE_3__* dev; } ;
struct sirfsoc_pinctrl_data {int pads_cnt; int pads; int funcs_cnt; int funcs; int grps_cnt; int grps; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {struct sirfsoc_pinctrl_data* data; } ;
struct TYPE_8__ {int npins; int pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct sirfsoc_pmx* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device_node*,int ) ;
 TYPE_4__* FUNC_7 (int ,struct device_node*) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,struct sirfsoc_pmx*) ;
 int VAR_2 ;
 int FUNC_9 (struct platform_device*,struct sirfsoc_pmx*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 int VAR_9;
 struct sirfsoc_pmx *VAR_10;
 struct device_node *VAR_11 = VAR_8->dev.of_node;
 const struct sirfsoc_pinctrl_data *VAR_12;


 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = &VAR_8->dev;

 FUNC_9(VAR_8, VAR_10);

 VAR_10->gpio_virtbase = FUNC_6(VAR_11, 0);
 if (!VAR_10->gpio_virtbase) {
  FUNC_2(&VAR_8->dev, "can't map gpio registers\n");
  return -VAR_0;
 }

 VAR_10->rsc_virtbase = FUNC_10();
 if (!VAR_10->rsc_virtbase) {
  VAR_9 = -VAR_0;
  FUNC_2(&VAR_8->dev, "can't map rsc registers\n");
  goto out_no_rsc_remap;
 }

 VAR_12 = FUNC_7(VAR_2, VAR_11)->data;
 VAR_3 = VAR_12->grps;
 VAR_4 = VAR_12->grps_cnt;
 VAR_6 = VAR_12->funcs;
 VAR_7 = VAR_12->funcs_cnt;
 VAR_5.pins = VAR_12->pads;
 VAR_5.npins = VAR_12->pads_cnt;



 VAR_10->pmx = FUNC_8(&VAR_5, &VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_10->pmx)) {
  FUNC_2(&VAR_8->dev, "could not register SIRFSOC pinmux driver\n");
  VAR_9 = FUNC_1(VAR_10->pmx);
  goto out_no_pmx;
 }

 FUNC_3(&VAR_8->dev, "initialized SIRFSOC pinmux driver\n");

 return 0;

out_no_pmx:
 FUNC_5(VAR_10->rsc_virtbase);
out_no_rsc_remap:
 FUNC_5(VAR_10->gpio_virtbase);
 return VAR_9;
}
