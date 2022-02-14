
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ath6kl_vif {int fw_vif_idx; } ;
struct ath6kl {TYPE_1__* wmi; int state; } ;
struct TYPE_4__ {scalar_t__ pwr_mode; scalar_t__ saved_pwr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath6kl_vif* FUNC_0 (struct ath6kl*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_3)
{
 struct ath6kl_vif *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4)
  return -VAR_2;

 if (VAR_3->wmi->pwr_mode != VAR_3->wmi->saved_pwr_mode) {
  VAR_5 = FUNC_1(VAR_3->wmi, 0,
            VAR_3->wmi->saved_pwr_mode);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_3->wmi, VAR_4->fw_vif_idx,
       VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_3->state = VAR_1;


 VAR_5 = FUNC_2(VAR_3->wmi, VAR_4->fw_vif_idx,
     0, 0, 0, 0, 0, 0, 3, 0, 0, 0);
 if (VAR_5)
  return VAR_5;

 return 0;
}
