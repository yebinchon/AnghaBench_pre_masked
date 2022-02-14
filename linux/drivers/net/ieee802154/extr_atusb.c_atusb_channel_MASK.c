
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_hw {struct atusb* priv; } ;
struct atusb {TYPE_1__* data; } ;
struct TYPE_2__ {int (* set_channel ) (struct ieee802154_hw*,int ,int ) ;int t_channel_switch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee802154_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee802154_hw *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct atusb *VAR_4 = VAR_1->priv;
 int VAR_5 = -VAR_0;

 if (VAR_4->data) {
  VAR_5 = VAR_4->data->set_channel(VAR_1, VAR_2, VAR_3);

  FUNC_0(VAR_4->data->t_channel_switch);
 }

 return VAR_5;
}
