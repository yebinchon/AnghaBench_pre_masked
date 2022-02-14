
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ctlr_info {int discovery_polling; TYPE_2__* pdev; } ;
struct ReportExtendedLUNdata {TYPE_1__* LUN; int LUNListLength; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ device_type; int lunid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ctlr_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_1,
 struct ReportExtendedLUNdata *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (VAR_1->discovery_polling)
  return;

 VAR_3 = (FUNC_1(VAR_2->LUNListLength) / 24) + 1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2->LUN[VAR_4].device_type ==
   VAR_0
   && !FUNC_3(VAR_2->LUN[VAR_4].lunid)) {
   FUNC_0(&VAR_1->pdev->dev,
    "External controller present, activate discovery polling and disable rld caching\n");
   FUNC_2(VAR_1);
   VAR_1->discovery_polling = 1;
   break;
  }
 }
}
