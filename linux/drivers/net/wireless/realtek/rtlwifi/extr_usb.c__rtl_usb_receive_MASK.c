
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct rtl_usb {int rx_urb_num; int rx_max_size; int rx_submitted; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_usb*,struct urb*,int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (char*) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_2)
{
 struct urb *VAR_3;
 int VAR_4;
 int VAR_5;
 struct rtl_usb *VAR_6 = FUNC_4(FUNC_5(VAR_2));

 FUNC_0(0 == VAR_6->rx_urb_num);

 FUNC_0(VAR_6->rx_max_size < 1600);

 for (VAR_5 = 0; VAR_5 < VAR_6->rx_urb_num; VAR_5++) {
  VAR_4 = -VAR_0;
  VAR_3 = FUNC_6(0, VAR_1);
  if (!VAR_3)
   goto err_out;

  VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_3, VAR_1);
  if (VAR_4 < 0) {
   FUNC_3("Failed to prep_rx_urb!!\n");
   FUNC_8(VAR_3);
   goto err_out;
  }

  FUNC_7(VAR_3, &VAR_6->rx_submitted);
  VAR_4 = FUNC_10(VAR_3, VAR_1);
  if (VAR_4)
   goto err_out;
  FUNC_8(VAR_3);
 }
 return 0;

err_out:
 FUNC_9(&VAR_6->rx_submitted);
 FUNC_2(VAR_2);
 return VAR_4;
}
