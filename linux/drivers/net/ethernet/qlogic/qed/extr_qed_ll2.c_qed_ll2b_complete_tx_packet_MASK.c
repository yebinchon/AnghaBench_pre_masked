
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {TYPE_3__* ll2; TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int cb_cookie; TYPE_2__* cbs; } ;
struct TYPE_5__ {int (* tx_cb ) (int ,struct sk_buff*,int) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_1,
     u8 VAR_2,
     void *VAR_3,
     dma_addr_t VAR_4,
     bool VAR_5,
     bool VAR_6)
{
 struct qed_hwfn *VAR_7 = VAR_1;
 struct qed_dev *VAR_8 = VAR_7->cdev;
 struct sk_buff *VAR_9 = VAR_3;


 FUNC_1(&VAR_7->cdev->pdev->dev, VAR_4,
    FUNC_2(VAR_9), VAR_0);

 if (VAR_8->ll2->cbs && VAR_8->ll2->cbs->tx_cb)
  VAR_8->ll2->cbs->tx_cb(VAR_8->ll2->cb_cookie, VAR_9,
          VAR_5);

 FUNC_0(VAR_9);
}
