
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_iwarp_ll2_buff {int data_phys_addr; int data; int buff_size; struct qed_iwarp_ll2_buff* piggy_buf; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct qed_iwarp_ll2_buff*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u8 VAR_1,
         void *VAR_2, dma_addr_t VAR_3,
         bool VAR_4, bool VAR_5)
{
 struct qed_iwarp_ll2_buff *VAR_6 = VAR_2;
 struct qed_hwfn *VAR_7 = VAR_0;

 if (!VAR_6)
  return;

 if (VAR_6->piggy_buf) {
  FUNC_0(&VAR_7->cdev->pdev->dev,
      VAR_6->piggy_buf->buff_size,
      VAR_6->piggy_buf->data,
      VAR_6->piggy_buf->data_phys_addr);

  FUNC_1(VAR_6->piggy_buf);
 }

 FUNC_0(&VAR_7->cdev->pdev->dev, VAR_6->buff_size,
     VAR_6->data, VAR_6->data_phys_addr);

 FUNC_1(VAR_6);
}
