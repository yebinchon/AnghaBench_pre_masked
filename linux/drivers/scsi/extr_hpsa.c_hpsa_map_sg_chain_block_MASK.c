
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ctlr_info {int max_cmd_sg_entries; TYPE_2__* pdev; struct SGDescriptor** cmd_sg_list; } ;
struct SGDescriptor {void* Addr; void* Len; void* Ext; } ;
struct TYPE_3__ {int SGTotal; } ;
struct CommandList {size_t cmdindex; TYPE_1__ Header; struct SGDescriptor* SG; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,struct SGDescriptor*,int,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3)
{
 struct SGDescriptor *VAR_4, *VAR_5;
 u64 VAR_6;
 u32 VAR_7;

 VAR_4 = &VAR_3->SG[VAR_2->max_cmd_sg_entries - 1];
 VAR_5 = VAR_2->cmd_sg_list[VAR_3->cmdindex];
 VAR_4->Ext = FUNC_0(VAR_1);
 VAR_7 = sizeof(*VAR_4) *
  (FUNC_4(VAR_3->Header.SGTotal) - VAR_2->max_cmd_sg_entries);
 VAR_4->Len = FUNC_0(VAR_7);
 VAR_6 = FUNC_2(&VAR_2->pdev->dev, VAR_5, VAR_7,
    VAR_0);
 if (FUNC_3(&VAR_2->pdev->dev, VAR_6)) {

  VAR_4->Addr = FUNC_1(0);
  return -1;
 }
 VAR_4->Addr = FUNC_1(VAR_6);
 return 0;
}
