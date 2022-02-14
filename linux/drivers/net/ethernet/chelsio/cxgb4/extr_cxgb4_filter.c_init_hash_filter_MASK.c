
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hash_filter; int chip; } ;
struct adapter {TYPE_1__ params; int pdev_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,int ) ;

void FUNC_6(struct adapter *VAR_4)
{
 u32 VAR_5;




 if (FUNC_4(VAR_4->params.chip)) {
  if (FUNC_3(VAR_4)) {
   if (!(FUNC_5(VAR_4, VAR_3)
      & VAR_0)) {
    FUNC_2(VAR_4->pdev_dev, "Invalid hash filter + ofld config\n");
    return;
   }
  } else {
   VAR_5 = FUNC_5(VAR_4, VAR_1);
   if (FUNC_1(VAR_5) != 4) {
    FUNC_2(VAR_4->pdev_dev, "Invalid hash filter config\n");
    return;
   }

   VAR_5 = FUNC_5(VAR_4, VAR_2);
   if (FUNC_0(VAR_5) != 4) {
    FUNC_2(VAR_4->pdev_dev, "Invalid hash filter config\n");
    return;
   }
  }

 } else {
  FUNC_2(VAR_4->pdev_dev, "Hash filter supported only on T6\n");
  return;
 }

 VAR_4->params.hash_filter = 1;
}
