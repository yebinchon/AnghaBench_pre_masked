
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct imx_iim_drvdata* data; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {char* name; int read_only; int word_size; int stride; struct iim_priv* priv; int size; struct device* dev; int reg_read; } ;
struct imx_iim_drvdata {int nregs; } ;
struct iim_priv {int clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (struct device*,int *) ;
 struct iim_priv* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,struct nvmem_config*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct of_device_id* FUNC_7 (int ,struct device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 const struct of_device_id *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct iim_priv *VAR_8;
 struct nvmem_device *VAR_9;
 struct nvmem_config VAR_10 = {};
 const struct imx_iim_drvdata *VAR_11 = ((void*)0);

 VAR_8 = FUNC_4(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->base = FUNC_6(VAR_5, 0);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_6 = FUNC_7(VAR_3, VAR_7);
 if (!VAR_6)
  return -VAR_0;

 VAR_11 = VAR_6->data;

 VAR_8->clk = FUNC_3(VAR_7, ((void*)0));
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_10.name = "imx-iim",
 VAR_10.read_only = 1,
 VAR_10.word_size = 1,
 VAR_10.stride = 1,
 VAR_10.reg_read = VAR_4,
 VAR_10.dev = VAR_7;
 VAR_10.size = VAR_11->nregs;
 VAR_10.priv = VAR_8;

 VAR_9 = FUNC_5(VAR_7, &VAR_10);

 return FUNC_2(VAR_9);
}
