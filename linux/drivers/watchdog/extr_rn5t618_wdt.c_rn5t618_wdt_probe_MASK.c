
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int min_timeout; int max_timeout; int timeout; struct device* parent; int * ops; int * info; } ;
struct rn5t618_wdt {TYPE_1__ wdt_dev; struct rn5t618* rn5t618; } ;
struct rn5t618 {int dummy; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_8__ {int time; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rn5t618* FUNC_1 (int ) ;
 struct rn5t618_wdt* FUNC_2 (struct device*,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,struct rn5t618_wdt*) ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,struct device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct rn5t618_wdt*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct rn5t618 *VAR_9 = FUNC_1(VAR_8->parent);
 struct rn5t618_wdt *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_8, sizeof(struct rn5t618_wdt), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = VAR_4[0].time;
 VAR_12 = VAR_4[FUNC_0(VAR_4) - 1].time;

 VAR_10->rn5t618 = VAR_9;
 VAR_10->wdt_dev.info = &VAR_3;
 VAR_10->wdt_dev.ops = &VAR_5;
 VAR_10->wdt_dev.min_timeout = VAR_11;
 VAR_10->wdt_dev.max_timeout = VAR_12;
 VAR_10->wdt_dev.timeout = VAR_12;
 VAR_10->wdt_dev.parent = VAR_8;

 FUNC_6(&VAR_10->wdt_dev, VAR_10);
 FUNC_4(&VAR_10->wdt_dev, VAR_6, VAR_8);
 FUNC_7(&VAR_10->wdt_dev, VAR_2);

 FUNC_3(VAR_7, VAR_10);

 return FUNC_5(&VAR_10->wdt_dev);
}
