
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pasemi_mac {TYPE_2__* dma_pdev; } ;
struct TYPE_4__ {int chno; } ;
struct TYPE_6__ {TYPE_1__ chan; } ;
struct TYPE_5__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (struct pasemi_mac*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct pasemi_mac *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6 = FUNC_4(VAR_3)->chan.chno;

 FUNC_5(FUNC_0(VAR_6),
        VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_3(FUNC_0(VAR_6));
  if (!(VAR_4 & VAR_1))
   break;
  FUNC_1();
 }

 if (VAR_4 & VAR_1)
  FUNC_2(&VAR_3->dma_pdev->dev,
   "Failed to stop tx channel, tcmdsta %08x\n", VAR_4);

 FUNC_5(FUNC_0(VAR_6), 0);
}
