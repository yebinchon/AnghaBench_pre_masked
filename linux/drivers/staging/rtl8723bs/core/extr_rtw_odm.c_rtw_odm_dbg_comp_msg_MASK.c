
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,char*,char,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (struct adapter*,int ,int*) ;

void FUNC_2(void *VAR_4, struct adapter *VAR_5)
{
 u64 VAR_6;
 int VAR_7;

 FUNC_1(VAR_5, VAR_1, &VAR_6);
 FUNC_0(VAR_4, "odm.DebugComponents = 0x%016llx\n", VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3[VAR_7])
   FUNC_0(VAR_4, "%cBIT%-2d %s\n",
     (VAR_0 << VAR_7) & VAR_6 ? '+' : ' ',
     VAR_7, VAR_3[VAR_7]);
 }
}
