
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u8 ;
struct brcms_c_info {int hw; TYPE_2__* bsscfg; TYPE_1__* pub; } ;
struct TYPE_4__ {int type; int BSSID; } ;
struct TYPE_3__ {int cur_etheraddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct brcms_c_info*,int const*,size_t) ;
 int FUNC_2 (int ,int const*,int) ;

void FUNC_3(struct brcms_c_info *VAR_3, u8 *VAR_4, const u8 *VAR_5,
        u8 *VAR_6, size_t VAR_7)
{
 FUNC_1(VAR_3, VAR_6, VAR_7);

 FUNC_2(VAR_3->pub->cur_etheraddr, VAR_4, sizeof(VAR_3->pub->cur_etheraddr));
 FUNC_2(VAR_3->bsscfg->BSSID, VAR_5, sizeof(VAR_3->bsscfg->BSSID));
 VAR_3->bsscfg->type = VAR_0;

 FUNC_0(VAR_3->hw, VAR_1 | VAR_2, VAR_1 | VAR_2);
}
