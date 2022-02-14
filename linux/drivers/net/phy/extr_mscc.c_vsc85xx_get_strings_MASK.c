
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vsc8531_private {int nstats; TYPE_1__* hw_stats; } ;
struct phy_device {struct vsc8531_private* priv; } ;
struct TYPE_2__ {int string; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_1, u8 *VAR_2)
{
 struct vsc8531_private *VAR_3 = VAR_1->priv;
 int VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->nstats; VAR_4++)
  FUNC_0(VAR_2 + VAR_4 * VAR_0, VAR_3->hw_stats[VAR_4].string,
   VAR_0);
}
