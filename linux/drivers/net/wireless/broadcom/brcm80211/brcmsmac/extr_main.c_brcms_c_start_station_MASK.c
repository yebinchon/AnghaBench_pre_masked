
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct brcms_c_info {TYPE_2__* bsscfg; TYPE_1__* pub; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int cur_etheraddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

void FUNC_1(struct brcms_c_info *VAR_1, u8 *VAR_2)
{
 FUNC_0(VAR_1->pub->cur_etheraddr, VAR_2, sizeof(VAR_1->pub->cur_etheraddr));
 VAR_1->bsscfg->type = VAR_0;
}
