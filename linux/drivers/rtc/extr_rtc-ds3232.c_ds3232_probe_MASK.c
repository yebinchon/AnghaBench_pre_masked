
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nvmem_config {char* name; int stride; int word_size; int type; struct regmap* priv; int reg_write; int reg_read; int size; } ;
struct ds3232 {int irq; int rtc; struct device* dev; struct regmap* regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct ds3232*) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,int ) ;
 struct ds3232* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int *,int ,int,char const*,struct device*) ;
 int FUNC_8 (struct device*,char const*,int *,int ) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,struct nvmem_config*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_11, struct regmap *VAR_12, int VAR_13,
   const char *VAR_14)
{
 struct ds3232 *VAR_15;
 int VAR_16;
 struct nvmem_config VAR_17 = {
  .name = "ds3232_sram",
  .stride = 1,
  .size = VAR_0,
  .word_size = 1,
  .reg_read = VAR_8,
  .reg_write = VAR_9,
  .priv = VAR_12,
  .type = VAR_5
 };

 VAR_15 = FUNC_6(VAR_11, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->regmap = VAR_12;
 VAR_15->irq = VAR_13;
 VAR_15->dev = VAR_11;
 FUNC_3(VAR_11, VAR_15);

 VAR_16 = FUNC_9(VAR_11);
 if (VAR_16)
  return VAR_16;

 if (VAR_15->irq > 0)
  FUNC_4(VAR_11, 1);

 FUNC_10(VAR_11, VAR_14);

 VAR_15->rtc = FUNC_8(VAR_11, VAR_14, &VAR_10,
      VAR_6);
 if (FUNC_0(VAR_15->rtc))
  return FUNC_1(VAR_15->rtc);

 VAR_16 = FUNC_11(VAR_15->rtc, &VAR_17);
 if(VAR_16)
  return VAR_16;

 if (VAR_15->irq > 0) {
  VAR_16 = FUNC_7(VAR_11, VAR_15->irq, ((void*)0),
      VAR_7,
      VAR_4 | VAR_3,
      VAR_14, VAR_11);
  if (VAR_16) {
   FUNC_5(VAR_11, 0);
   VAR_15->irq = 0;
   FUNC_2(VAR_11, "unable to request IRQ\n");
  }
 }

 return 0;
}
