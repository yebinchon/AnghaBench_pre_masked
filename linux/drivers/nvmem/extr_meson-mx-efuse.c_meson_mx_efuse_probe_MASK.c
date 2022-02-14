
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct meson_mx_efuse_platform_data {int word_size; int name; } ;
struct TYPE_2__ {int read_only; int reg_read; int size; int word_size; int stride; struct meson_mx_efuse* priv; int * dev; int owner; int name; } ;
struct meson_mx_efuse {int nvmem; TYPE_1__ config; int core_clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct resource*) ;
 int FUNC_6 (int *,int ,int ) ;
 struct meson_mx_efuse* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int VAR_6 ;
 struct meson_mx_efuse_platform_data* FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 const struct meson_mx_efuse_platform_data *VAR_8;
 struct meson_mx_efuse *VAR_9;
 struct resource *VAR_10;

 VAR_8 = FUNC_9(&VAR_7->dev);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_10(VAR_7, VAR_3, 0);
 VAR_9->base = FUNC_5(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->config.name = FUNC_6(&VAR_7->dev, VAR_8->name,
       VAR_2);
 VAR_9->config.owner = VAR_5;
 VAR_9->config.dev = &VAR_7->dev;
 VAR_9->config.priv = VAR_9;
 VAR_9->config.stride = VAR_8->word_size;
 VAR_9->config.word_size = VAR_8->word_size;
 VAR_9->config.size = VAR_4;
 VAR_9->config.read_only = 1;
 VAR_9->config.reg_read = VAR_6;

 VAR_9->core_clk = FUNC_4(&VAR_7->dev, "core");
 if (FUNC_0(VAR_9->core_clk)) {
  FUNC_3(&VAR_7->dev, "Failed to get core clock\n");
  return FUNC_1(VAR_9->core_clk);
 }

 VAR_9->nvmem = FUNC_8(&VAR_7->dev, &VAR_9->config);

 return FUNC_2(VAR_9->nvmem);
}
