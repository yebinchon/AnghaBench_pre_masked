
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct ReportLUNdata {scalar_t__ LUNListLength; } ;
struct ReportExtendedLUNdata {scalar_t__ LUNListLength; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 scalar_t__ FUNC_3 (struct ctlr_info*,struct ReportLUNdata*,int) ;
 scalar_t__ FUNC_4 (struct ctlr_info*,struct ReportExtendedLUNdata*,int) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_2,
 struct ReportExtendedLUNdata *VAR_3, u32 *VAR_4,
 struct ReportLUNdata *VAR_5, u32 *VAR_6)
{
 if (FUNC_4(VAR_2, VAR_3, sizeof(*VAR_3))) {
  FUNC_1(&VAR_2->pdev->dev, "report physical LUNs failed.\n");
  return -1;
 }
 *VAR_4 = FUNC_0(*((__be32 *)VAR_3->LUNListLength)) / 24;
 if (*VAR_4 > VAR_1) {
  FUNC_2(&VAR_2->pdev->dev, "maximum physical LUNs (%d) exceeded. %d LUNs ignored.\n",
   VAR_1, *VAR_4 - VAR_1);
  *VAR_4 = VAR_1;
 }
 if (FUNC_3(VAR_2, VAR_5, sizeof(*VAR_5))) {
  FUNC_1(&VAR_2->pdev->dev, "report logical LUNs failed.\n");
  return -1;
 }
 *VAR_6 = FUNC_0(*((__be32 *) VAR_5->LUNListLength)) / 8;

 if (*VAR_6 > VAR_0) {
  FUNC_2(&VAR_2->pdev->dev,
   "maximum logical LUNs (%d) exceeded.  "
   "%d LUNs ignored.\n", VAR_0,
   *VAR_6 - VAR_0);
  *VAR_6 = VAR_0;
 }
 if (*VAR_6 + *VAR_4 > VAR_1) {
  FUNC_2(&VAR_2->pdev->dev,
   "maximum logical + physical LUNs (%d) exceeded. "
   "%d LUNs ignored.\n", VAR_1,
   *VAR_4 + *VAR_6 - VAR_1);
  *VAR_6 = VAR_1 - *VAR_4;
 }
 return 0;
}
