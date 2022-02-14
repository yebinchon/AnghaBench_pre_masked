
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union tspec_body {int dummy; } tspec_body ;
typedef union qos_tclas {int dummy; } qos_tclas ;
struct ts_common_info {scalar_t__ TClasNum; scalar_t__ TClasProc; int TClass; int TSpec; int Addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ts_common_info *VAR_1)
{
 FUNC_0(VAR_1->Addr);
 FUNC_1(&VAR_1->TSpec, 0, sizeof(union tspec_body));
 FUNC_1(&VAR_1->TClass, 0, sizeof(union qos_tclas)*VAR_0);
 VAR_1->TClasProc = 0;
 VAR_1->TClasNum = 0;
}
