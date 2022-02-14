
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_common {scalar_t__ bssidmask; scalar_t__ macaddr; void* ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct ath_common *VAR_5)
{
 void *VAR_6 = VAR_5->ah;
 u32 VAR_7;

 FUNC_1(VAR_6, VAR_2, FUNC_3(VAR_5->macaddr));
 VAR_7 = FUNC_0(VAR_6, VAR_3) & ~VAR_4;
 VAR_7 |= FUNC_2(VAR_5->macaddr + 4);
 FUNC_1(VAR_6, VAR_3, VAR_7);

 FUNC_1(VAR_6, VAR_0, FUNC_3(VAR_5->bssidmask));
 FUNC_1(VAR_6, VAR_1, FUNC_2(VAR_5->bssidmask + 4));
}
