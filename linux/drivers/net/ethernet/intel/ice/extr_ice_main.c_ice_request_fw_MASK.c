
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_pf {TYPE_1__* pdev; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct firmware const**,char*,struct device*) ;
 char* FUNC_2 (struct ice_pf*) ;
 int FUNC_3 (struct firmware const*,struct ice_pf*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,int ,struct device*) ;

__attribute__((used)) static void FUNC_7(struct ice_pf *VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_1);
 const struct firmware *VAR_3 = ((void*)0);
 struct device *VAR_4 = &VAR_1->pdev->dev;
 int VAR_5 = 0;





 if (VAR_2) {
  VAR_5 = FUNC_1(&VAR_3, VAR_2, VAR_4);
  if (VAR_5) {
   FUNC_4(VAR_2);
   goto dflt_pkg_load;
  }


  FUNC_3(VAR_3, VAR_1);
  FUNC_4(VAR_2);
  FUNC_5(VAR_3);
  return;
 }

dflt_pkg_load:
 VAR_5 = FUNC_6(&VAR_3, VAR_0, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4,
   "The DDP package file was not found or could not be read. Entering Safe Mode\n");
  return;
 }


 FUNC_3(VAR_3, VAR_1);
 FUNC_5(VAR_3);
}
