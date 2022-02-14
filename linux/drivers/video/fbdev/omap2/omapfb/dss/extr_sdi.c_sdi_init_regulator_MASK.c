
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct TYPE_4__ {struct regulator* vdds_sdi_reg; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 struct regulator* FUNC_3 (int *,char*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct regulator *VAR_2;

 if (VAR_1.vdds_sdi_reg)
  return 0;

 VAR_2 = FUNC_3(&VAR_1.pdev->dev, "vdds_sdi");
 if (FUNC_1(VAR_2)) {
  if (FUNC_2(VAR_2) != -VAR_0)
   FUNC_0("can't get VDDS_SDI regulator\n");
  return FUNC_2(VAR_2);
 }

 VAR_1.vdds_sdi_reg = VAR_2;

 return 0;
}
