
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union core_rx_cqe_union {TYPE_1__ rx_cqe_sp; } ;
typedef scalar_t__ u16 ;
struct qed_ll2_rx_queue {int lock; int rcq_chain; int * p_fw_cons; } ;
struct qed_ll2_info {struct qed_ll2_rx_queue rx_queue; } ;
struct qed_hwfn {int dummy; } ;





 int FUNC_0 (struct qed_hwfn*,int ,char*,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ll2_info*,union core_rx_cqe_union*,unsigned long*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ll2_info*,union core_rx_cqe_union*,unsigned long*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct qed_hwfn *VAR_2, void *VAR_3)
{
 struct qed_ll2_info *VAR_4 = (struct qed_ll2_info *)VAR_3;
 struct qed_ll2_rx_queue *VAR_5 = &VAR_4->rx_queue;
 union core_rx_cqe_union *VAR_6 = ((void*)0);
 u16 VAR_7 = 0, VAR_8 = 0;
 unsigned long VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_6(&VAR_5->lock, VAR_9);
 VAR_7 = FUNC_1(*VAR_5->p_fw_cons);
 VAR_8 = FUNC_3(&VAR_5->rcq_chain);

 while (VAR_7 != VAR_8) {
  bool VAR_11 = (VAR_7 == VAR_8);

  VAR_6 =
      (union core_rx_cqe_union *)
      FUNC_2(&VAR_5->rcq_chain);
  VAR_8 = FUNC_3(&VAR_5->rcq_chain);

  FUNC_0(VAR_2,
      VAR_1,
      "LL2 [sw. cons %04x, fw. at %04x] - Got Packet of type %02x\n",
      VAR_8, VAR_7, VAR_6->rx_cqe_sp.type);

  switch (VAR_6->rx_cqe_sp.type) {
  case 128:
   VAR_10 = FUNC_4(VAR_2, VAR_4,
           VAR_6, &VAR_9);
   break;
  case 130:
  case 129:
   VAR_10 = FUNC_5(VAR_2, VAR_4,
          VAR_6, &VAR_9,
          VAR_11);
   break;
  default:
   VAR_10 = -VAR_0;
  }
 }

 FUNC_7(&VAR_5->lock, VAR_9);
 return VAR_10;
}
