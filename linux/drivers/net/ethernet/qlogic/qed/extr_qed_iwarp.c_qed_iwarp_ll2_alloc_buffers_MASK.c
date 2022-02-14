
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_iwarp_ll2_buff {int buff_size; int data; int data_phys_addr; } ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct qed_iwarp_ll2_buff*) ;
 struct qed_iwarp_ll2_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_iwarp_ll2_buff*,int ) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_2,
       int VAR_3, int VAR_4, u8 VAR_5)
{
 struct qed_iwarp_ll2_buff *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
  if (!VAR_6) {
   VAR_7 = -VAR_0;
   break;
  }

  VAR_6->data = FUNC_0(&VAR_2->cdev->pdev->dev,
        VAR_4,
        &VAR_6->data_phys_addr,
        VAR_1);
  if (!VAR_6->data) {
   FUNC_1(VAR_6);
   VAR_7 = -VAR_0;
   break;
  }

  VAR_6->buff_size = VAR_4;
  VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_5);
  if (VAR_7)

   break;
 }
 return VAR_7;
}
