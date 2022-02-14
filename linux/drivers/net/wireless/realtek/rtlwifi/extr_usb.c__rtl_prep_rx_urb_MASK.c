
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; int transfer_dma; } ;
struct rtl_usb {int rx_max_size; int in_ep; int udev; } ;
struct ieee80211_hw {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct urb*,int ,int ,void*,int ,int ,struct rtl_usb*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_3, struct rtl_usb *VAR_4,
         struct urb *VAR_5, gfp_t VAR_6)
{
 void *VAR_7;

 VAR_7 = FUNC_1(VAR_4->udev, VAR_4->rx_max_size, VAR_6,
     &VAR_5->transfer_dma);
 if (!VAR_7) {
  FUNC_0("Failed to usb_alloc_coherent!!\n");
  return -VAR_0;
 }

 FUNC_2(VAR_5, VAR_4->udev,
     FUNC_3(VAR_4->udev, VAR_4->in_ep),
     VAR_7, VAR_4->rx_max_size, VAR_2, VAR_4);
 VAR_5->transfer_flags |= VAR_1;

 return 0;
}
