
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_connect_and_offload_out {int connection_handle; } ;
struct tcp_connect_and_offload_in_v1 {int dummy; } ;
struct tcp_connect_and_offload_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct beiscsi_hba {TYPE_2__ ctrl; struct iscsi_endpoint** ep_array; } ;
struct beiscsi_endpoint {scalar_t__ ep_cid; int cid_vld; int fw_handle; struct beiscsi_hba* phba; } ;
struct be_dma_mem {unsigned int size; int dma; int * va; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct beiscsi_endpoint*) ;
 scalar_t__ FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int,char*,...) ;
 int FUNC_4 (struct beiscsi_hba*,unsigned int,int *,struct be_dma_mem*) ;
 int * FUNC_5 (int *,unsigned int,int *,int ) ;
 int FUNC_6 (int *,unsigned int,int *,int ) ;
 scalar_t__ FUNC_7 (struct beiscsi_hba*) ;
 int FUNC_8 (int *,int ,unsigned int) ;
 unsigned int FUNC_9 (struct beiscsi_hba*,struct sockaddr*,struct beiscsi_endpoint*,struct be_dma_mem*) ;

__attribute__((used)) static int FUNC_10(struct iscsi_endpoint *VAR_9,
        struct sockaddr *VAR_10,
        struct sockaddr *VAR_11, int VAR_12)
{
 struct beiscsi_endpoint *VAR_13 = VAR_9->dd_data;
 struct beiscsi_hba *VAR_14 = VAR_13->phba;
 struct tcp_connect_and_offload_out *VAR_15;
 struct be_dma_mem VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19 = -VAR_5;

 FUNC_3(VAR_14, VAR_8, VAR_0,
      "BS_%d : In beiscsi_open_conn\n");

 VAR_13->ep_cid = FUNC_2(VAR_14);
 if (VAR_13->ep_cid == VAR_2) {
  FUNC_3(VAR_14, VAR_7, VAR_0,
       "BS_%d : No free cid available\n");
  return VAR_19;
 }

 FUNC_3(VAR_14, VAR_8, VAR_0,
      "BS_%d : In beiscsi_open_conn, ep_cid=%d\n",
      VAR_13->ep_cid);

 VAR_14->ep_array[FUNC_0
         (VAR_13->ep_cid)] = VAR_9;

 VAR_13->cid_vld = 0;

 if (FUNC_7(VAR_14))
  VAR_18 = sizeof(struct tcp_connect_and_offload_in);
 else
  VAR_18 = sizeof(struct tcp_connect_and_offload_in_v1);

 VAR_16.va = FUNC_5(&VAR_14->ctrl.pdev->dev,
    VAR_18,
    &VAR_16.dma, VAR_6);
 if (VAR_16.va == ((void*)0)) {

  FUNC_3(VAR_14, VAR_7, VAR_0,
       "BS_%d : Failed to allocate memory for"
       " mgmt_open_connection\n");

  FUNC_1(VAR_13);
  return -VAR_5;
 }
 VAR_16.size = VAR_18;
 FUNC_8(VAR_16.va, 0, VAR_16.size);
 VAR_17 = FUNC_9(VAR_14, VAR_11, VAR_13, &VAR_16);
 if (!VAR_17) {
  FUNC_3(VAR_14, VAR_7, VAR_0,
       "BS_%d : mgmt_open_connection Failed for cid=%d\n",
       VAR_13->ep_cid);

  FUNC_6(&VAR_14->ctrl.pdev->dev, VAR_16.size,
        VAR_16.va, VAR_16.dma);
  FUNC_1(VAR_13);
  return -VAR_3;
 }

 VAR_19 = FUNC_4(VAR_14, VAR_17, ((void*)0), &VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_14, VAR_7,
       VAR_0 | VAR_1,
       "BS_%d : mgmt_open_connection Failed");

  if (VAR_19 != -VAR_4)
   FUNC_6(&VAR_14->ctrl.pdev->dev,
     VAR_16.size, VAR_16.va,
     VAR_16.dma);

  FUNC_1(VAR_13);
  return VAR_19;
 }

 VAR_15 = (struct tcp_connect_and_offload_out *)VAR_16.va;
 VAR_13 = VAR_9->dd_data;
 VAR_13->fw_handle = VAR_15->connection_handle;
 VAR_13->cid_vld = 1;
 FUNC_3(VAR_14, VAR_8, VAR_0,
      "BS_%d : mgmt_open_connection Success\n");

 FUNC_6(&VAR_14->ctrl.pdev->dev, VAR_16.size,
       VAR_16.va, VAR_16.dma);
 return 0;
}
