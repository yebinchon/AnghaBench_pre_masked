
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct at86rf230_local {TYPE_3__* hw; TYPE_1__* data; } ;
struct TYPE_6__ {TYPE_2__* phy; } ;
struct TYPE_5__ {int symbol_duration; int lifs_period; int sifs_period; } ;
struct TYPE_4__ {int rssi_base_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct at86rf230_local*,int) ;
 int FUNC_1 (struct at86rf230_local*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct at86rf230_local *VAR_5, u8 VAR_6, u8 VAR_7)
{
 int VAR_8;

 if (VAR_7 == 0)
  VAR_8 = FUNC_1(VAR_5, VAR_4, 0);
 else
  VAR_8 = FUNC_1(VAR_5, VAR_4, 1);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6 == 0) {
  VAR_8 = FUNC_1(VAR_5, VAR_2, 0);
  VAR_5->data->rssi_base_val = -100;
 } else {
  VAR_8 = FUNC_1(VAR_5, VAR_2, 1);
  VAR_5->data->rssi_base_val = -98;
 }
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_5->data->rssi_base_val);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7 == 0) {
  if (VAR_6 == 0) {

   VAR_5->hw->phy->symbol_duration = 50;
  } else {

   VAR_5->hw->phy->symbol_duration = 25;
  }
 } else {
  if (VAR_6 == 0)

   VAR_5->hw->phy->symbol_duration = 40;
  else

   VAR_5->hw->phy->symbol_duration = 16;
 }

 VAR_5->hw->phy->lifs_period = VAR_0 *
       VAR_5->hw->phy->symbol_duration;
 VAR_5->hw->phy->sifs_period = VAR_1 *
       VAR_5->hw->phy->symbol_duration;

 return FUNC_1(VAR_5, VAR_3, VAR_7);
}
