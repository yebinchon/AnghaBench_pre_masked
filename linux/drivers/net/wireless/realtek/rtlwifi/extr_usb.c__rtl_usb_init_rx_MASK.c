
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_usb_priv {int dummy; } ;
struct TYPE_6__ {unsigned long data; int func; } ;
struct rtl_usb {TYPE_3__ rx_work_tasklet; int rx_queue; int rx_cleanup_urbs; int rx_submitted; int in_ep; int rx_urb_num; int rx_max_size; int usb_rx_segregate_hdl; int usb_rx_hdl; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {TYPE_1__* usb_interface_cfg; } ;
struct TYPE_4__ {int usb_rx_segregate_hdl; int usb_rx_hdl; int in_ep_num; int rx_urb_num; int rx_max_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_3 (struct rtl_usb_priv*) ;
 struct rtl_usb_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_2(VAR_1);
 struct rtl_usb_priv *VAR_3 = FUNC_4(VAR_1);
 struct rtl_usb *VAR_4 = FUNC_3(VAR_3);

 VAR_4->rx_max_size = VAR_2->cfg->usb_interface_cfg->rx_max_size;
 VAR_4->rx_urb_num = VAR_2->cfg->usb_interface_cfg->rx_urb_num;
 VAR_4->in_ep = VAR_2->cfg->usb_interface_cfg->in_ep_num;
 VAR_4->usb_rx_hdl = VAR_2->cfg->usb_interface_cfg->usb_rx_hdl;
 VAR_4->usb_rx_segregate_hdl =
  VAR_2->cfg->usb_interface_cfg->usb_rx_segregate_hdl;

 FUNC_1("rx_max_size %d, rx_urb_num %d, in_ep %d\n",
  VAR_4->rx_max_size, VAR_4->rx_urb_num, VAR_4->in_ep);
 FUNC_0(&VAR_4->rx_submitted);
 FUNC_0(&VAR_4->rx_cleanup_urbs);

 FUNC_5(&VAR_4->rx_queue);
 VAR_4->rx_work_tasklet.func = VAR_0;
 VAR_4->rx_work_tasklet.data = (unsigned long)VAR_4;

 return 0;
}
