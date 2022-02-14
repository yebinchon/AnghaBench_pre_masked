
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ocotp_priv {TYPE_2__* config; TYPE_1__* params; int clk; int base; struct device* dev; } ;
struct nvmem_device {int dummy; } ;
struct TYPE_5__ {int size; struct ocotp_priv* priv; struct device* dev; } ;
struct TYPE_4__ {int nregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (struct device*,int *) ;
 struct ocotp_priv* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,TYPE_2__*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct ocotp_priv *VAR_5;
 struct nvmem_device *VAR_6;

 VAR_5 = FUNC_4(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = VAR_4;

 VAR_5->base = FUNC_6(VAR_3, 0);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_3(VAR_4, ((void*)0));
 if (FUNC_0(VAR_5->clk))
  return FUNC_1(VAR_5->clk);

 VAR_5->params = FUNC_7(&VAR_3->dev);
 VAR_2.size = 4 * VAR_5->params->nregs;
 VAR_2.dev = VAR_4;
 VAR_2.priv = VAR_5;
 VAR_5->config = &VAR_2;
 VAR_6 = FUNC_5(VAR_4, &VAR_2);


 return FUNC_2(VAR_6);
}
