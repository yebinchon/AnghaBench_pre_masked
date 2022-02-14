
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int nreply_queues; TYPE_1__* pdev; } ;
struct CommandList {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct ctlr_info *VAR_1,
        unsigned char VAR_2[],
        int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 struct CommandList *VAR_8;

 VAR_8 = FUNC_0(VAR_1);






 if (VAR_3 == VAR_0) {
  VAR_4 = 0;
  VAR_5 = VAR_1->nreply_queues - 1;
 } else {
  VAR_4 = VAR_3;
  VAR_5 = VAR_3;
 }

 for (VAR_6 = VAR_4; VAR_6 <= VAR_5; VAR_6++) {
  VAR_7 = FUNC_3(VAR_1, VAR_8, VAR_2, VAR_6);
  if (VAR_7)
   break;
 }

 if (VAR_7)
  FUNC_2(&VAR_1->pdev->dev, "giving up on device.\n");
 else
  FUNC_2(&VAR_1->pdev->dev, "device is ready.\n");

 FUNC_1(VAR_1, VAR_8);
 return VAR_7;
}
