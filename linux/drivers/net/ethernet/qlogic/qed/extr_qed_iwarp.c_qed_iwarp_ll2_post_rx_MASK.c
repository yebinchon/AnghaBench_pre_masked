
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qed_iwarp_ll2_buff {int data_phys_addr; int data; scalar_t__ buff_size; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (struct qed_iwarp_ll2_buff*) ;
 int FUNC_3 (struct qed_hwfn*,int ,int ,int ,struct qed_iwarp_ll2_buff*,int) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_0,
        struct qed_iwarp_ll2_buff *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_2, VAR_1->data_phys_addr,
        (u16)VAR_1->buff_size, VAR_1, 1);
 if (VAR_3) {
  FUNC_0(VAR_0,
     "Failed to repost rx buffer to ll2 rc = %d, handle=%d\n",
     VAR_3, VAR_2);
  FUNC_1(&VAR_0->cdev->pdev->dev, VAR_1->buff_size,
      VAR_1->data, VAR_1->data_phys_addr);
  FUNC_2(VAR_1);
 }

 return VAR_3;
}
