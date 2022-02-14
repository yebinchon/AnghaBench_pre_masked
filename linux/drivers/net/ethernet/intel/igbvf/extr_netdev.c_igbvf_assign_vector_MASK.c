
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {TYPE_2__* tx_ring; TYPE_1__* rx_ring; struct e1000_hw hw; } ;
struct TYPE_4__ {void* eims_value; } ;
struct TYPE_3__ {void* eims_value; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct igbvf_adapter *VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_3->hw;
 u32 VAR_8, VAR_9;






 if (VAR_4 > VAR_1) {
  VAR_9 = (VAR_4 >> 1);
  VAR_8 = FUNC_1(VAR_2, VAR_9);
  if (VAR_4 & 0x1) {

   VAR_8 = VAR_8 & 0xFF00FFFF;
   VAR_8 |= (VAR_6 | VAR_0) << 16;
  } else {

   VAR_8 = VAR_8 & 0xFFFFFF00;
   VAR_8 |= VAR_6 | VAR_0;
  }
  VAR_3->rx_ring[VAR_4].eims_value = FUNC_0(VAR_6);
  FUNC_2(VAR_2, VAR_9, VAR_8);
 }
 if (VAR_5 > VAR_1) {
  VAR_9 = (VAR_5 >> 1);
  VAR_8 = FUNC_1(VAR_2, VAR_9);
  if (VAR_5 & 0x1) {

   VAR_8 = VAR_8 & 0x00FFFFFF;
   VAR_8 |= (VAR_6 | VAR_0) << 24;
  } else {

   VAR_8 = VAR_8 & 0xFFFF00FF;
   VAR_8 |= (VAR_6 | VAR_0) << 8;
  }
  VAR_3->tx_ring[VAR_5].eims_value = FUNC_0(VAR_6);
  FUNC_2(VAR_2, VAR_9, VAR_8);
 }
}
