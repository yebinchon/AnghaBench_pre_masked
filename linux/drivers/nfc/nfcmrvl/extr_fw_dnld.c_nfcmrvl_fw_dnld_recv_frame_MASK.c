
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rx_work; int rx_wq; int rx_q; } ;
struct nfcmrvl_private {TYPE_1__ fw_dnld; TYPE_2__* ndev; } ;
struct TYPE_4__ {int cmd_cnt; int cmd_timer; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct nfcmrvl_private *VAR_0,
       struct sk_buff *VAR_1)
{

 if (FUNC_4(&VAR_0->ndev->cmd_timer))
  FUNC_1(&VAR_0->ndev->cmd_timer);


 FUNC_0(&VAR_0->ndev->cmd_cnt, 1);


 FUNC_3(&VAR_0->fw_dnld.rx_q, VAR_1);
 FUNC_2(VAR_0->fw_dnld.rx_wq, &VAR_0->fw_dnld.rx_work);
}
