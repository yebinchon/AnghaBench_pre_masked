
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int min_timeout; int max_timeout; unsigned int timeout; struct device* parent; int * ops; int * info; } ;
struct ftwdt010_wdt {int has_irq; TYPE_1__ wdd; scalar_t__ base; struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*) ;
 struct ftwdt010_wdt* FUNC_3 (struct device*,int,int ) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct device*,int,int ,int ,char*,struct ftwdt010_wdt*) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,struct ftwdt010_wdt*) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int ,struct device*) ;
 int FUNC_11 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct ftwdt010_wdt *VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_3(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->base = FUNC_4(VAR_8, 0);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->dev = VAR_9;
 VAR_10->wdd.info = &VAR_5;
 VAR_10->wdd.ops = &VAR_7;
 VAR_10->wdd.min_timeout = 1;
 VAR_10->wdd.max_timeout = 0xFFFFFFFF / VAR_4;
 VAR_10->wdd.parent = VAR_9;





 VAR_10->wdd.timeout = 13U;
 FUNC_10(&VAR_10->wdd, 0, VAR_9);

 VAR_11 = FUNC_9(VAR_10->base + VAR_1);
 if (VAR_11 & VAR_3) {

  VAR_11 &= ~VAR_3;
  FUNC_11(VAR_11, VAR_10->base + VAR_1);
 }

 VAR_12 = FUNC_7(VAR_8, 0);
 if (VAR_12) {
  VAR_13 = FUNC_5(VAR_9, VAR_12, VAR_6, 0,
           "watchdog bark", VAR_10);
  if (VAR_13)
   return VAR_13;
  VAR_10->has_irq = 1;
 }

 VAR_13 = FUNC_6(VAR_9, &VAR_10->wdd);
 if (VAR_13)
  return VAR_13;


 FUNC_8(VAR_8, VAR_10);
 FUNC_2(VAR_9, "FTWDT010 watchdog driver enabled\n");

 return 0;
}
