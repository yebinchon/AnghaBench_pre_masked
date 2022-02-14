
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm_qspi {int curr_cs; TYPE_1__* pdev; scalar_t__* base; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bcm_qspi*,size_t,int ) ;
 int FUNC_1 (struct bcm_qspi*,size_t,int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bcm_qspi *VAR_1, int VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 if (VAR_1->base[VAR_0]) {
  VAR_3 = FUNC_0(VAR_1, VAR_0, 0);
  VAR_4 = (VAR_3 & ~0xff) | (1 << VAR_2);
  if (VAR_3 == VAR_4)
   return;
  FUNC_1(VAR_1, VAR_0, 0, VAR_4);
  FUNC_3(10, 20);
 }

 FUNC_2(&VAR_1->pdev->dev, "using cs:%d\n", VAR_2);
 VAR_1->curr_cs = VAR_2;
}
