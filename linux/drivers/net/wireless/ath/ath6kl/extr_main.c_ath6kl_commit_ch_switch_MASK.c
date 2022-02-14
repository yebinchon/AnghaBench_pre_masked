
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int ch; } ;
struct ath6kl_vif {int nw_type; TYPE_1__ profile; int fw_vif_idx; int rsn_capab; struct ath6kl* ar; } ;
struct ath6kl {int wmi; int fw_capabilities; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_vif *VAR_4, u16 VAR_5)
{
 struct ath6kl *VAR_6 = VAR_4->ar;

 VAR_4->profile.ch = FUNC_3(VAR_5);

 switch (VAR_4->nw_type) {
 case 128:




  if (VAR_4->rsn_capab &&
      FUNC_4(VAR_0,
        VAR_6->fw_capabilities))
   FUNC_2(VAR_6->wmi, VAR_4->fw_vif_idx,
           VAR_2, VAR_3,
           (const u8 *) &VAR_4->rsn_capab,
           sizeof(VAR_4->rsn_capab));

  return FUNC_1(VAR_6->wmi, VAR_4->fw_vif_idx,
          &VAR_4->profile);
 default:
  FUNC_0("won't switch channels nw_type=%d\n", VAR_4->nw_type);
  return -VAR_1;
 }
}
