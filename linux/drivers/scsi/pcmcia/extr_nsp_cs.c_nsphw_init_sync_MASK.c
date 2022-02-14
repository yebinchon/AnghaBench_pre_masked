
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int SyncOffset; int SyncPeriod; int SyncNegotiation; } ;
typedef TYPE_1__ sync_data ;
struct TYPE_6__ {TYPE_1__* Sync; } ;
typedef TYPE_2__ nsp_hw_data ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(nsp_hw_data *VAR_1)
{
 sync_data VAR_2 = { .SyncNegotiation = VAR_0,
          .SyncPeriod = 0,
          .SyncOffset = 0
 };
 int VAR_3;


 for ( VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->Sync); VAR_3++ ) {
  VAR_1->Sync[VAR_3] = VAR_2;
 }
}
