
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int errata; TYPE_1__* ofdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gfar_private*) ;
 int FUNC_1 (struct gfar_private*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gfar_private *VAR_3)
{
 struct device *VAR_4 = &VAR_3->ofdev->dev;


 VAR_3->errata |= VAR_0;
 if (VAR_3->errata)
  FUNC_2(VAR_4, "enabled errata workarounds, flags: 0x%x\n",
    VAR_3->errata);
}
