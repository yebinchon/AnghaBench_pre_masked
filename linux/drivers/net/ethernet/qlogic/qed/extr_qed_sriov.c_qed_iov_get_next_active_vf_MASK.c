
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qed_hwfn {TYPE_1__* cdev; } ;
struct qed_hw_sriov_info {scalar_t__ total_vfs; } ;
struct TYPE_2__ {struct qed_hw_sriov_info* p_iov_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,scalar_t__,int,int) ;

u16 FUNC_1(struct qed_hwfn *VAR_1, u16 VAR_2)
{
 struct qed_hw_sriov_info *VAR_3 = VAR_1->cdev->p_iov_info;
 u16 VAR_4;

 if (!VAR_3)
  goto out;

 for (VAR_4 = VAR_2; VAR_4 < VAR_3->total_vfs; VAR_4++)
  if (FUNC_0(VAR_1, VAR_2, 1, 0))
   return VAR_4;

out:
 return VAR_0;
}
