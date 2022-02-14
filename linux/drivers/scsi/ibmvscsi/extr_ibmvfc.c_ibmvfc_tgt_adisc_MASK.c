
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ expires; } ;
struct ibmvfc_target {int cancel_key; int kref; TYPE_6__ timer; int scsi_id; struct ibmvfc_host* vhost; } ;
struct TYPE_12__ {void** payload; } ;
struct TYPE_11__ {void* cancel_key; int scsi_id; void* flags; } ;
struct ibmvfc_passthru_mad {TYPE_3__ fc_iu; TYPE_2__ iu; } ;
struct ibmvfc_host {scalar_t__ discovery_threads; TYPE_5__* login_buf; } ;
struct TYPE_10__ {struct ibmvfc_passthru_mad passthru; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;
struct TYPE_13__ {int scsi_id; int node_name; int port_name; } ;
struct TYPE_14__ {TYPE_4__ resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ VAR_8 ;
 struct ibmvfc_event* FUNC_5 (struct ibmvfc_host*) ;
 int FUNC_6 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_7 (struct ibmvfc_event*) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_9 (struct ibmvfc_target*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (void**,int *,int) ;
 int FUNC_13 (TYPE_6__*,scalar_t__) ;
 int FUNC_14 (struct ibmvfc_target*,char*) ;
 scalar_t__ FUNC_15 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_16(struct ibmvfc_target *VAR_12)
{
 struct ibmvfc_passthru_mad *VAR_13;
 struct ibmvfc_host *VAR_14 = VAR_12->vhost;
 struct ibmvfc_event *VAR_15;

 if (VAR_14->discovery_threads >= VAR_8)
  return;

 FUNC_10(&VAR_12->kref);
 VAR_15 = FUNC_5(VAR_14);
 VAR_14->discovery_threads++;
 FUNC_6(VAR_15, VAR_10, VAR_5);
 VAR_15->tgt = VAR_12;

 FUNC_7(VAR_15);
 VAR_13 = &VAR_15->iu.passthru;
 VAR_13->iu.flags = FUNC_2(VAR_4);
 VAR_13->iu.scsi_id = FUNC_3(VAR_12->scsi_id);
 VAR_13->iu.cancel_key = FUNC_2(VAR_12->cancel_key);

 VAR_13->fc_iu.payload[0] = FUNC_2(VAR_1);
 FUNC_12(&VAR_13->fc_iu.payload[2], &VAR_14->login_buf->resp.port_name,
        sizeof(VAR_14->login_buf->resp.port_name));
 FUNC_12(&VAR_13->fc_iu.payload[4], &VAR_14->login_buf->resp.node_name,
        sizeof(VAR_14->login_buf->resp.node_name));
 VAR_13->fc_iu.payload[6] = FUNC_2(FUNC_1(VAR_14->login_buf->resp.scsi_id) & 0x00ffffff);

 if (FUNC_15(&VAR_12->timer))
  FUNC_13(&VAR_12->timer, VAR_11 + (VAR_3 * VAR_0));
 else {
  VAR_12->timer.expires = VAR_11 + (VAR_3 * VAR_0);
  FUNC_0(&VAR_12->timer);
 }

 FUNC_9(VAR_12, VAR_6);
 if (FUNC_8(VAR_15, VAR_14, VAR_2)) {
  VAR_14->discovery_threads--;
  FUNC_4(&VAR_12->timer);
  FUNC_9(VAR_12, VAR_7);
  FUNC_11(&VAR_12->kref, VAR_9);
 } else
  FUNC_14(VAR_12, "Sent ADISC\n");
}
