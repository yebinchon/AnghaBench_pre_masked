
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {void* ioba; void* len; int cmd; int first; } ;
struct TYPE_10__ {int code; } ;
struct TYPE_11__ {TYPE_4__ rc; int number; int capability; } ;
struct TYPE_8__ {int capability; } ;
union ibmvnic_crq {TYPE_6__ query_ip_offload; TYPE_5__ request_capability_rsp; TYPE_2__ request_capability; } ;
typedef scalar_t__ u64 ;
struct ibmvnic_query_ip_offload_buffer {int dummy; } ;
struct TYPE_9__ {scalar_t__ mtu; } ;
struct ibmvnic_adapter {int wait_capability; int ip_offload_tok; struct ibmvnic_query_ip_offload_buffer ip_offload_buf; int running_cap_crqs; TYPE_3__ fallback; scalar_t__ promisc; scalar_t__ req_mtu; scalar_t__ req_rx_add_entries_per_subcrq; scalar_t__ req_tx_entries_per_subcrq; scalar_t__ req_rx_add_queues; scalar_t__ req_rx_queues; scalar_t__ req_tx_queues; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
typedef int newcrq ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;







 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int const FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,scalar_t__,long,char*) ;
 int FUNC_7 (struct device*,struct ibmvnic_query_ip_offload_buffer*,int,int ) ;
 scalar_t__ FUNC_8 (struct device*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_11 (struct ibmvnic_adapter*,int) ;
 int FUNC_12 (union ibmvnic_crq*,int ,int) ;
 int FUNC_13 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_14(union ibmvnic_crq *VAR_4,
       struct ibmvnic_adapter *VAR_5)
{
 struct device *VAR_6 = &VAR_5->vdev->dev;
 u64 *VAR_7;
 char *VAR_8;

 FUNC_0(&VAR_5->running_cap_crqs);
 switch (FUNC_2(VAR_4->request_capability_rsp.capability)) {
 case 129:
  VAR_7 = &VAR_5->req_tx_queues;
  VAR_8 = "tx";
  break;
 case 131:
  VAR_7 = &VAR_5->req_rx_queues;
  VAR_8 = "rx";
  break;
 case 132:
  VAR_7 = &VAR_5->req_rx_add_queues;
  VAR_8 = "rx_add";
  break;
 case 130:
  VAR_7 = &VAR_5->req_tx_entries_per_subcrq;
  VAR_8 = "tx_entries_per_subcrq";
  break;
 case 133:
  VAR_7 = &VAR_5->req_rx_add_entries_per_subcrq;
  VAR_8 = "rx_add_entries_per_subcrq";
  break;
 case 134:
  VAR_7 = &VAR_5->req_mtu;
  VAR_8 = "mtu";
  break;
 case 135:
  VAR_7 = &VAR_5->promisc;
  VAR_8 = "promisc";
  break;
 default:
  FUNC_5(VAR_6, "Got invalid cap request rsp %d\n",
   VAR_4->request_capability.capability);
  return;
 }

 switch (VAR_4->request_capability_rsp.rc.code) {
 case 128:
  break;
 case 136:
  FUNC_6(VAR_6, "req=%lld, rsp=%ld in %s queue, retrying.\n",
    *VAR_7,
    (long int)FUNC_3(VAR_4->request_capability_rsp.
            number), VAR_8);

  if (FUNC_2(VAR_4->request_capability_rsp.capability) ==
      134) {
   FUNC_13("mtu of %llu is not supported. Reverting.\n",
          *VAR_7);
   *VAR_7 = VAR_5->fallback.mtu;
  } else {
   *VAR_7 =
    FUNC_3(VAR_4->request_capability_rsp.number);
  }

  FUNC_11(VAR_5, 1);
  return;
 default:
  FUNC_5(VAR_6, "Error %d in request cap rsp\n",
   VAR_4->request_capability_rsp.rc.code);
  return;
 }


 if (FUNC_1(&VAR_5->running_cap_crqs) == 0) {
  union ibmvnic_crq VAR_9;
  int VAR_10 = sizeof(struct ibmvnic_query_ip_offload_buffer);
  struct ibmvnic_query_ip_offload_buffer *VAR_11 =
      &VAR_5->ip_offload_buf;

  VAR_5->wait_capability = 0;
  VAR_5->ip_offload_tok = FUNC_7(VAR_6, VAR_11,
        VAR_10,
        VAR_0);

  if (FUNC_8(VAR_6, VAR_5->ip_offload_tok)) {
   if (!FUNC_9(VAR_1))
    FUNC_5(VAR_6, "Couldn't map offload buffer\n");
   return;
  }

  FUNC_12(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.query_ip_offload.first = VAR_2;
  VAR_9.query_ip_offload.cmd = VAR_3;
  VAR_9.query_ip_offload.len = FUNC_4(VAR_10);
  VAR_9.query_ip_offload.ioba =
      FUNC_4(VAR_5->ip_offload_tok);

  FUNC_10(VAR_5, &VAR_9);
 }
}
