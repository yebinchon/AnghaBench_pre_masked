
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct serdes_ctrl {TYPE_2__* dev; int * phys; int regs; } ;
struct TYPE_6__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct phy_provider {int dummy; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 unsigned int VAR_2 ;
 int FUNC_3 (TYPE_2__*,struct serdes_ctrl*) ;
 struct serdes_ctrl* FUNC_4 (TYPE_2__*,int,int ) ;
 struct phy_provider* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct serdes_ctrl*,unsigned int,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct phy_provider *VAR_5;
 struct serdes_ctrl *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_4->dev;
 VAR_6->regs = FUNC_7(VAR_4->dev.parent->of_node);
 if (FUNC_0(VAR_6->regs))
  return FUNC_1(VAR_6->regs);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = FUNC_6(VAR_6, VAR_7, &VAR_6->phys[VAR_7]);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_3(&VAR_4->dev, VAR_6);

 VAR_5 = FUNC_5(VAR_6->dev,
       VAR_3);

 return FUNC_2(VAR_5);
}
