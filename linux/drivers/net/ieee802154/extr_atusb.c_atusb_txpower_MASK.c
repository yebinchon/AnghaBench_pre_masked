
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_hw {struct atusb* priv; } ;
struct atusb {TYPE_1__* data; } ;
typedef int s32 ;
struct TYPE_2__ {int (* set_txpower ) (struct ieee802154_hw*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee802154_hw*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_1, s32 VAR_2)
{
 struct atusb *VAR_3 = VAR_1->priv;

 if (VAR_3->data)
  return VAR_3->data->set_txpower(VAR_1, VAR_2);
 else
  return -VAR_0;
}
