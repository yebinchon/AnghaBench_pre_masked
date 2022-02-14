
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qed_txq_start_ret_params {int dummy; } ;
struct qed_queue_start_common_params {int queue_id; TYPE_2__* p_sb; int vport_id; int tc; int stats_id; } ;
struct TYPE_3__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int igu_sb_id; } ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int FUNC_1 (struct qed_dev*,int,char*,int,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_queue_start_common_params*,int ,int ,int ,struct qed_txq_start_ret_params*) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_2,
    u8 VAR_3,
    struct qed_queue_start_common_params *VAR_4,
    dma_addr_t VAR_5,
    u16 VAR_6,
    struct qed_txq_start_ret_params *VAR_7)
{
 struct qed_hwfn *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = VAR_3 % VAR_2->num_hwfns;
 VAR_8 = &VAR_2->hwfns[VAR_10];
 VAR_4->queue_id = VAR_4->queue_id / VAR_2->num_hwfns;
 VAR_4->stats_id = VAR_4->vport_id;

 VAR_9 = FUNC_2(VAR_8,
        VAR_8->hw_info.opaque_fid,
        VAR_4, VAR_4->tc,
        VAR_5, VAR_6, VAR_7);

 if (VAR_9) {
  FUNC_0(VAR_2, "Failed to start TXQ#%d\n", VAR_4->queue_id);
  return VAR_9;
 }

 FUNC_1(VAR_2, (VAR_1 | VAR_0),
     "Started TX-Q %d [rss_num %d] on V-PORT %d and SB igu %d\n",
     VAR_4->queue_id, VAR_3, VAR_4->vport_id,
     VAR_4->p_sb->igu_sb_id);

 return 0;
}
