
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;
struct tc_dev {TYPE_1__ resource; } ;
struct net_device {int irq; } ;
struct fza_private {int mmio; int reset_timer; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (int *) ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct fza_private*) ;
 int FUNC_5 (int ) ;
 struct fza_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 struct tc_dev* FUNC_9 (struct device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);
 struct fza_private *VAR_2 = FUNC_6(VAR_1);
 struct tc_dev *VAR_3 = FUNC_9(VAR_0);
 resource_size_t VAR_4, VAR_5;

 FUNC_7(VAR_0);

 FUNC_10(VAR_1);

 FUNC_0(&VAR_2->reset_timer);
 FUNC_4(VAR_2);
 FUNC_2(VAR_1->irq, VAR_1);

 FUNC_5(VAR_2->mmio);

 VAR_4 = VAR_3->resource.start;
 VAR_5 = VAR_3->resource.end - VAR_4 + 1;
 FUNC_8(VAR_4, VAR_5);

 FUNC_3(VAR_1);

 return 0;
}
