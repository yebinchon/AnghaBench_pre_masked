
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_otg {int work; int qwork; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct mv_otg *VAR_0,
         unsigned long VAR_1)
{
 FUNC_0(&VAR_0->pdev->dev, "transceiver is updated\n");
 if (!VAR_0->qwork)
  return;

 FUNC_1(VAR_0->qwork, &VAR_0->work, VAR_1);
}
