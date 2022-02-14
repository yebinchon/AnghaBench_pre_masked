
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hwq {int irqpoll; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxlflash_cfg {struct afu* afu; TYPE_1__* dev; } ;
struct afu {int irqpoll_weight; int num_hwqs; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct device dev; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct afu*) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*) ;
 struct hwq* FUNC_3 (struct afu*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (char const*,int,int*) ;
 struct cxlflash_cfg* FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct cxlflash_cfg *VAR_6 = FUNC_7(FUNC_1(VAR_2));
 struct device *VAR_7 = &VAR_6->dev->dev;
 struct afu *VAR_8 = VAR_6->afu;
 struct hwq *VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_6(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return -VAR_0;

 if (VAR_10 > 256) {
  FUNC_2(VAR_7,
    "Invalid IRQ poll weight. It must be 256 or less.\n");
  return -VAR_0;
 }

 if (VAR_10 == VAR_8->irqpoll_weight) {
  FUNC_2(VAR_7,
    "Current IRQ poll weight has the same weight.\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_8)) {
  for (VAR_12 = 0; VAR_12 < VAR_8->num_hwqs; VAR_12++) {
   VAR_9 = FUNC_3(VAR_8, VAR_12);

   FUNC_4(&VAR_9->irqpoll);
  }
 }

 VAR_8->irqpoll_weight = VAR_10;

 if (VAR_10 > 0) {
  for (VAR_12 = 0; VAR_12 < VAR_8->num_hwqs; VAR_12++) {
   VAR_9 = FUNC_3(VAR_8, VAR_12);

   FUNC_5(&VAR_9->irqpoll, VAR_10, VAR_1);
  }
 }

 return VAR_5;
}
