
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mace_frame {int dummy; } ;
struct mace_data {int rx_slot; int rx_tail; int tx_sloti; int tx_count; scalar_t__ rx_ring; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct net_device*,struct mace_frame*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct mace_data* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 struct net_device *VAR_12 = (struct net_device *) VAR_11;
 struct mace_data *VAR_13 = FUNC_4(VAR_12);
 int VAR_14, VAR_15;
 u16 VAR_16;
 u32 VAR_17;



 while ((VAR_17 = FUNC_5(VAR_9)) != FUNC_5(VAR_9));
 if (!(VAR_17 & 0x60000000)) return VAR_1;





 VAR_16 = FUNC_6(VAR_5);

 if (VAR_16 & 0x2000) {
  FUNC_2(VAR_12);
 } else if (VAR_16 & 0x0100) {
  FUNC_7(VAR_4 + VAR_13->rx_slot, 0x1100);

  VAR_14 = FUNC_5(VAR_6 + VAR_13->rx_slot);
  VAR_15 = VAR_3 - VAR_14;



  while (VAR_13->rx_tail < VAR_15) {
   FUNC_0(VAR_12, (struct mace_frame*) (VAR_13->rx_ring
    + (VAR_13->rx_tail * VAR_2)));
   VAR_13->rx_tail++;
  }




  if (!VAR_14) {
   FUNC_1(VAR_12, VAR_13->rx_slot);
   VAR_13->rx_slot ^= 0x10;
  } else {
   FUNC_7(VAR_4 + VAR_13->rx_slot, 0x9800);
  }
 }





 VAR_16 = FUNC_6(VAR_8);

 if (VAR_16 & 0x2000) {
  FUNC_3(VAR_12);
 } else if (VAR_16 & 0x0100) {
  FUNC_7(VAR_7 + VAR_13->tx_sloti, 0x0100);
  VAR_13->tx_sloti ^= 0x10;
  VAR_13->tx_count++;
 }
 return VAR_0;
}
