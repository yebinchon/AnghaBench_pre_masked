
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union tspec_body {int dummy; } tspec_body ;
typedef union qos_tclas {int dummy; } qos_tclas ;
typedef size_t u8 ;
struct ts_common_info {size_t* Addr; size_t TClasProc; size_t TClasNum; int * TClass; int TSpec; } ;


 int FUNC_0 (size_t*,size_t*,int) ;

__attribute__((used)) static void FUNC_1(struct ts_common_info *VAR_0, u8 *VAR_1,
   union tspec_body *VAR_2, union qos_tclas *VAR_3,
   u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6;

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->Addr, VAR_1, 6);

 if (VAR_2 != ((void*)0))
  FUNC_0((u8 *)(&(VAR_0->TSpec)), (u8 *)VAR_2,
   sizeof(union tspec_body));

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_0((u8 *)(&(VAR_0->TClass[VAR_6])),
         (u8 *)VAR_3, sizeof(union qos_tclas));

 VAR_0->TClasProc = VAR_5;
 VAR_0->TClasNum = VAR_4;
}
