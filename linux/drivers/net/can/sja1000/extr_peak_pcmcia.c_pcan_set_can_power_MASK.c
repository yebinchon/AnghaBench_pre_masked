
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcan_pccard {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct pcan_pccard*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct pcan_pccard *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0, !!VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_0->pdev->dev,
   "failed setting power %s to can connectors (err %d)\n",
   (VAR_1) ? "on" : "off", VAR_2);
}
