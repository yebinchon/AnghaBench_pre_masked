
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pdev; } ;
struct idt_ntb_dev {TYPE_1__ ntb; int dbgfs_info; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,int ,struct idt_ntb_dev*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_1 ;
 char* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_8(struct idt_ntb_dev *VAR_2)
{
 char VAR_3[64];


 if (FUNC_1(VAR_0)) {
  FUNC_5(&VAR_2->ntb.pdev->dev, "Top DebugFS directory absent");
  return FUNC_2(VAR_0);
 }


 FUNC_7(VAR_3, 64, "info:%s", FUNC_6(VAR_2->ntb.pdev));
 VAR_2->dbgfs_info = FUNC_3(VAR_3, 0400, VAR_0,
  VAR_2, &VAR_1);
 if (FUNC_0(VAR_2->dbgfs_info)) {
  FUNC_4(&VAR_2->ntb.pdev->dev, "Failed to create DebugFS node");
  return FUNC_2(VAR_2->dbgfs_info);
 }

 FUNC_4(&VAR_2->ntb.pdev->dev, "NTB device DebugFS node created");

 return 0;
}
