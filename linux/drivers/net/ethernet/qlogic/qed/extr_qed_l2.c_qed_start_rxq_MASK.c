
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qed_rxq_start_ret_params {int dummy; } ;
struct qed_queue_start_common_params {int queue_id; TYPE_2__* p_sb; int vport_id; int stats_id; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int igu_sb_id; } ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int FUNC_1 (struct qed_dev*,int,char*,int,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_queue_start_common_params*,int ,int ,int ,int ,struct qed_rxq_start_ret_params*) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_2,
    u8 VAR_3,
    struct qed_queue_start_common_params *VAR_4,
    u16 VAR_5,
    dma_addr_t VAR_6,
    dma_addr_t VAR_7,
    u16 VAR_8,
    struct qed_rxq_start_ret_params *VAR_9)
{
 struct qed_hwfn *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = VAR_3 % VAR_2->num_hwfns;
 VAR_10 = &VAR_2->hwfns[VAR_12];

 VAR_4->queue_id = VAR_4->queue_id / VAR_2->num_hwfns;
 VAR_4->stats_id = VAR_4->vport_id;

 VAR_11 = FUNC_2(VAR_10,
        VAR_10->hw_info.opaque_fid,
        VAR_4,
        VAR_5,
        VAR_6,
        VAR_7, VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_2, "Failed to start RXQ#%d\n", VAR_4->queue_id);
  return VAR_11;
 }

 FUNC_1(VAR_2, (VAR_1 | VAR_0),
     "Started RX-Q %d [rss_num %d] on V-PORT %d and SB igu %d\n",
     VAR_4->queue_id, VAR_3, VAR_4->vport_id,
     VAR_4->p_sb->igu_sb_id);

 return 0;
}
