
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl8187_priv {TYPE_2__* map; int io_mutex; TYPE_1__* io_dmabuf; int udev; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
typedef int data ;
typedef int __le16 ;
struct TYPE_4__ {int RFPinsSelect; int RFPinsOutput; int RFPinsEnable; } ;
struct TYPE_3__ {int bits16; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtl8187_priv*,int *) ;
 int FUNC_3 (struct rtl8187_priv*,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int,int *,int,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3, u8 VAR_4, __le16 VAR_5)
{
 struct rtl8187_priv *VAR_6 = VAR_3->priv;
 u16 VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_2(VAR_6, &VAR_6->map->RFPinsOutput);
 VAR_8 = FUNC_2(VAR_6, &VAR_6->map->RFPinsEnable);
 VAR_9 = FUNC_2(VAR_6, &VAR_6->map->RFPinsSelect);

 VAR_7 &= ~(0x3 << 2);
 VAR_9 &= ~0xF;

 FUNC_3(VAR_6, &VAR_6->map->RFPinsEnable, VAR_8 | 0x0007);
 FUNC_3(VAR_6, &VAR_6->map->RFPinsSelect, VAR_9 | 0x0007);
 FUNC_4(10);

 FUNC_3(VAR_6, &VAR_6->map->RFPinsOutput, VAR_7 | (1 << 2));
 FUNC_4(2);

 FUNC_3(VAR_6, &VAR_6->map->RFPinsOutput, VAR_7);
 FUNC_4(10);

 FUNC_0(&VAR_6->io_mutex);

 VAR_6->io_dmabuf->bits16 = VAR_5;
 FUNC_5(VAR_6->udev, FUNC_6(VAR_6->udev, 0),
   VAR_2, VAR_1,
   VAR_4, 0x8225, &VAR_6->io_dmabuf->bits16, sizeof(VAR_5),
   VAR_0 / 2);

 FUNC_1(&VAR_6->io_mutex);

 FUNC_3(VAR_6, &VAR_6->map->RFPinsOutput, VAR_7 | (1 << 2));
 FUNC_4(10);

 FUNC_3(VAR_6, &VAR_6->map->RFPinsOutput, VAR_7 | (1 << 2));
 FUNC_3(VAR_6, &VAR_6->map->RFPinsSelect, VAR_9);
}
