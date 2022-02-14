
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_pf_iov {int bulletins_phys; scalar_t__ p_bulletins; int bulletins_size; int mbx_reply_phys_addr; scalar_t__ mbx_reply_virt_addr; int mbx_reply_size; int mbx_msg_phys_addr; scalar_t__ mbx_msg_virt_addr; int mbx_msg_size; } ;
struct qed_hwfn {TYPE_2__* cdev; struct qed_pf_iov* pf_iov_info; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0)
{
 struct qed_pf_iov *VAR_1 = VAR_0->pf_iov_info;

 if (VAR_0->pf_iov_info->mbx_msg_virt_addr)
  FUNC_0(&VAR_0->cdev->pdev->dev,
      VAR_1->mbx_msg_size,
      VAR_1->mbx_msg_virt_addr,
      VAR_1->mbx_msg_phys_addr);

 if (VAR_0->pf_iov_info->mbx_reply_virt_addr)
  FUNC_0(&VAR_0->cdev->pdev->dev,
      VAR_1->mbx_reply_size,
      VAR_1->mbx_reply_virt_addr,
      VAR_1->mbx_reply_phys_addr);

 if (VAR_1->p_bulletins)
  FUNC_0(&VAR_0->cdev->pdev->dev,
      VAR_1->bulletins_size,
      VAR_1->p_bulletins,
      VAR_1->bulletins_phys);
}
