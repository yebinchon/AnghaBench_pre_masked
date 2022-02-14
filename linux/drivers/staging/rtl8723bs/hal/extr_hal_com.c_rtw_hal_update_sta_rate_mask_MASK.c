
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int* supp_mcs_set; } ;
struct TYPE_4__ {TYPE_1__ ht_cap; scalar_t__ ht_option; } ;
struct sta_info {int* bssrateset; int ra_mask; int init_rate; TYPE_2__ htpriv; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,int ,int*) ;

void FUNC_4(struct adapter *VAR_2, struct sta_info *VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 if (!VAR_3)
  return;

 VAR_7 = 0;


 for (VAR_4 = 0; VAR_4 < sizeof(VAR_3->bssrateset); VAR_4++) {
  if (VAR_3->bssrateset[VAR_4])
   VAR_7 |= FUNC_2(VAR_3->bssrateset[VAR_4]&0x7f);
 }


 if (VAR_3->htpriv.ht_option) {
  FUNC_3(VAR_2, VAR_0, (u8 *)(&VAR_5));
  if (VAR_5 == VAR_1)
   VAR_6 = 16;
  else
   VAR_6 = 8;

  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
   if (VAR_3->htpriv.ht_cap.supp_mcs_set[VAR_4/8] & FUNC_0(VAR_4%8))
    VAR_7 |= FUNC_0(VAR_4+12);
  }
 }

 VAR_3->ra_mask = VAR_7;
 VAR_3->init_rate = FUNC_1(VAR_7)&0x3f;
}
