
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int min_timeout; int max_timeout; int max_hw_heartbeat_ms; int timeout; int * ops; int * info; struct device* parent; } ;
struct tqmx86_wdt {TYPE_1__ wdd; int io_base; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int ,int ) ;
 struct tqmx86_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct resource*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,struct device*) ;
 int FUNC_8 (TYPE_1__*,struct tqmx86_wdt*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct tqmx86_wdt *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_9, VAR_3, 0);
 if (!VAR_12)
  return -VAR_0;

 VAR_11->io_base = FUNC_1(VAR_10, VAR_12->start, FUNC_5(VAR_12));
 if (!VAR_11->io_base)
  return -VAR_1;

 FUNC_8(&VAR_11->wdd, VAR_11);

 VAR_11->wdd.parent = VAR_10;
 VAR_11->wdd.info = &VAR_7;
 VAR_11->wdd.ops = &VAR_8;
 VAR_11->wdd.min_timeout = 1;
 VAR_11->wdd.max_timeout = 4096;
 VAR_11->wdd.max_hw_heartbeat_ms = 4096*1000;
 VAR_11->wdd.timeout = VAR_5;

 FUNC_7(&VAR_11->wdd, VAR_6, VAR_10);
 FUNC_9(&VAR_11->wdd, VAR_4);

 FUNC_6(&VAR_11->wdd, VAR_11->wdd.timeout);

 VAR_13 = FUNC_3(VAR_10, &VAR_11->wdd);
 if (VAR_13)
  return VAR_13;

 FUNC_0(VAR_10, "TQMx86 watchdog\n");

 return 0;
}
