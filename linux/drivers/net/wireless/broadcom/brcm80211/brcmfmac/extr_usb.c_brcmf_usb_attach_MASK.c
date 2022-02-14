
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_usbdev {int nrxq; int ntxq; int bus_mtu; int state; struct brcmf_usbdev_info* devinfo; } ;
struct brcmf_usbdev_info {int rx_low_watermark; int tx_low_watermark; int tx_high_watermark; int tx_flowblock; int tx_freecount; struct brcmf_usbdev bus_pub; void* bulk_urb; void* ctl_urb; void* tx_reqs; int tx_freeq; void* rx_reqs; int rx_freeq; int tx_postq; int rx_postq; int tx_flowblock_lock; int qlock; int ioctl_resp_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct brcmf_usbdev_info*) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,int ) ;

__attribute__((used)) static
struct brcmf_usbdev *FUNC_8(struct brcmf_usbdev_info *VAR_4,
          int VAR_5, int VAR_6)
{
 FUNC_1(VAR_3, "Enter\n");

 VAR_4->bus_pub.nrxq = VAR_5;
 VAR_4->rx_low_watermark = VAR_5 / 2;
 VAR_4->bus_pub.devinfo = VAR_4;
 VAR_4->bus_pub.ntxq = VAR_6;
 VAR_4->bus_pub.state = VAR_0;


 VAR_4->tx_low_watermark = VAR_6 / 4;
 VAR_4->tx_high_watermark = VAR_4->tx_low_watermark * 3;
 VAR_4->bus_pub.bus_mtu = VAR_1;


 FUNC_5(&VAR_4->ioctl_resp_wait);


 FUNC_6(&VAR_4->qlock);
 FUNC_6(&VAR_4->tx_flowblock_lock);

 FUNC_0(&VAR_4->rx_freeq);
 FUNC_0(&VAR_4->rx_postq);

 FUNC_0(&VAR_4->tx_freeq);
 FUNC_0(&VAR_4->tx_postq);

 VAR_4->tx_flowblock = 0;

 VAR_4->rx_reqs = FUNC_4(&VAR_4->rx_freeq, VAR_5);
 if (!VAR_4->rx_reqs)
  goto error;

 VAR_4->tx_reqs = FUNC_4(&VAR_4->tx_freeq, VAR_6);
 if (!VAR_4->tx_reqs)
  goto error;
 VAR_4->tx_freecount = VAR_6;

 VAR_4->ctl_urb = FUNC_7(0, VAR_2);
 if (!VAR_4->ctl_urb)
  goto error;
 VAR_4->bulk_urb = FUNC_7(0, VAR_2);
 if (!VAR_4->bulk_urb)
  goto error;

 return &VAR_4->bus_pub;

error:
 FUNC_2("failed!\n");
 FUNC_3(VAR_4);
 return ((void*)0);
}
