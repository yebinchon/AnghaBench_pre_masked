
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_desc {int dummy; } ;
struct TYPE_2__ {int rx; } ;
struct ar5416_desc {int ds_ctl1; TYPE_1__ u; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct ath_hw *VAR_3, struct ath_desc *VAR_4,
     u32 VAR_5, u32 VAR_6)
{
 struct ar5416_desc *VAR_7 = FUNC_0(VAR_4);

 VAR_7->ds_ctl1 = VAR_5 & VAR_0;
 if (VAR_6 & VAR_2)
  VAR_7->ds_ctl1 |= VAR_1;

 FUNC_1(&VAR_7->u.rx, 0, sizeof(VAR_7->u.rx));
}
