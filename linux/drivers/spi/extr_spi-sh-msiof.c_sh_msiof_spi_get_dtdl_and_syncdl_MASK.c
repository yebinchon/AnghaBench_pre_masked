
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_msiof_spi_priv {TYPE_2__* info; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dtdl; int syncdl; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct sh_msiof_spi_priv *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2->info)
  return 0;


 if (VAR_2->info->dtdl > 200 || VAR_2->info->syncdl > 300) {
  FUNC_0(&VAR_2->pdev->dev, "DTDL or SYNCDL is too large\n");
  return 0;
 }


 if ((VAR_2->info->dtdl + VAR_2->info->syncdl) % 100) {
  FUNC_0(&VAR_2->pdev->dev, "the sum of DTDL/SYNCDL is not good\n");
  return 0;
 }

 VAR_3 = FUNC_1(VAR_2->info->dtdl) << VAR_0;
 VAR_3 |= FUNC_1(VAR_2->info->syncdl) << VAR_1;

 return VAR_3;
}
