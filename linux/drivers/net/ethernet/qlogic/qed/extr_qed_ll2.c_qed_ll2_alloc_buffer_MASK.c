
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_dev {TYPE_2__* pdev; TYPE_1__* ll2; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int rx_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_dev *VAR_4,
    u8 **VAR_5, dma_addr_t *VAR_6)
{
 *VAR_5 = FUNC_4(VAR_4->ll2->rx_size, VAR_2);
 if (!(*VAR_5)) {
  FUNC_0(VAR_4, "Failed to allocate LL2 buffer data\n");
  return -VAR_1;
 }

 *VAR_6 = FUNC_1(&VAR_4->pdev->dev,
        ((*VAR_5) + VAR_3),
        VAR_4->ll2->rx_size, VAR_0);
 if (FUNC_2(&VAR_4->pdev->dev, *VAR_6)) {
  FUNC_0(VAR_4, "Failed to map LL2 buffer data\n");
  FUNC_3((*VAR_5));
  return -VAR_1;
 }

 return 0;
}
