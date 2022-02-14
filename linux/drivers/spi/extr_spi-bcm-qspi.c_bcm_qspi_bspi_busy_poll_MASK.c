
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm_qspi {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_qspi*,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct bcm_qspi *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
  if (!(FUNC_0(VAR_3, VAR_0, VAR_1) & 1))
   return 0;
  FUNC_2(1);
 }
 FUNC_1(&VAR_3->pdev->dev, "timeout waiting for !busy_status\n");
 return -VAR_2;
}
