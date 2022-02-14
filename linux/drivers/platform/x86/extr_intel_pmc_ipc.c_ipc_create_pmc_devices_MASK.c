
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tco_dev; int punit_dev; int dev; int telem_res_inval; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_1;


 if (!FUNC_0()) {
  VAR_1 = FUNC_4();
  if (VAR_1) {
   FUNC_1(VAR_0.dev, "Failed to add tco platform device\n");
   return VAR_1;
  }
 }

 VAR_1 = FUNC_3();
 if (VAR_1) {
  FUNC_1(VAR_0.dev, "Failed to add punit platform device\n");
  FUNC_6(VAR_0.tco_dev);
  return VAR_1;
 }

 if (!VAR_0.telem_res_inval) {
  VAR_1 = FUNC_5();
  if (VAR_1) {
   FUNC_2(VAR_0.dev,
    "Failed to add telemetry platform device\n");
   FUNC_6(VAR_0.punit_dev);
   FUNC_6(VAR_0.tco_dev);
  }
 }

 return VAR_1;
}
