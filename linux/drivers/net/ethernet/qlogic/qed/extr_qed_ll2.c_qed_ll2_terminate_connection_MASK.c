
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct TYPE_7__ {scalar_t__ conn_type; } ;
struct TYPE_6__ {int b_cb_registered; int rx_sb_index; } ;
struct TYPE_5__ {int b_cb_registered; int tx_sb_index; } ;
struct qed_ll2_info {TYPE_3__ input; TYPE_2__ rx_queue; TYPE_1__ tx_queue; } ;
struct qed_hwfn {TYPE_4__* cdev; int p_ooo_info; } ;
struct TYPE_8__ {int mf_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qed_ll2_info*) ;
 scalar_t__ FUNC_1 (struct qed_ll2_info*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct qed_hwfn*,int ) ;
 struct qed_ll2_info* FUNC_3 (struct qed_hwfn*,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;
 int FUNC_5 (struct qed_hwfn*,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_7 (struct qed_hwfn*,int ) ;
 struct qed_ptt* FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ll2_info*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_ll2_info*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *) ;

int FUNC_14(void *VAR_8, u8 VAR_9)
{
 struct qed_hwfn *VAR_10 = VAR_8;
 struct qed_ll2_info *VAR_11 = ((void*)0);
 int VAR_12 = -VAR_1;
 struct qed_ptt *VAR_13;

 VAR_13 = FUNC_8(VAR_10);
 if (!VAR_13)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_10, VAR_9);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto out;
 }


 if (FUNC_1(VAR_11)) {
  VAR_11->tx_queue.b_cb_registered = 0;
  FUNC_12();
  VAR_12 = FUNC_11(VAR_10, VAR_11);
  if (VAR_12)
   goto out;

  FUNC_5(VAR_10, VAR_9);
  FUNC_2(VAR_10, VAR_11->tx_queue.tx_sb_index);
 }

 if (FUNC_0(VAR_11)) {
  VAR_11->rx_queue.b_cb_registered = 0;
  FUNC_12();
  VAR_12 = FUNC_10(VAR_10, VAR_11);
  if (VAR_12)
   goto out;

  FUNC_4(VAR_10, VAR_9);
  FUNC_2(VAR_10, VAR_11->rx_queue.rx_sb_index);
 }

 if (VAR_11->input.conn_type == VAR_5)
  FUNC_7(VAR_10, VAR_10->p_ooo_info);

 if (VAR_11->input.conn_type == VAR_4) {
  if (!FUNC_13(VAR_7, &VAR_10->cdev->mf_bits))
   FUNC_6(VAR_10->cdev, 0,
             VAR_6,
             VAR_2, 0);
  FUNC_6(VAR_10->cdev, 0,
            VAR_6,
            VAR_3, 0);
 }

out:
 FUNC_9(VAR_10, VAR_13);
 return VAR_12;
}
