
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tmio_mmc_host *VAR_3, u32 VAR_4)
{
 int VAR_5 = 1000;

 u32 VAR_6 = (VAR_4 == VAR_2 ? VAR_2 : 0);

 while (--VAR_5 && (FUNC_1(VAR_3, VAR_0)
         & VAR_4) == VAR_6)
  FUNC_2(1);

 if (!VAR_5) {
  FUNC_0(&VAR_3->pdev->dev, "timeout waiting for SD bus idle\n");
  return -VAR_1;
 }

 return 0;
}
