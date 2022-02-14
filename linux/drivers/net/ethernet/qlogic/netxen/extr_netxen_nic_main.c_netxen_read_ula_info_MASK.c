
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netxen_adapter {scalar_t__ portnum; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct netxen_adapter *VAR_1)
{
 u32 VAR_2;


 if (VAR_1->portnum != 0)
  return;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 switch (VAR_2) {
 case 128:
  FUNC_1(&VAR_1->pdev->dev, "ULA adapter");
  break;
 case 129:
  FUNC_1(&VAR_1->pdev->dev, "non ULA adapter");
  break;
 default:
  break;
 }

 return;
}
