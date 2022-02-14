
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qed_hwfn {TYPE_3__* pf_iov_info; TYPE_4__* cdev; } ;
struct TYPE_8__ {TYPE_1__* p_iov_info; } ;
struct TYPE_7__ {TYPE_2__* vfs_array; } ;
struct TYPE_6__ {scalar_t__ b_malicious; int b_init; } ;
struct TYPE_5__ {int total_vfs; } ;


 int FUNC_0 (TYPE_4__*,char*) ;

bool FUNC_1(struct qed_hwfn *VAR_0,
      int VAR_1,
      bool VAR_2, bool VAR_3)
{
 if (!VAR_0->pf_iov_info) {
  FUNC_0(VAR_0->cdev, "No iov info\n");
  return 0;
 }

 if ((VAR_1 >= VAR_0->cdev->p_iov_info->total_vfs) ||
     (VAR_1 < 0))
  return 0;

 if ((!VAR_0->pf_iov_info->vfs_array[VAR_1].b_init) &&
     VAR_2)
  return 0;

 if ((VAR_0->pf_iov_info->vfs_array[VAR_1].b_malicious) &&
     VAR_3)
  return 0;

 return 1;
}
