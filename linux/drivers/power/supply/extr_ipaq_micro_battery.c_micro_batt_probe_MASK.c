
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct micro_battery {int wq; int update; int micro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 struct micro_battery* FUNC_8 (TYPE_1__*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct platform_device*,struct micro_battery*) ;
 int FUNC_10 (TYPE_1__*,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct micro_battery *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->micro = FUNC_6(VAR_8->dev.parent);
 VAR_9->wq = FUNC_3("ipaq-battery-wq", VAR_2, 0);
 if (!VAR_9->wq)
  return -VAR_0;

 FUNC_0(&VAR_9->update, VAR_7);
 FUNC_9(VAR_8, VAR_9);
 FUNC_12(VAR_9->wq, &VAR_9->update, 1);

 VAR_5 = FUNC_10(&VAR_8->dev,
       &VAR_6, ((void*)0));
 if (FUNC_1(VAR_5)) {
  VAR_10 = FUNC_2(VAR_5);
  goto batt_err;
 }

 VAR_3 = FUNC_10(&VAR_8->dev,
            &VAR_4, ((void*)0));
 if (FUNC_1(VAR_3)) {
  VAR_10 = FUNC_2(VAR_3);
  goto ac_err;
 }

 FUNC_7(&VAR_8->dev, "iPAQ micro battery driver\n");
 return 0;

ac_err:
 FUNC_11(VAR_5);
batt_err:
 FUNC_4(&VAR_9->update);
 FUNC_5(VAR_9->wq);
 return VAR_10;
}
