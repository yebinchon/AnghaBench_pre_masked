
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qed_ooo_buffer {int rx_buffer_phys_addr; int rx_buffer_virt_addr; int rx_buffer_size; } ;
struct TYPE_4__ {scalar_t__ conn_type; } ;
struct qed_ll2_info {TYPE_1__ input; } ;
struct qed_hwfn {TYPE_3__* cdev; int p_ooo_info; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct qed_ooo_buffer*) ;
 struct qed_ooo_buffer* FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_1,
        struct qed_ll2_info *VAR_2)
{
 struct qed_ooo_buffer *VAR_3;

 if (VAR_2->input.conn_type != VAR_0)
  return;

 FUNC_3(VAR_1, VAR_1->p_ooo_info);
 while ((VAR_3 = FUNC_2(VAR_1,
         VAR_1->p_ooo_info))) {
  FUNC_0(&VAR_1->cdev->pdev->dev,
      VAR_3->rx_buffer_size,
      VAR_3->rx_buffer_virt_addr,
      VAR_3->rx_buffer_phys_addr);
  FUNC_1(VAR_3);
 }
}
