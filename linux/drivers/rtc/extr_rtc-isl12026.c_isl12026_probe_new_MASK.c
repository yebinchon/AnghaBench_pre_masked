
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nvmem_config {char* name; int stride; int word_size; int size; struct isl12026* priv; int reg_write; int reg_read; int * base_dev; } ;
struct isl12026 {TYPE_1__* rtc; int nvm_client; } ;
struct i2c_client {int dev; int adapter; } ;
struct TYPE_5__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 struct isl12026* FUNC_3 (int *,int,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct isl12026*) ;
 int FUNC_8 (struct i2c_client*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_8)
{
 struct isl12026 *VAR_9;
 int VAR_10;
 struct nvmem_config VAR_11 = {
  .name = "isl12026-",
  .base_dev = &VAR_8->dev,
  .stride = 1,
  .word_size = 1,
  .size = 512,
  .reg_read = VAR_5,
  .reg_write = VAR_6,
 };

 if (!FUNC_5(VAR_8->adapter, VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_3(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_8, VAR_9);

 FUNC_8(VAR_8);

 VAR_9->nvm_client = FUNC_6(VAR_8->adapter, VAR_4);
 if (FUNC_0(VAR_9->nvm_client))
  return FUNC_1(VAR_9->nvm_client);

 VAR_9->rtc = FUNC_4(&VAR_8->dev);
 VAR_10 = FUNC_2(VAR_9->rtc);
 if (VAR_10)
  return VAR_10;

 VAR_9->rtc->ops = &VAR_7;
 VAR_11.priv = VAR_9;
 VAR_10 = FUNC_9(VAR_9->rtc, &VAR_11);
 if (VAR_10)
  return VAR_10;

 return FUNC_10(VAR_9->rtc);
}
