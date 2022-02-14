
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bATCStatus; } ;
struct TYPE_5__ {int Adapter; TYPE_2__ DM_CfoTrack; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef TYPE_2__* PCFO_TRACKING ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, bool VAR_2)
{
 PDM_ODM_T VAR_3 = (PDM_ODM_T)VAR_1;
 PCFO_TRACKING VAR_4 = &VAR_3->DM_CfoTrack;

 if (VAR_4->bATCStatus == VAR_2)
  return;

 FUNC_2(
  VAR_3->Adapter,
  FUNC_1(VAR_0, VAR_3),
  FUNC_0(VAR_0, VAR_3),
  VAR_2
 );
 VAR_4->bATCStatus = VAR_2;
}
