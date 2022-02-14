
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int netdev; scalar_t__ mac_regs; } ;
struct xlgmac_channel {unsigned int queue_index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int ) ;
 unsigned long VAR_13 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct xlgmac_pdata *VAR_14,
       struct xlgmac_channel *VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;
 unsigned int VAR_20;


 if (VAR_15->queue_index < VAR_3) {
  VAR_16 = VAR_0;
  VAR_17 = (VAR_15->queue_index * VAR_7) +
    VAR_1;
 } else {
  VAR_18 = VAR_15->queue_index - VAR_3;

  VAR_16 = VAR_2 + ((VAR_18 / VAR_5) * VAR_4);
  VAR_17 = ((VAR_18 % VAR_5) * VAR_7) +
    VAR_6;
 }





 VAR_19 = VAR_13 + (VAR_12 * VAR_11);
 while (FUNC_3(VAR_13, VAR_19)) {
  VAR_20 = FUNC_2(VAR_14->mac_regs + VAR_16);
  VAR_20 = FUNC_0(VAR_20, VAR_17,
      VAR_8);
  if ((VAR_20 == VAR_9) ||
      (VAR_20 == VAR_10))
   break;

  FUNC_4(500, 1000);
 }

 if (!FUNC_3(VAR_13, VAR_19))
  FUNC_1(VAR_14->netdev,
       "timed out waiting for Tx DMA channel %u to stop\n",
       VAR_15->queue_index);
}
