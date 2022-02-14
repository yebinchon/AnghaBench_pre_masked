
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* name; int word_size; int stride; int read_only; int reg_write; int reg_read; int size; int owner; struct stm32_romem_priv* priv; struct device* dev; } ;
struct stm32_romem_priv {TYPE_3__ cfg; int base; } ;
struct stm32_romem_cfg {int size; } ;
struct resource {int dummy; } ;
struct device {TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct stm32_romem_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,TYPE_3__*) ;
 TYPE_2__* FUNC_6 (int ,struct device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct resource*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 const struct stm32_romem_cfg *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct stm32_romem_priv *VAR_10;
 struct resource *VAR_11;

 VAR_10 = FUNC_4(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_7, VAR_2, 0);
 VAR_10->base = FUNC_3(VAR_9, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->cfg.name = "stm32-romem";
 VAR_10->cfg.word_size = 1;
 VAR_10->cfg.stride = 1;
 VAR_10->cfg.dev = VAR_9;
 VAR_10->cfg.priv = VAR_10;
 VAR_10->cfg.owner = VAR_3;

 VAR_8 = (const struct stm32_romem_cfg *)
  FUNC_6(VAR_9->driver->of_match_table, VAR_9)->data;
 if (!VAR_8) {
  VAR_10->cfg.read_only = 1;
  VAR_10->cfg.size = FUNC_8(VAR_11);
  VAR_10->cfg.reg_read = VAR_6;
 } else {
  VAR_10->cfg.size = VAR_8->size;
  VAR_10->cfg.reg_read = VAR_4;
  VAR_10->cfg.reg_write = VAR_5;
 }

 return FUNC_2(FUNC_5(VAR_9, &VAR_10->cfg));
}
