
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pluto {int dead; scalar_t__ overflow; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pluto*,int) ;
 int FUNC_2 (struct pluto*,int ) ;
 int FUNC_3 (struct pluto*,int) ;
 int FUNC_4 (struct pluto*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct pluto *VAR_9 = VAR_8;
 u32 VAR_10;


 VAR_10 = FUNC_2(VAR_9, VAR_2);
 if (!(VAR_10 & (VAR_3 | VAR_6)))
  return VAR_1;

 if (VAR_10 == 0xffffffff) {
  if (VAR_9->dead == 0)
   FUNC_0(&VAR_9->pdev->dev, "card has hung or been ejected.\n");

  VAR_9->dead = 1;
  return VAR_0;
 }


 if (VAR_10 & VAR_3) {
  FUNC_1(VAR_9, (VAR_10 & VAR_5) >> 24);

  if (VAR_10 & VAR_6)
   VAR_9->overflow++;
  if (VAR_9->overflow) {
   FUNC_0(&VAR_9->pdev->dev, "overflow irq (%d)\n",
     VAR_9->overflow);
   FUNC_3(VAR_9, 1);
   VAR_9->overflow = 0;
  }
 } else if (VAR_10 & VAR_6) {
  VAR_9->overflow++;
 }


 FUNC_4(VAR_9, VAR_10 | VAR_4);

 return VAR_0;
}
