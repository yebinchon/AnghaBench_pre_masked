
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct bcma_hcd_device {struct bcma_device* core; } ;
struct bcma_device {struct device dev; TYPE_1__* bus; } ;
struct bcma_chipinfo {scalar_t__ id; } ;
struct TYPE_2__ {struct bcma_chipinfo chipinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (struct bcma_device*) ;
 int FUNC_2 (int ,int *,struct device*) ;

__attribute__((used)) static int FUNC_3(struct bcma_hcd_device *VAR_2)
{
 struct bcma_device *VAR_3 = VAR_2->core;
 struct bcma_chipinfo *VAR_4 = &VAR_3->bus->chipinfo;
 struct device *VAR_5 = &VAR_3->dev;

 FUNC_0(VAR_3, 0);

 if (VAR_4->id == VAR_0 ||
     VAR_4->id == VAR_1)
  FUNC_1(VAR_3);

 FUNC_2(VAR_5->of_node, ((void*)0), VAR_5);

 return 0;
}
