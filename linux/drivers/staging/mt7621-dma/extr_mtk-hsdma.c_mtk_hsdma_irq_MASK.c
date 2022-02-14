
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; int task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mtk_hsdam_engine*,int ) ;
 int FUNC_3 (struct mtk_hsdam_engine*,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct mtk_hsdam_engine *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (FUNC_5(!VAR_7))
  return VAR_3;

 if (FUNC_1(VAR_7 & VAR_0))
  FUNC_4(&VAR_6->task);
 else
  FUNC_0(VAR_6->ddev.dev, "unhandle irq status %08x\n", VAR_7);

 FUNC_3(VAR_6, VAR_1, VAR_7);

 return VAR_2;
}
