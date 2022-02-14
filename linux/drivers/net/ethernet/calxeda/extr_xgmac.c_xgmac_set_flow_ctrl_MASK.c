
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct xgmac_priv {int rx_pause; int tx_pause; scalar_t__ base; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct xgmac_priv *VAR_9, int VAR_10, int VAR_11)
{
 u32 VAR_12;
 unsigned int VAR_13 = 0;

 VAR_9->rx_pause = VAR_10;
 VAR_9->tx_pause = VAR_11;

 if (VAR_10 || VAR_11) {
  if (VAR_10)
   VAR_13 |= VAR_4;
  if (VAR_11)
   VAR_13 |= VAR_5;

  VAR_13 |= VAR_2 | VAR_6;
  VAR_13 |= (VAR_0 << VAR_3);

  FUNC_1(VAR_13, VAR_9->base + VAR_1);

  VAR_12 = FUNC_0(VAR_9->base + VAR_7);
  VAR_12 |= VAR_8;
  FUNC_1(VAR_12, VAR_9->base + VAR_7);
 } else {
  FUNC_1(0, VAR_9->base + VAR_1);

  VAR_12 = FUNC_0(VAR_9->base + VAR_7);
  VAR_12 &= ~VAR_8;
  FUNC_1(VAR_12, VAR_9->base + VAR_7);
 }

 return 0;
}
