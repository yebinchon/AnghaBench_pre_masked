
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vscsibk_pend {int * cmnd; TYPE_2__* v2p; } ;
struct scsiback_tpg {TYPE_1__* tport; } ;
struct TYPE_4__ {int lun; struct scsiback_tpg* tpg; } ;
struct TYPE_3__ {int tport_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(char *VAR_0, int VAR_1,
     struct vscsibk_pend *VAR_2)
{
 struct scsiback_tpg *VAR_3 = VAR_2->v2p->tpg;

 FUNC_3("[%s:%d] cmnd[0]=%02x -> st=%02x msg=%02x host=%02x drv=%02x\n",
        VAR_3->tport->tport_name, VAR_2->v2p->lun,
        VAR_2->cmnd[0], FUNC_4(VAR_1), FUNC_2(VAR_1),
        FUNC_1(VAR_1), FUNC_0(VAR_1));
}
