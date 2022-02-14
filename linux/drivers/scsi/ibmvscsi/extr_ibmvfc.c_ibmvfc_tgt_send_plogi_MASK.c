
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibmvfc_target {int kref; int scsi_id; scalar_t__ logo_rcvd; struct ibmvfc_host* vhost; } ;
struct TYPE_4__ {int length; void* opcode; void* version; } ;
struct ibmvfc_port_login {int scsi_id; TYPE_2__ common; } ;
struct ibmvfc_host {scalar_t__ discovery_threads; } ;
struct TYPE_3__ {struct ibmvfc_port_login plogi; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ibmvfc_event* FUNC_3 (struct ibmvfc_host*) ;
 int FUNC_4 (struct ibmvfc_event*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_target*,int ) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct ibmvfc_port_login*,int ,int) ;
 int FUNC_10 (struct ibmvfc_target*,char*) ;

__attribute__((used)) static void FUNC_11(struct ibmvfc_target *VAR_8)
{
 struct ibmvfc_port_login *VAR_9;
 struct ibmvfc_host *VAR_10 = VAR_8->vhost;
 struct ibmvfc_event *VAR_11;

 if (VAR_10->discovery_threads >= VAR_5)
  return;

 FUNC_7(&VAR_8->kref);
 VAR_8->logo_rcvd = 0;
 VAR_11 = FUNC_3(VAR_10);
 VAR_10->discovery_threads++;
 FUNC_6(VAR_8, VAR_2);
 FUNC_4(VAR_11, VAR_7, VAR_0);
 VAR_11->tgt = VAR_8;
 VAR_9 = &VAR_11->iu.plogi;
 FUNC_9(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->common.version = FUNC_1(1);
 VAR_9->common.opcode = FUNC_1(VAR_1);
 VAR_9->common.length = FUNC_0(sizeof(*VAR_9));
 VAR_9->scsi_id = FUNC_2(VAR_8->scsi_id);

 if (FUNC_5(VAR_11, VAR_10, VAR_4)) {
  VAR_10->discovery_threads--;
  FUNC_6(VAR_8, VAR_3);
  FUNC_8(&VAR_8->kref, VAR_6);
 } else
  FUNC_10(VAR_8, "Sent port login\n");
}
