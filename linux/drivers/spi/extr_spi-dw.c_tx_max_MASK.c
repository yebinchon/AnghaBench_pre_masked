
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_spi {int tx_end; int tx; int n_bytes; int fifo_len; int rx_end; int rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_spi*,int ) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static inline u32 FUNC_2(struct dw_spi *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 VAR_2 = (VAR_1->tx_end - VAR_1->tx) / VAR_1->n_bytes;
 VAR_3 = VAR_1->fifo_len - FUNC_0(VAR_1, VAR_0);
 VAR_4 = ((VAR_1->rx_end - VAR_1->rx) - (VAR_1->tx_end - VAR_1->tx))
   / VAR_1->n_bytes;

 return FUNC_1(VAR_2, VAR_3, (u32) (VAR_1->fifo_len - VAR_4));
}
