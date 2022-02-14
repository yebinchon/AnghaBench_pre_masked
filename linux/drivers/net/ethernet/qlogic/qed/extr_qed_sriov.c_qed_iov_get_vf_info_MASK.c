
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct qed_vf_info {int dummy; } ;
struct qed_hwfn {TYPE_1__* pf_iov_info; int cdev; } ;
struct TYPE_2__ {struct qed_vf_info* vfs_array; } ;


 int FUNC_0 (struct qed_hwfn*,char*,size_t) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,size_t,int,int) ;

__attribute__((used)) static struct qed_vf_info *FUNC_3(struct qed_hwfn *VAR_0,
            u16 VAR_1,
            bool VAR_2)
{
 struct qed_vf_info *VAR_3 = ((void*)0);

 if (!VAR_0->pf_iov_info) {
  FUNC_1(VAR_0->cdev, "No iov info\n");
  return ((void*)0);
 }

 if (FUNC_2(VAR_0, VAR_1,
      VAR_2, 0))
  VAR_3 = &VAR_0->pf_iov_info->vfs_array[VAR_1];
 else
  FUNC_0(VAR_0, "qed_iov_get_vf_info: VF[%d] is not enabled\n",
         VAR_1);

 return VAR_3;
}
