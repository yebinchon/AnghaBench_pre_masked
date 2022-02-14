
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; int name; } ;
struct cec_gpio {TYPE_1__* adap; void* v5_irq; TYPE_1__* v5_gpio; void* hpd_irq; TYPE_1__* hpd_gpio; void* cec_irq; TYPE_1__* cec_gpio; struct device* dev; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* FUNC_4 (int *,struct cec_gpio*,int ,int) ;
 int FUNC_5 (TYPE_1__*,struct device*) ;
 TYPE_1__* FUNC_6 (struct device*,char*,int ) ;
 void* FUNC_7 (struct device*,char*,int ) ;
 struct cec_gpio* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,void*,int ,int,int ,struct cec_gpio*) ;
 int FUNC_10 (struct device*,void*,int ,int ,int,char*,struct cec_gpio*) ;
 void* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct platform_device*,struct cec_gpio*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct cec_gpio *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_8(VAR_18, sizeof(*VAR_19), VAR_5);
 if (!VAR_19)
  return -VAR_4;

 VAR_19->dev = VAR_18;

 VAR_19->cec_gpio = FUNC_6(VAR_18, "cec", VAR_7);
 if (FUNC_0(VAR_19->cec_gpio))
  return FUNC_1(VAR_19->cec_gpio);
 VAR_19->cec_irq = FUNC_11(VAR_19->cec_gpio);

 VAR_19->hpd_gpio = FUNC_7(VAR_18, "hpd", VAR_6);
 if (FUNC_0(VAR_19->hpd_gpio))
  return FUNC_1(VAR_19->hpd_gpio);

 VAR_19->v5_gpio = FUNC_7(VAR_18, "v5", VAR_6);
 if (FUNC_0(VAR_19->v5_gpio))
  return FUNC_1(VAR_19->v5_gpio);

 VAR_19->adap = FUNC_4(&VAR_14,
  VAR_19, VAR_17->name, VAR_0 | VAR_3 |
     VAR_1 | VAR_2);
 if (FUNC_0(VAR_19->adap))
  return FUNC_1(VAR_19->adap);

 VAR_20 = FUNC_9(VAR_18, VAR_19->cec_irq, VAR_13,
          VAR_10 | VAR_9,
          VAR_19->adap->name, VAR_19);
 if (VAR_20)
  return VAR_20;

 FUNC_3(VAR_19->adap);

 if (VAR_19->hpd_gpio) {
  VAR_19->hpd_irq = FUNC_11(VAR_19->hpd_gpio);
  VAR_20 = FUNC_10(VAR_18, VAR_19->hpd_irq,
   VAR_15,
   VAR_16,
   VAR_8 |
   VAR_9 | VAR_10,
   "hpd-gpio", VAR_19);
  if (VAR_20)
   return VAR_20;
 }

 if (VAR_19->v5_gpio) {
  VAR_19->v5_irq = FUNC_11(VAR_19->v5_gpio);
  VAR_20 = FUNC_10(VAR_18, VAR_19->v5_irq,
   VAR_11,
   VAR_12,
   VAR_8 |
   VAR_9 | VAR_10,
   "v5-gpio", VAR_19);
  if (VAR_20)
   return VAR_20;
 }

 VAR_20 = FUNC_5(VAR_19->adap, &VAR_17->dev);
 if (VAR_20) {
  FUNC_2(VAR_19->adap);
  return VAR_20;
 }

 FUNC_12(VAR_17, VAR_19);
 return 0;
}
