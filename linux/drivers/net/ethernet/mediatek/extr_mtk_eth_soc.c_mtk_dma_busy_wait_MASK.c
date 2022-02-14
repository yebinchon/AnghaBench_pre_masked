
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_eth {int dev; TYPE_1__* soc; } ;
struct TYPE_2__ {int caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_6 ;
 int FUNC_2 (struct mtk_eth*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mtk_eth *VAR_7)
{
 unsigned long VAR_8 = VAR_6;

 while (1) {
  if (FUNC_0(VAR_7->soc->caps, VAR_2)) {
   if (!(FUNC_2(VAR_7, VAR_3) &
         (VAR_4 | VAR_5)))
    return 0;
  } else {
   if (!(FUNC_2(VAR_7, VAR_1) &
         (VAR_4 | VAR_5)))
    return 0;
  }

  if (FUNC_3(VAR_6, VAR_8 + VAR_0))
   break;
 }

 FUNC_1(VAR_7->dev, "DMA init timeout\n");
 return -1;
}
