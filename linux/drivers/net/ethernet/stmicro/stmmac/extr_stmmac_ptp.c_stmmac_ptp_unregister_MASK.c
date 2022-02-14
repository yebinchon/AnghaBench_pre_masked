
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* dev; int * ptp_clock; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct stmmac_priv *VAR_0)
{
 if (VAR_0->ptp_clock) {
  FUNC_1(VAR_0->ptp_clock);
  VAR_0->ptp_clock = ((void*)0);
  FUNC_0("Removed PTP HW clock successfully on %s\n",
    VAR_0->dev->name);
 }
}
