
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_msiof_spi_priv {TYPE_1__* pdev; scalar_t__ slave_aborted; int ctlr; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct completion*) ;
 int FUNC_4 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_5(struct sh_msiof_spi_priv *VAR_3,
     struct completion *VAR_4)
{
 if (FUNC_2(VAR_3->ctlr)) {
  if (FUNC_3(VAR_4) ||
      VAR_3->slave_aborted) {
   FUNC_0(&VAR_3->pdev->dev, "interrupted\n");
   return -VAR_0;
  }
 } else {
  if (!FUNC_4(VAR_4, VAR_2)) {
   FUNC_1(&VAR_3->pdev->dev, "timeout\n");
   return -VAR_1;
  }
 }

 return 0;
}
