
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802154_hw {struct atusb* priv; } ;
struct atusb {TYPE_2__* hw; } ;
struct TYPE_4__ {TYPE_1__* phy; } ;
struct TYPE_3__ {int symbol_duration; int lifs_period; int sifs_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atusb*,int ,scalar_t__) ;
 int FUNC_1 (struct atusb*,int) ;

__attribute__((used)) static int FUNC_2(struct ieee802154_hw *VAR_5, u8 VAR_6, u8 VAR_7)
{
 int VAR_8;
 int VAR_9;

 struct atusb *VAR_10 = VAR_5->priv;

 if (VAR_7 == 0)
  VAR_8 = FUNC_0(VAR_10, VAR_4, 0);
 else
  VAR_8 = FUNC_0(VAR_10, VAR_4, 1);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6 == 0) {
  VAR_8 = FUNC_0(VAR_10, VAR_2, 0);
  VAR_9 = -100;
 } else {
  VAR_8 = FUNC_0(VAR_10, VAR_2, 1);
  VAR_9 = -98;
 }
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_10, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 == 0) {
  if (VAR_6 == 0) {

   VAR_10->hw->phy->symbol_duration = 50;
  } else {

   VAR_10->hw->phy->symbol_duration = 25;
  }
 } else {
  if (VAR_6 == 0)

   VAR_10->hw->phy->symbol_duration = 40;
  else

   VAR_10->hw->phy->symbol_duration = 16;
 }

 VAR_10->hw->phy->lifs_period = VAR_0 *
       VAR_10->hw->phy->symbol_duration;
 VAR_10->hw->phy->sifs_period = VAR_1 *
       VAR_10->hw->phy->symbol_duration;

 return FUNC_0(VAR_10, VAR_3, VAR_7);
}
