
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctlr_info {int max_cmd_sg_entries; TYPE_2__* pdev; } ;
struct SGDescriptor {int Len; int Addr; } ;
struct TYPE_3__ {int SGTotal; } ;
struct CommandList {struct SGDescriptor* SG; TYPE_1__ Header; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_1,
 struct CommandList *VAR_2)
{
 struct SGDescriptor *VAR_3;

 if (FUNC_1(VAR_2->Header.SGTotal) <= VAR_1->max_cmd_sg_entries)
  return;

 VAR_3 = &VAR_2->SG[VAR_1->max_cmd_sg_entries - 1];
 FUNC_0(&VAR_1->pdev->dev, FUNC_3(VAR_3->Addr),
   FUNC_2(VAR_3->Len), VAR_0);
}
