
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; } ;
struct CommandList {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*,unsigned char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_2,
    struct CommandList *VAR_3,
    unsigned char VAR_4[], int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 1;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {





  FUNC_2(1000 * VAR_8);

  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  if (!VAR_6)
   break;


  if (VAR_8 < VAR_0)
   VAR_8 *= 2;

  FUNC_0(&VAR_2->pdev->dev,
    "waiting %d secs for device to become ready.\n",
    VAR_8);
 }

 return VAR_6;
}
