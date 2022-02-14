
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wilc {size_t vif_num; TYPE_1__** vif; } ;
struct TYPE_2__ {int bssid; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct wilc *VAR_0)
{
 u8 VAR_1 = 0;
 u8 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->vif_num; VAR_1++)
  if (!FUNC_0(VAR_0->vif[VAR_1]->bssid))
   VAR_2++;

 return VAR_2;
}
