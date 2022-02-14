
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct mxs_data* data; } ;
struct mxs_ocotp {int clk; int nvmem; int base; } ;
struct mxs_data {int size; } ;
struct TYPE_5__ {struct device* dev; struct mxs_ocotp* priv; int size; } ;
struct TYPE_4__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,int *) ;
 struct mxs_ocotp* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,TYPE_2__*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 TYPE_2__ VAR_3 ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 int FUNC_10 (struct platform_device*,struct mxs_ocotp*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 const struct mxs_data *VAR_6;
 struct mxs_ocotp *VAR_7;
 const struct of_device_id *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(VAR_5->driver->of_match_table, VAR_5);
 if (!VAR_8 || !VAR_8->data)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_5, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->base = FUNC_8(VAR_4, 0);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 VAR_9 = FUNC_2(VAR_7->clk);
 if (VAR_9 < 0) {
  FUNC_4(VAR_5, "failed to prepare clk: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_6 = VAR_8->data;

 VAR_3.size = VAR_6->size;
 VAR_3.priv = VAR_7;
 VAR_3.dev = VAR_5;
 VAR_7->nvmem = FUNC_7(VAR_5, &VAR_3);
 if (FUNC_0(VAR_7->nvmem)) {
  VAR_9 = FUNC_1(VAR_7->nvmem);
  goto err_clk;
 }

 FUNC_10(VAR_4, VAR_7);

 return 0;

err_clk:
 FUNC_3(VAR_7->clk);

 return VAR_9;
}
