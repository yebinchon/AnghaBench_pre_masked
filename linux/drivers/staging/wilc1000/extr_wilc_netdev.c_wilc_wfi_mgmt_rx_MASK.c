
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct wilc_vif {scalar_t__ monitor_flag; TYPE_2__* frame_reg; } ;
struct wilc {int vif_num; int vif_mutex; int monitor_dev; TYPE_1__** vif; } ;
typedef int __le16 ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ reg; } ;
struct TYPE_3__ {int ndev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wilc_vif* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct wilc_vif*,int *,int ) ;

void FUNC_6(struct wilc *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;
 struct wilc_vif *VAR_4;

 FUNC_1(&VAR_0->vif_mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0->vif_num; VAR_3++) {
  u16 VAR_5 = FUNC_0((__le16 *)VAR_1);

  VAR_4 = FUNC_3(VAR_0->vif[VAR_3]->ndev);
  if ((VAR_5 == VAR_4->frame_reg[0].type && VAR_4->frame_reg[0].reg) ||
      (VAR_5 == VAR_4->frame_reg[1].type && VAR_4->frame_reg[1].reg)) {
   FUNC_5(VAR_4, VAR_1, VAR_2);
   break;
  }

  if (VAR_4->monitor_flag) {
   FUNC_4(VAR_0->monitor_dev, VAR_1, VAR_2);
   break;
  }
 }
 FUNC_2(&VAR_0->vif_mutex);
}
