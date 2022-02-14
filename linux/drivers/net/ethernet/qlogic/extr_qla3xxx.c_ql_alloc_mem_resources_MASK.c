
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ql3_adapter {int num_lbufq_entries; int num_large_buffers; int shadow_reg_phy_addr; int * shadow_reg_virt_addr; int pdev; int rsp_q_virt_addr; int rsp_current; TYPE_1__* ndev; scalar_t__ req_consumer_index_phy_addr_low; scalar_t__ rsp_producer_index_phy_addr_low; int req_consumer_index_phy_addr_high; int rsp_producer_index_phy_addr_high; int * preq_consumer_index; int * prsp_producer_index; scalar_t__ lrg_buffer_len; scalar_t__ max_frame_size; } ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int * FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_5 (struct ql3_adapter*) ;
 scalar_t__ FUNC_6 (struct ql3_adapter*) ;
 scalar_t__ FUNC_7 (struct ql3_adapter*) ;
 scalar_t__ FUNC_8 (struct ql3_adapter*) ;
 scalar_t__ FUNC_9 (struct ql3_adapter*) ;
 int FUNC_10 (struct ql3_adapter*) ;
 int FUNC_11 (struct ql3_adapter*) ;
 int FUNC_12 (struct ql3_adapter*) ;
 int FUNC_13 (struct ql3_adapter*) ;

__attribute__((used)) static int FUNC_14(struct ql3_adapter *VAR_11)
{
 if (VAR_11->ndev->mtu == VAR_4) {
  VAR_11->num_lbufq_entries = VAR_5;
  VAR_11->lrg_buffer_len = VAR_4;
 } else if (VAR_11->ndev->mtu == VAR_2) {



  VAR_11->num_lbufq_entries = VAR_3;
  VAR_11->lrg_buffer_len = VAR_2;
 } else {
  FUNC_2(VAR_11->ndev, "Invalid mtu size: %d.  Only %d and %d are accepted.\n",
      VAR_11->ndev->mtu, VAR_4, VAR_2);
  return -VAR_0;
 }
 VAR_11->num_large_buffers =
  VAR_11->num_lbufq_entries * VAR_7;
 VAR_11->lrg_buffer_len += VAR_9 + VAR_10 + VAR_8;
 VAR_11->max_frame_size =
  (VAR_11->lrg_buffer_len - VAR_8) + VAR_1;






 VAR_11->shadow_reg_virt_addr =
  FUNC_3(VAR_11->pdev,
         VAR_6, &VAR_11->shadow_reg_phy_addr);

 if (VAR_11->shadow_reg_virt_addr != ((void*)0)) {
  VAR_11->preq_consumer_index = VAR_11->shadow_reg_virt_addr;
  VAR_11->req_consumer_index_phy_addr_high =
   FUNC_1(VAR_11->shadow_reg_phy_addr);
  VAR_11->req_consumer_index_phy_addr_low =
   FUNC_0(VAR_11->shadow_reg_phy_addr);

  VAR_11->prsp_producer_index =
   (__le32 *) (((u8 *) VAR_11->preq_consumer_index) + 8);
  VAR_11->rsp_producer_index_phy_addr_high =
   VAR_11->req_consumer_index_phy_addr_high;
  VAR_11->rsp_producer_index_phy_addr_low =
   VAR_11->req_consumer_index_phy_addr_low + 8;
 } else {
  FUNC_2(VAR_11->ndev, "shadowReg Alloc failed\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_11) != 0) {
  FUNC_2(VAR_11->ndev, "ql_alloc_net_req_rsp_queues failed\n");
  goto err_req_rsp;
 }

 if (FUNC_5(VAR_11) != 0) {
  FUNC_2(VAR_11->ndev, "ql_alloc_buffer_queues failed\n");
  goto err_buffer_queues;
 }

 if (FUNC_8(VAR_11) != 0) {
  FUNC_2(VAR_11->ndev, "ql_alloc_small_buffers failed\n");
  goto err_small_buffers;
 }

 if (FUNC_6(VAR_11) != 0) {
  FUNC_2(VAR_11->ndev, "ql_alloc_large_buffers failed\n");
  goto err_small_buffers;
 }


 FUNC_13(VAR_11);
 if (FUNC_9(VAR_11))
  goto err_free_list;

 VAR_11->rsp_current = VAR_11->rsp_q_virt_addr;

 return 0;
err_free_list:
 FUNC_12(VAR_11);
err_small_buffers:
 FUNC_10(VAR_11);
err_buffer_queues:
 FUNC_11(VAR_11);
err_req_rsp:
 FUNC_4(VAR_11->pdev,
       VAR_6,
       VAR_11->shadow_reg_virt_addr,
       VAR_11->shadow_reg_phy_addr);

 return -VAR_0;
}
