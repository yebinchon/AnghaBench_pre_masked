
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_ll2_buffer {int list; int data; int phys_addr; } ;
struct qed_dev {TYPE_1__* ll2; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int lock; int rx_cnt; int rx_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_1,
     struct qed_ll2_buffer *VAR_2)
{
 FUNC_4(&VAR_1->ll2->lock);

 FUNC_1(&VAR_1->pdev->dev, VAR_2->phys_addr,
    VAR_1->ll2->rx_size, VAR_0);
 FUNC_2(VAR_2->data);
 FUNC_3(&VAR_2->list);

 VAR_1->ll2->rx_cnt--;
 if (!VAR_1->ll2->rx_cnt)
  FUNC_0(VAR_1, "All LL2 entries were removed\n");

 FUNC_5(&VAR_1->ll2->lock);

 return 0;
}
