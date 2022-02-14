
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_usbdev_info {scalar_t__ settings; int rx_reqs; int tx_reqs; int bulk_urb; int ctl_urb; int tx_freeq; int rx_freeq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct brcmf_usbdev_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct brcmf_usbdev_info *VAR_1)
{
 FUNC_0(VAR_0, "Enter, devinfo %p\n", VAR_1);


 FUNC_2(&VAR_1->rx_freeq);
 FUNC_2(&VAR_1->tx_freeq);

 FUNC_4(VAR_1->ctl_urb);
 FUNC_4(VAR_1->bulk_urb);

 FUNC_3(VAR_1->tx_reqs);
 FUNC_3(VAR_1->rx_reqs);

 if (VAR_1->settings)
  FUNC_1(VAR_1->settings);
}
