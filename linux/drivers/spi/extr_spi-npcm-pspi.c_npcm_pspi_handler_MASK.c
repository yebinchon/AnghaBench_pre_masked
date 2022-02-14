
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct npcm_pspi {scalar_t__ tx_bytes; scalar_t__ base; scalar_t__ tx_buf; int xfer_done; int rx_bytes; scalar_t__ rx_buf; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct npcm_pspi*) ;
 int FUNC_4 (struct npcm_pspi*) ;
 int FUNC_5 (struct npcm_pspi*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct npcm_pspi *VAR_8 = VAR_7;
 u16 VAR_9;
 u8 VAR_10;

 VAR_10 = FUNC_1(VAR_8->base + VAR_3);

 if (!VAR_8->tx_buf && !VAR_8->rx_buf)
  return VAR_1;

 if (VAR_8->tx_buf) {
  if (VAR_10 & VAR_5) {
   VAR_9 = FUNC_1(VAR_2 + VAR_8->base);
   if (VAR_8->tx_bytes == 0) {
    FUNC_3(VAR_8);
    FUNC_0(&VAR_8->xfer_done);
    return VAR_0;
   }
  }

  if ((VAR_10 & VAR_4) == 0)
   if (VAR_8->tx_bytes)
    FUNC_5(VAR_8);
 }

 if (VAR_8->rx_buf) {
  if (VAR_10 & VAR_5) {
   if (!VAR_8->rx_bytes)
    return VAR_1;

   FUNC_4(VAR_8);

   if (!VAR_8->rx_bytes) {
    FUNC_3(VAR_8);
    FUNC_0(&VAR_8->xfer_done);
    return VAR_0;
   }
  }

  if (((VAR_10 & VAR_4) == 0) && !VAR_8->tx_buf)
   FUNC_2(0x0, VAR_2 + VAR_8->base);
 }

 return VAR_0;
}
