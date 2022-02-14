
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_hdr {scalar_t__ chip; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; int pdev_dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(const struct adapter *VAR_3,
          const struct fw_hdr *VAR_4)
{



 if ((FUNC_2(VAR_3->params.chip) && VAR_4->chip == VAR_0) ||
     (FUNC_3(VAR_3->params.chip) && VAR_4->chip == VAR_1) ||
     (FUNC_4(VAR_3->params.chip) && VAR_4->chip == VAR_2))
  return 1;

 FUNC_1(VAR_3->pdev_dev,
  "FW image (%d) is not suitable for this adapter (%d)\n",
  VAR_4->chip, FUNC_0(VAR_3->params.chip));
 return 0;
}
