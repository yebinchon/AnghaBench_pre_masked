
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,char*,char,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (struct adapter*,int ,int *) ;

void FUNC_2(void *VAR_4, struct adapter *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;

 FUNC_1(VAR_5, VAR_1, (u8 *)&VAR_6);
 FUNC_0(VAR_4, "odm.SupportAbility = 0x%08x\n", VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3[VAR_7])
   FUNC_0(VAR_4, "%cBIT%-2d %s\n",
     (VAR_0 << VAR_7) & VAR_6 ? '+' : ' ', VAR_7,
     VAR_3[VAR_7]);
 }
}
