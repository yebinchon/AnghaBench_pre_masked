
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct ReportExtendedLUNdata {TYPE_2__* LUN; int LUNListLength; } ;
struct TYPE_4__ {int * wwid; int * lunid; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ctlr_info*,struct ReportExtendedLUNdata*,int) ;
 int FUNC_4 (struct ReportExtendedLUNdata*) ;
 struct ReportExtendedLUNdata* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned char*,int) ;

__attribute__((used)) static u64 FUNC_7(struct ctlr_info *VAR_1,
      unsigned char *VAR_2)
{
 struct ReportExtendedLUNdata *VAR_3;
 u32 VAR_4;
 u64 VAR_5 = 0;
 int VAR_6;

 VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return 0;

 if (FUNC_3(VAR_1, VAR_3, sizeof(*VAR_3))) {
  FUNC_0(&VAR_1->pdev->dev, "report physical LUNs failed.\n");
  FUNC_4(VAR_3);
  return 0;
 }
 VAR_4 = FUNC_1(VAR_3->LUNListLength) / 24;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  if (!FUNC_6(&VAR_3->LUN[VAR_6].lunid[0], VAR_2, 8)) {
   VAR_5 = FUNC_2(&VAR_3->LUN[VAR_6].wwid[0]);
   break;
  }

 FUNC_4(VAR_3);

 return VAR_5;
}
