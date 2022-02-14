
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {struct device* parent; int status; int timeout; int min_hw_heartbeat_ms; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct da9062_watchdog {TYPE_1__ wdtdev; struct da9062* hw; } ;
struct da9062 {int dummy; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 struct da9062* FUNC_1 (int ) ;
 struct da9062_watchdog* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct da9062_watchdog*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 int VAR_12;
 struct da9062 *VAR_13;
 struct da9062_watchdog *VAR_14;

 VAR_13 = FUNC_1(VAR_11->parent);
 if (!VAR_13)
  return -VAR_4;

 VAR_14 = FUNC_2(VAR_11, sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_5;

 VAR_14->hw = VAR_13;

 VAR_14->wdtdev.info = &VAR_8;
 VAR_14->wdtdev.ops = &VAR_9;
 VAR_14->wdtdev.min_timeout = VAR_3;
 VAR_14->wdtdev.max_timeout = VAR_2;
 VAR_14->wdtdev.min_hw_heartbeat_ms = VAR_0;
 VAR_14->wdtdev.timeout = VAR_1;
 VAR_14->wdtdev.status = VAR_7;
 VAR_14->wdtdev.parent = VAR_11;

 FUNC_5(&VAR_14->wdtdev, 128);

 FUNC_4(&VAR_14->wdtdev, VAR_14);

 VAR_12 = FUNC_3(VAR_11, &VAR_14->wdtdev);
 if (VAR_12 < 0)
  return VAR_12;

 return FUNC_0(&VAR_14->wdtdev);
}
