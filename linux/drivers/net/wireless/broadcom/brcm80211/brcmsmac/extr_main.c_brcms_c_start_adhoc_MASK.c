
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct brcms_c_info {int hw; TYPE_2__* bsscfg; TYPE_1__* pub; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int cur_etheraddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int *,int) ;

void FUNC_2(struct brcms_c_info *VAR_3, u8 *VAR_4)
{
 FUNC_1(VAR_3->pub->cur_etheraddr, VAR_4, sizeof(VAR_3->pub->cur_etheraddr));
 VAR_3->bsscfg->type = VAR_0;

 FUNC_0(VAR_3->hw, VAR_1 | VAR_2, 0);
}
