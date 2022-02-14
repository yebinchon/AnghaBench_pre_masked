
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ security; scalar_t__ override; } ;
struct tegra_mc_client {int name; TYPE_1__ regs; int sid; } ;
struct tegra_mc {scalar_t__ regs; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 unsigned int FUNC_0 (struct tegra_mc_client*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,int ,int ,...) ;
 scalar_t__ FUNC_4 (int *,struct resource*) ;
 struct tegra_mc* FUNC_5 (int *,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct tegra_mc*) ;
 int FUNC_8 (scalar_t__) ;
 struct tegra_mc_client* VAR_3 ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct resource *VAR_5;
 struct tegra_mc *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_5(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_6->regs = FUNC_4(&VAR_4->dev, VAR_5);
 if (FUNC_1(VAR_6->regs))
  return FUNC_2(VAR_6->regs);

 VAR_6->dev = &VAR_4->dev;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  const struct tegra_mc_client *VAR_9 = &VAR_3[VAR_7];
  u32 VAR_10, VAR_11;

  VAR_10 = FUNC_8(VAR_6->regs + VAR_9->regs.override);
  VAR_11 = FUNC_8(VAR_6->regs + VAR_9->regs.security);

  FUNC_3(&VAR_4->dev, "client %s: override: %x security: %x\n",
   VAR_9->name, VAR_10, VAR_11);

  FUNC_3(&VAR_4->dev, "setting SID %u for %s\n", VAR_9->sid,
   VAR_9->name);
  FUNC_9(VAR_9->sid, VAR_6->regs + VAR_9->regs.override);

  VAR_10 = FUNC_8(VAR_6->regs + VAR_9->regs.override);
  VAR_11 = FUNC_8(VAR_6->regs + VAR_9->regs.security);

  FUNC_3(&VAR_4->dev, "client %s: override: %x security: %x\n",
   VAR_9->name, VAR_10, VAR_11);
 }

 FUNC_7(VAR_4, VAR_6);

 return VAR_8;
}
