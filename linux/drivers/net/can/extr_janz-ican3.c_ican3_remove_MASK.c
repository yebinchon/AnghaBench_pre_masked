
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ican3_dev {int num; TYPE_1__* dpm; TYPE_1__* ctrl; int irq; int napi; } ;
struct TYPE_2__ {int int_disable; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ican3_dev*) ;
 int FUNC_2 (struct ican3_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 struct ican3_dev* FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_7(VAR_0);
 struct ican3_dev *VAR_2 = FUNC_6(VAR_1);


 FUNC_8(VAR_1);
 FUNC_5(&VAR_2->napi);
 FUNC_4(1 << VAR_2->num, &VAR_2->ctrl->int_disable);
 FUNC_1(VAR_2->irq, VAR_2);


 FUNC_2(VAR_2);


 FUNC_3(VAR_2->ctrl);
 FUNC_3(VAR_2->dpm);

 FUNC_0(VAR_1);

 return 0;
}
