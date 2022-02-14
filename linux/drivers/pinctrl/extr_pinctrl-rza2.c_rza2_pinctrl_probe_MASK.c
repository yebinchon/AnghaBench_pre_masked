
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int npins; int owner; int * pmxops; int * pctlops; int name; } ;
struct rza2_pinctrl_priv {int npins; TYPE_1__ desc; int base; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,struct resource*) ;
 struct rza2_pinctrl_priv* FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct rza2_pinctrl_priv*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct rza2_pinctrl_priv*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 struct rza2_pinctrl_priv *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = &VAR_9->dev;

 VAR_11 = FUNC_6(VAR_9, VAR_3, 0);
 VAR_10->base = FUNC_3(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 FUNC_7(VAR_9, VAR_10);

 VAR_10->npins = (int)(uintptr_t)FUNC_5(&VAR_9->dev) *
        VAR_4;

 VAR_10->desc.name = VAR_0;
 VAR_10->desc.pctlops = &VAR_7;
 VAR_10->desc.pmxops = &VAR_8;
 VAR_10->desc.owner = VAR_5;

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_2(&VAR_9->dev, "Registered ports P0 - P%c\n",
   VAR_6[VAR_10->desc.npins / VAR_4 - 1]);

 return 0;
}
