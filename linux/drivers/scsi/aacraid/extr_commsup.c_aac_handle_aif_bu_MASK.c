
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {TYPE_1__* pdev; } ;
struct aac_aifcmd {int dummy; } ;
struct TYPE_2__ {int dev; } ;




 int FUNC_0 (struct aac_aifcmd*,int) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void FUNC_2(struct aac_dev *VAR_0, struct aac_aifcmd *VAR_1)
{
 switch (FUNC_0(VAR_1, 1)) {
 case 129:
  if (FUNC_0(VAR_1, 2))
   FUNC_1(&VAR_0->pdev->dev, "Backup unit had cache data loss - [%d]\n",
   FUNC_0(VAR_1, 2));
  else
   FUNC_1(&VAR_0->pdev->dev, "Backup Unit had cache data loss\n");
  break;
 case 128:
  if (FUNC_0(VAR_1, 2))
   FUNC_1(&VAR_0->pdev->dev, "DDR cache data recovered successfully - [%d]\n",
   FUNC_0(VAR_1, 2));
  else
   FUNC_1(&VAR_0->pdev->dev, "DDR cache data recovered successfully\n");
  break;
 }
}
