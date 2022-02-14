
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct m_can_classdev {TYPE_1__* net; int dev; scalar_t__ pm_clock_support; int version; } ;
struct TYPE_5__ {int irq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct m_can_classdev*) ;
 int FUNC_5 (struct m_can_classdev*) ;
 int FUNC_6 (struct m_can_classdev*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11(struct m_can_classdev *VAR_1)
{
 int VAR_2;

 if (VAR_1->pm_clock_support) {
  FUNC_9(VAR_1->dev);
  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2)
   goto pm_runtime_fail;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto clk_disable;

 VAR_2 = FUNC_10(VAR_1->net);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "registering %s failed (err=%d)\n",
   VAR_1->net->name, VAR_2);
  goto clk_disable;
 }

 FUNC_2(VAR_1->net);

 FUNC_7(VAR_1->net);

 FUNC_1(VAR_1->dev, "%s device registered (irq=%d, version=%d)\n",
   VAR_0, VAR_1->net->irq, VAR_1->version);




clk_disable:
 FUNC_5(VAR_1);
pm_runtime_fail:
 if (VAR_2) {
  if (VAR_1->pm_clock_support)
   FUNC_8(VAR_1->dev);
  FUNC_3(VAR_1->net);
 }

 return VAR_2;
}
