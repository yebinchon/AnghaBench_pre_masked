
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct TYPE_7__ {int active_low; TYPE_3__ rcdev; int lock; int membase; } ;
struct uniphier_glue_reset_priv {TYPE_4__* clk; TYPE_2__* data; int * rst; TYPE_1__ rdata; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
typedef int resource_size_t ;
struct TYPE_10__ {int id; } ;
struct TYPE_8__ {int nclks; int nrsts; char** reset_names; int * clock_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_4__*) ;
 int FUNC_4 (int,TYPE_4__*) ;
 int FUNC_5 (struct device*,int,TYPE_4__*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct uniphier_glue_reset_priv* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,char const*) ;
 int FUNC_9 (struct device*,TYPE_3__*) ;
 TYPE_2__* FUNC_10 (struct device*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct uniphier_glue_reset_priv*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_8 ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct uniphier_glue_reset_priv *VAR_11;
 struct resource *VAR_12;
 resource_size_t VAR_13;
 const char *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_11 = FUNC_7(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->data = FUNC_10(VAR_10);
 if (FUNC_2(!VAR_11->data || VAR_11->data->nclks > VAR_5 ||
      VAR_11->data->nrsts > VAR_6))
  return -VAR_1;

 VAR_12 = FUNC_11(VAR_9, VAR_4, 0);
 VAR_13 = FUNC_15(VAR_12);
 VAR_11->rdata.membase = FUNC_6(VAR_10, VAR_12);
 if (FUNC_0(VAR_11->rdata.membase))
  return FUNC_1(VAR_11->rdata.membase);

 for (VAR_15 = 0; VAR_15 < VAR_11->data->nclks; VAR_15++)
  VAR_11->clk[VAR_15].id = VAR_11->data->clock_names[VAR_15];
 VAR_16 = FUNC_5(VAR_10, VAR_11->data->nclks, VAR_11->clk);
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_11->data->nrsts; VAR_15++) {
  VAR_14 = VAR_11->data->reset_names[VAR_15];
  VAR_11->rst[VAR_15] = FUNC_8(VAR_10, VAR_14);
  if (FUNC_0(VAR_11->rst[VAR_15]))
   return FUNC_1(VAR_11->rst[VAR_15]);
 }

 VAR_16 = FUNC_4(VAR_11->data->nclks, VAR_11->clk);
 if (VAR_16)
  return VAR_16;

 for (VAR_17 = 0; VAR_17 < VAR_11->data->nrsts; VAR_17++) {
  VAR_16 = FUNC_14(VAR_11->rst[VAR_17]);
  if (VAR_16)
   goto out_rst_assert;
 }

 FUNC_16(&VAR_11->rdata.lock);
 VAR_11->rdata.rcdev.owner = VAR_7;
 VAR_11->rdata.rcdev.nr_resets = VAR_13 * VAR_0;
 VAR_11->rdata.rcdev.ops = &VAR_8;
 VAR_11->rdata.rcdev.of_node = VAR_10->of_node;
 VAR_11->rdata.active_low = 1;

 FUNC_12(VAR_9, VAR_11);

 VAR_16 = FUNC_9(VAR_10, &VAR_11->rdata.rcdev);
 if (VAR_16)
  goto out_rst_assert;

 return 0;

out_rst_assert:
 while (VAR_17--)
  FUNC_13(VAR_11->rst[VAR_17]);

 FUNC_3(VAR_11->data->nclks, VAR_11->clk);

 return VAR_16;
}
