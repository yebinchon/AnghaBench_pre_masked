
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct bnx2x {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pdev->dev;

 if (FUNC_2(VAR_2, FUNC_0(64)) != 0 &&
     FUNC_2(VAR_2, FUNC_0(32)) != 0) {
  FUNC_1(VAR_2, "System does not support DMA, aborting\n");
  return -VAR_0;
 }

 return 0;
}
