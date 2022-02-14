
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct urb {int dummy; } ;
struct rtl8xxxu_priv {int int_anchor; int int_buf; int pipe_interrupt; int udev; } ;
struct ieee80211_hw {struct rtl8xxxu_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ,int ) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int *) ;
 int FUNC_4 (struct urb*,int ,int ,int ,int ,int ,struct rtl8xxxu_priv*,int) ;
 int FUNC_5 (struct urb*,int ) ;
 int FUNC_6 (struct urb*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_6)
{
 struct rtl8xxxu_priv *VAR_7 = VAR_6->priv;
 struct urb *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(0, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_4(VAR_8, VAR_7->udev, VAR_7->pipe_interrupt,
    VAR_7->int_buf, VAR_4,
    VAR_5, VAR_7, 1);
 FUNC_3(VAR_8, &VAR_7->int_anchor);
 VAR_10 = FUNC_5(VAR_8, VAR_1);
 if (VAR_10) {
  FUNC_6(VAR_8);
  goto error;
 }

 VAR_9 = FUNC_0(VAR_7, VAR_2);
 VAR_9 |= VAR_3;
 FUNC_1(VAR_7, VAR_2, VAR_9);

error:
 return VAR_10;
}
