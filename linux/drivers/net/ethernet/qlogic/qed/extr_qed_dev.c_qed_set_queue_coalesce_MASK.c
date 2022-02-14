
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct qed_queue_cid {struct qed_hwfn* p_owner; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
struct TYPE_2__ {void* tx_coalesce_usecs; void* rx_coalesce_usecs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct qed_ptt* FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,void*,struct qed_queue_cid*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,void*,struct qed_queue_cid*) ;
 int FUNC_5 (struct qed_hwfn*,void*,void*,struct qed_queue_cid*) ;

int FUNC_6(u16 VAR_1, u16 VAR_2, void *VAR_3)
{
 struct qed_queue_cid *VAR_4 = VAR_3;
 struct qed_hwfn *VAR_5;
 struct qed_ptt *VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_4->p_owner;

 if (FUNC_0(VAR_5->cdev))
  return FUNC_5(VAR_5, VAR_1, VAR_2, VAR_4);

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_1) {
  VAR_7 = FUNC_3(VAR_5, VAR_6, VAR_1, VAR_4);
  if (VAR_7)
   goto out;
  VAR_5->cdev->rx_coalesce_usecs = VAR_1;
 }

 if (VAR_2) {
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_2, VAR_4);
  if (VAR_7)
   goto out;
  VAR_5->cdev->tx_coalesce_usecs = VAR_2;
 }
out:
 FUNC_2(VAR_5, VAR_6);
 return VAR_7;
}
