
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int write; int read; } ;
struct ci_hdrc {int ulpi; int dev; TYPE_2__ ulpi_ops; TYPE_1__* platdata; } ;
struct TYPE_3__ {scalar_t__ phy_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ci_hdrc*) ;
 int FUNC_4 (int ,TYPE_2__*) ;

int FUNC_5(struct ci_hdrc *VAR_3)
{
 if (VAR_3->platdata->phy_mode != VAR_0)
  return 0;





 FUNC_3(VAR_3);

 VAR_3->ulpi_ops.read = VAR_1;
 VAR_3->ulpi_ops.write = VAR_2;
 VAR_3->ulpi = FUNC_4(VAR_3->dev, &VAR_3->ulpi_ops);
 if (FUNC_0(VAR_3->ulpi))
  FUNC_2(VAR_3->dev, "failed to register ULPI interface");

 return FUNC_1(VAR_3->ulpi);
}
