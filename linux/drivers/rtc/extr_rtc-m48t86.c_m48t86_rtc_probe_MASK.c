
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct nvmem_config {char* name; int word_size; int stride; int * priv; int reg_write; int reg_read; int size; } ;
struct m48t86_rtc_info {TYPE_1__* rtc; TYPE_1__* data_reg; TYPE_1__* index_reg; } ;
struct TYPE_6__ {int nvram_old_abi; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct m48t86_rtc_info*) ;
 void* FUNC_4 (int *,struct resource*) ;
 struct m48t86_rtc_info* FUNC_5 (int *,int,int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char FUNC_7 (int *,int ) ;
 int VAR_9 ;
 int FUNC_8 (struct platform_device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 struct m48t86_rtc_info *VAR_11;
 struct resource *VAR_12;
 unsigned char VAR_13;
 int VAR_14;
 struct nvmem_config VAR_15 = {
  .name = "m48t86_nvram",
  .word_size = 1,
  .stride = 1,
  .size = VAR_6,
  .reg_read = VAR_7,
  .reg_write = VAR_8,
  .priv = &VAR_10->dev,
 };

 VAR_11 = FUNC_5(&VAR_10->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_9(VAR_10, VAR_3, 0);
 if (!VAR_12)
  return -VAR_0;
 VAR_11->index_reg = FUNC_4(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->index_reg))
  return FUNC_1(VAR_11->index_reg);

 VAR_12 = FUNC_9(VAR_10, VAR_3, 1);
 if (!VAR_12)
  return -VAR_0;
 VAR_11->data_reg = FUNC_4(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->data_reg))
  return FUNC_1(VAR_11->data_reg);

 FUNC_3(&VAR_10->dev, VAR_11);

 if (!FUNC_8(VAR_10)) {
  FUNC_2(&VAR_10->dev, "RTC not present\n");
  return -VAR_0;
 }

 VAR_11->rtc = FUNC_6(&VAR_10->dev);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);

 VAR_11->rtc->ops = &VAR_9;
 VAR_11->rtc->nvram_old_abi = 1;

 VAR_14 = FUNC_11(VAR_11->rtc);
 if (VAR_14)
  return VAR_14;

 FUNC_10(VAR_11->rtc, &VAR_15);


 VAR_13 = FUNC_7(&VAR_10->dev, VAR_4);
 FUNC_2(&VAR_10->dev, "battery %s\n",
   (VAR_13 & VAR_5) ? "ok" : "exhausted");

 return 0;
}
