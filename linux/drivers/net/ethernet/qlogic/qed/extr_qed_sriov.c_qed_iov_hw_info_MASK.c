
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct qed_hwfn {int abs_pf_id; struct qed_dev* cdev; } ;
struct qed_dev {TYPE_1__* p_iov_info; int pdev; } ;
struct TYPE_3__ {int pos; int offset; void* first_vf_in_pf; int total_vfs; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct qed_dev*) ;

int FUNC_7(struct qed_hwfn *VAR_5)
{
 struct qed_dev *VAR_6 = VAR_5->cdev;
 int VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_5->cdev))
  return 0;


 VAR_7 = FUNC_5(VAR_5->cdev->pdev,
          VAR_3);
 if (!VAR_7) {
  FUNC_0(VAR_5, VAR_4, "No PCIe IOV support\n");
  return 0;
 }


 VAR_6->p_iov_info = FUNC_4(sizeof(*VAR_6->p_iov_info), VAR_1);
 if (!VAR_6->p_iov_info)
  return -VAR_0;

 VAR_6->p_iov_info->pos = VAR_7;

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8)
  return VAR_8;





 if (!VAR_6->p_iov_info->total_vfs) {
  FUNC_0(VAR_5, VAR_4,
      "IOV capabilities, but no VFs are published\n");
  FUNC_3(VAR_6->p_iov_info);
  VAR_6->p_iov_info = ((void*)0);
  return 0;
 }
 if (VAR_5->cdev->p_iov_info->offset < (256 - VAR_5->abs_pf_id)) {
  u32 VAR_9 = VAR_5->cdev->p_iov_info->offset +
       VAR_5->abs_pf_id - 16;

  VAR_6->p_iov_info->first_vf_in_pf = VAR_9;

  if (FUNC_2(VAR_5))
   VAR_6->p_iov_info->first_vf_in_pf -= VAR_2;
 } else {
  u32 VAR_10 = VAR_5->cdev->p_iov_info->offset +
       VAR_5->abs_pf_id - 256;

  VAR_6->p_iov_info->first_vf_in_pf = VAR_10;
 }

 FUNC_0(VAR_5, VAR_4,
     "First VF in hwfn 0x%08x\n",
     VAR_6->p_iov_info->first_vf_in_pf);

 return 0;
}
