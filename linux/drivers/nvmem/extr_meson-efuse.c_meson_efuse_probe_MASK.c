
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {int stride; int word_size; unsigned int size; int reg_write; int reg_read; int name; struct device* dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct nvmem_device*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,void (*) (void*),struct clk*) ;
 struct clk* FUNC_7 (struct device*,int *) ;
 struct nvmem_config* FUNC_8 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_9 (struct device*,struct nvmem_config*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ,unsigned int*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct nvmem_device *VAR_10;
 struct nvmem_config *VAR_11;
 struct clk *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_7(VAR_9, ((void*)0));
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  if (VAR_14 != -VAR_2)
   FUNC_4(VAR_9, "failed to get efuse gate");
  return VAR_14;
 }

 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14) {
  FUNC_4(VAR_9, "failed to enable gate");
  return VAR_14;
 }

 VAR_14 = FUNC_6(VAR_9,
           (void(*)(void *))VAR_5,
           VAR_12);
 if (VAR_14) {
  FUNC_4(VAR_9, "failed to add disable callback");
  return VAR_14;
 }

 if (FUNC_10(VAR_4, &VAR_13, 0, 0, 0, 0, 0) < 0) {
  FUNC_4(VAR_9, "failed to get max user");
  return -VAR_0;
 }

 VAR_11 = FUNC_8(VAR_9, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->dev = VAR_9;
 VAR_11->name = FUNC_5(VAR_9);
 VAR_11->stride = 1;
 VAR_11->word_size = 1;
 VAR_11->reg_read = VAR_6;
 VAR_11->reg_write = VAR_7;
 VAR_11->size = VAR_13;

 VAR_10 = FUNC_9(&VAR_8->dev, VAR_11);

 return FUNC_2(VAR_10);
}
