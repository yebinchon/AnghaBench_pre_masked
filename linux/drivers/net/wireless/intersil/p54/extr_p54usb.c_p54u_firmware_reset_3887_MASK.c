
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p54u_priv {TYPE_1__* udev; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct p54u_priv*,int ,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4)
{
 struct p54u_priv *VAR_5 = VAR_4->priv;
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3, 4, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_3(VAR_5, VAR_2,
       VAR_6, 4);
 FUNC_1(VAR_6);
 if (VAR_7)
  FUNC_0(&VAR_5->udev->dev, "(p54usb) unable to jump to "
   "boot ROM (%d)!\n", VAR_7);

 return VAR_7;
}
