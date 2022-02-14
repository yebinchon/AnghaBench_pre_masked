
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* len; void* ioba; int cmd; int first; } ;
union ibmvnic_crq {TYPE_4__ login; } ;
typedef int u8 ;
typedef int u64 ;
struct vnic_login_client_data {int dummy; } ;
struct ibmvnic_login_rsp_buffer {void* client_data_len; void* client_data_offset; void* login_rsp_len; void* login_rsp_ioba; void* off_rxcomp_subcrqs; void* num_rxcomp_subcrqs; void* off_txcomp_subcrqs; void* num_txcomp_subcrqs; void* version; void* len; } ;
struct ibmvnic_login_buffer {void* client_data_len; void* client_data_offset; void* login_rsp_len; void* login_rsp_ioba; void* off_rxcomp_subcrqs; void* num_rxcomp_subcrqs; void* off_txcomp_subcrqs; void* num_txcomp_subcrqs; void* version; void* len; } ;
struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; size_t login_buf_token; size_t login_buf_sz; size_t login_rsp_buf_token; size_t login_rsp_buf_sz; struct ibmvnic_login_rsp_buffer* login_buf; int netdev; TYPE_3__** rx_scrq; TYPE_2__** tx_scrq; struct ibmvnic_login_rsp_buffer* login_rsp_buf; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
typedef size_t dma_addr_t ;
typedef int crq ;
typedef int __be64 ;
struct TYPE_7__ {int crq_num; } ;
struct TYPE_6__ {int crq_num; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 size_t FUNC_3 (struct device*,struct ibmvnic_login_rsp_buffer*,size_t,int ) ;
 scalar_t__ FUNC_4 (struct device*,size_t) ;
 int FUNC_5 (struct device*,size_t,size_t,int ) ;
 int FUNC_6 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_7 (struct ibmvnic_login_rsp_buffer*) ;
 struct ibmvnic_login_rsp_buffer* FUNC_8 (size_t,int ) ;
 struct ibmvnic_login_rsp_buffer* FUNC_9 (size_t,int ) ;
 int FUNC_10 (union ibmvnic_crq*,int ,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct ibmvnic_adapter*) ;
 int FUNC_14 (struct ibmvnic_adapter*,struct vnic_login_client_data*) ;
 int FUNC_15 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_16(struct ibmvnic_adapter *VAR_7)
{
 struct ibmvnic_login_rsp_buffer *VAR_8;
 struct ibmvnic_login_buffer *VAR_9;
 struct device *VAR_10 = &VAR_7->vdev->dev;
 dma_addr_t VAR_11;
 dma_addr_t VAR_12;
 size_t VAR_13;
 union ibmvnic_crq VAR_14;
 size_t VAR_15;
 __be64 *VAR_16;
 __be64 *VAR_17;
 int VAR_18;
 struct vnic_login_client_data *VAR_19;
 int VAR_20;

 if (!VAR_7->tx_scrq || !VAR_7->rx_scrq) {
  FUNC_12(VAR_7->netdev,
      "RX or TX queues are not allocated, device login failed\n");
  return -1;
 }

 FUNC_13(VAR_7);
 VAR_18 = FUNC_15(VAR_7);

 VAR_15 =
     sizeof(struct ibmvnic_login_buffer) +
     sizeof(u64) * (VAR_7->req_tx_queues + VAR_7->req_rx_queues) +
     VAR_18;

 VAR_9 = FUNC_9(VAR_15, VAR_2);
 if (!VAR_9)
  goto buf_alloc_failed;

 VAR_12 = FUNC_3(VAR_10, VAR_9, VAR_15,
          VAR_1);
 if (FUNC_4(VAR_10, VAR_12)) {
  FUNC_2(VAR_10, "Couldn't map login buffer\n");
  goto buf_map_failed;
 }

 VAR_13 = sizeof(struct ibmvnic_login_rsp_buffer) +
     sizeof(u64) * VAR_7->req_tx_queues +
     sizeof(u64) * VAR_7->req_rx_queues +
     sizeof(u64) * VAR_7->req_rx_queues +
     sizeof(u8) * VAR_4;

 VAR_8 = FUNC_8(VAR_13, VAR_2);
 if (!VAR_8)
  goto buf_rsp_alloc_failed;

 VAR_11 = FUNC_3(VAR_10, VAR_8,
       VAR_13, VAR_0);
 if (FUNC_4(VAR_10, VAR_11)) {
  FUNC_2(VAR_10, "Couldn't map login rsp buffer\n");
  goto buf_rsp_map_failed;
 }

 VAR_7->login_buf = VAR_9;
 VAR_7->login_buf_token = VAR_12;
 VAR_7->login_buf_sz = VAR_15;
 VAR_7->login_rsp_buf = VAR_8;
 VAR_7->login_rsp_buf_token = VAR_11;
 VAR_7->login_rsp_buf_sz = VAR_13;

 VAR_9->len = FUNC_0(VAR_15);
 VAR_9->version = FUNC_0(VAR_5);
 VAR_9->num_txcomp_subcrqs = FUNC_0(VAR_7->req_tx_queues);
 VAR_9->off_txcomp_subcrqs =
     FUNC_0(sizeof(struct ibmvnic_login_buffer));
 VAR_9->num_rxcomp_subcrqs = FUNC_0(VAR_7->req_rx_queues);
 VAR_9->off_rxcomp_subcrqs =
     FUNC_0(sizeof(struct ibmvnic_login_buffer) +
   sizeof(u64) * VAR_7->req_tx_queues);
 VAR_9->login_rsp_ioba = FUNC_0(VAR_11);
 VAR_9->login_rsp_len = FUNC_0(VAR_13);

 VAR_16 = (__be64 *)((char *)VAR_9 +
          sizeof(struct ibmvnic_login_buffer));
 VAR_17 = (__be64 *)((char *)VAR_9 +
          sizeof(struct ibmvnic_login_buffer) +
          sizeof(u64) * VAR_7->req_tx_queues);

 for (VAR_20 = 0; VAR_20 < VAR_7->req_tx_queues; VAR_20++) {
  if (VAR_7->tx_scrq[VAR_20]) {
   VAR_16[VAR_20] = FUNC_1(VAR_7->tx_scrq[VAR_20]->
         crq_num);
  }
 }

 for (VAR_20 = 0; VAR_20 < VAR_7->req_rx_queues; VAR_20++) {
  if (VAR_7->rx_scrq[VAR_20]) {
   VAR_17[VAR_20] = FUNC_1(VAR_7->rx_scrq[VAR_20]->
         crq_num);
  }
 }


 VAR_19 = (struct vnic_login_client_data *)
  ((char *)VAR_17 + (sizeof(u64) * VAR_7->req_rx_queues));
 VAR_9->client_data_offset =
   FUNC_0((char *)VAR_19 - (char *)VAR_9);
 VAR_9->client_data_len = FUNC_0(VAR_18);

 FUNC_14(VAR_7, VAR_19);

 FUNC_11(VAR_7->netdev, "Login Buffer:\n");
 for (VAR_20 = 0; VAR_20 < (VAR_7->login_buf_sz - 1) / 8 + 1; VAR_20++) {
  FUNC_11(VAR_7->netdev, "%016lx\n",
      ((unsigned long int *)(VAR_7->login_buf))[VAR_20]);
 }

 FUNC_10(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.login.first = VAR_3;
 VAR_14.login.cmd = VAR_6;
 VAR_14.login.ioba = FUNC_0(VAR_12);
 VAR_14.login.len = FUNC_0(VAR_15);
 FUNC_6(VAR_7, &VAR_14);

 return 0;

buf_rsp_map_failed:
 FUNC_7(VAR_8);
buf_rsp_alloc_failed:
 FUNC_5(VAR_10, VAR_12, VAR_15, VAR_1);
buf_map_failed:
 FUNC_7(VAR_9);
buf_alloc_failed:
 return -1;
}
