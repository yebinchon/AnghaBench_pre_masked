
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_ll2_rx_packet {int dummy; } ;
struct TYPE_4__ {int rx_num_desc; int conn_type; } ;
struct TYPE_3__ {int rcq_chain; struct qed_ll2_rx_packet* descq_array; int rxq_chain; } ;
struct qed_ll2_info {TYPE_2__ input; TYPE_1__ rx_queue; } ;
struct qed_hwfn {int cdev; } ;
struct core_rx_fast_path_cqe {int dummy; } ;
struct core_rx_bd {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qed_ll2_rx_packet* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct qed_hwfn *VAR_7,
         struct qed_ll2_info *VAR_8)
{
 struct qed_ll2_rx_packet *VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;

 if (!VAR_8->input.rx_num_desc)
  goto out;

 VAR_11 = FUNC_3(VAR_7->cdev,
        VAR_5,
        VAR_3,
        VAR_2,
        VAR_8->input.rx_num_desc,
        sizeof(struct core_rx_bd),
        &VAR_8->rx_queue.rxq_chain, ((void*)0));
 if (VAR_11) {
  FUNC_0(VAR_7, "Failed to allocate ll2 rxq chain\n");
  goto out;
 }

 VAR_10 = FUNC_4(&VAR_8->rx_queue.rxq_chain);
 VAR_9 = FUNC_2(VAR_10, sizeof(struct qed_ll2_rx_packet),
     VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  FUNC_0(VAR_7, "Failed to allocate ll2 Rx desc\n");
  goto out;
 }
 VAR_8->rx_queue.descq_array = VAR_9;

 VAR_11 = FUNC_3(VAR_7->cdev,
        VAR_5,
        VAR_4,
        VAR_2,
        VAR_8->input.rx_num_desc,
        sizeof(struct core_rx_fast_path_cqe),
        &VAR_8->rx_queue.rcq_chain, ((void*)0));
 if (VAR_11) {
  FUNC_0(VAR_7, "Failed to allocate ll2 rcq chain\n");
  goto out;
 }

 FUNC_1(VAR_7, VAR_6,
     "Allocated LL2 Rxq [Type %08x] with 0x%08x buffers\n",
     VAR_8->input.conn_type, VAR_8->input.rx_num_desc);

out:
 return VAR_11;
}
