
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ibmvfc_target {int kref; int timer; } ;
struct TYPE_8__ {int error; int status; } ;
struct TYPE_7__ {int * response; } ;
struct TYPE_6__ {int status; } ;
struct ibmvfc_passthru_mad {TYPE_4__ iu; TYPE_3__ fc_iu; TYPE_2__ common; } ;
struct ibmvfc_host {int work_wait_q; int discovery_threads; } ;
struct ibmvfc_event {TYPE_1__* xfer_iu; struct ibmvfc_host* vhost; struct ibmvfc_target* tgt; } ;
struct TYPE_5__ {struct ibmvfc_passthru_mad passthru; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ibmvfc_passthru_mad*,struct ibmvfc_target*) ;
 int FUNC_4 (struct ibmvfc_event*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (struct ibmvfc_target*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct ibmvfc_target*,char*) ;
 int FUNC_11 (struct ibmvfc_target*,char*,int ,int,int,int ,int,int ,int,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ibmvfc_event *VAR_3)
{
 struct ibmvfc_target *VAR_4 = VAR_3->tgt;
 struct ibmvfc_host *VAR_5 = VAR_3->vhost;
 struct ibmvfc_passthru_mad *VAR_6 = &VAR_3->xfer_iu->passthru;
 u32 VAR_7 = FUNC_0(VAR_6->common.status);
 u8 VAR_8, VAR_9;

 VAR_5->discovery_threads--;
 FUNC_8(VAR_4, VAR_1);
 FUNC_2(&VAR_4->timer);

 switch (VAR_7) {
 case 128:
  FUNC_10(VAR_4, "ADISC succeeded\n");
  if (FUNC_3(VAR_6, VAR_4))
   FUNC_8(VAR_4, VAR_0);
  break;
 case 130:
  break;
 case 129:
 default:
  FUNC_8(VAR_4, VAR_0);
  VAR_8 = (FUNC_1(VAR_6->fc_iu.response[1]) & 0x00ff0000) >> 16;
  VAR_9 = (FUNC_1(VAR_6->fc_iu.response[1]) & 0x0000ff00) >> 8;
  FUNC_11(VAR_4, "ADISC failed: %s (%x:%x) %s (%x) %s (%x) rc=0x%02X\n",
    FUNC_5(FUNC_0(VAR_6->iu.status), FUNC_0(VAR_6->iu.error)),
    FUNC_0(VAR_6->iu.status), FUNC_0(VAR_6->iu.error),
    FUNC_6(VAR_8), VAR_8,
    FUNC_7(VAR_9), VAR_9, VAR_7);
  break;
 }

 FUNC_9(&VAR_4->kref, VAR_2);
 FUNC_4(VAR_3);
 FUNC_12(&VAR_5->work_wait_q);
}
