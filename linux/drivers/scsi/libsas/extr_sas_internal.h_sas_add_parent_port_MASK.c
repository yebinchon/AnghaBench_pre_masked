
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expander_device {scalar_t__ parent_port; struct ex_phy* ex_phy; } ;
struct ex_phy {int phy; } ;
struct domain_device {TYPE_1__* rphy; struct expander_device ex_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct domain_device *VAR_0, int VAR_1)
{
 struct expander_device *VAR_2 = &VAR_0->ex_dev;
 struct ex_phy *VAR_3 = &VAR_2->ex_phy[VAR_1];

 if (!VAR_2->parent_port) {
  VAR_2->parent_port = FUNC_3(&VAR_0->rphy->dev, VAR_1);

  FUNC_0(!VAR_2->parent_port);
  FUNC_0(FUNC_1(VAR_2->parent_port));
  FUNC_4(VAR_2->parent_port);
 }
 FUNC_2(VAR_2->parent_port, VAR_3->phy);
}
