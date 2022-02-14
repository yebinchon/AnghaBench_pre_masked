
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {TYPE_1__* id_entry; struct device dev; } ;
struct TYPE_8__ {int * ops; int * info; int timeout; struct device* parent; } ;
struct max63xx_wdt {TYPE_5__* timeout; TYPE_2__ wdd; } ;
struct max63xx_timeout {int dummy; } ;
struct TYPE_9__ {int tdelay; int twd; } ;
struct TYPE_7__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 struct max63xx_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_4 (struct platform_device*,struct max63xx_wdt*) ;
 TYPE_5__* FUNC_5 (struct max63xx_timeout*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct platform_device*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct max63xx_wdt*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct max63xx_wdt *VAR_11;
 struct max63xx_timeout *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = (struct max63xx_timeout *)VAR_9->id_entry->driver_data;

 if (VAR_5 < 1 || VAR_5 > VAR_4)
  VAR_5 = VAR_0;

 VAR_11->timeout = FUNC_5(VAR_12, VAR_5);
 if (!VAR_11->timeout) {
  FUNC_0(VAR_10, "unable to satisfy %ds heartbeat request\n",
   VAR_5);
  return -VAR_1;
 }

 VAR_13 = FUNC_4(VAR_9, VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_6(VAR_9, &VAR_11->wdd);
 FUNC_7(&VAR_11->wdd, VAR_11);

 VAR_11->wdd.parent = VAR_10;
 VAR_11->wdd.timeout = VAR_11->timeout->twd;
 VAR_11->wdd.info = &VAR_6;
 VAR_11->wdd.ops = &VAR_7;

 FUNC_8(&VAR_11->wdd, VAR_8);

 VAR_13 = FUNC_3(VAR_10, &VAR_11->wdd);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_10, "using %ds heartbeat with %ds initial delay\n",
   VAR_11->timeout->twd, VAR_11->timeout->tdelay);
 return 0;
}
