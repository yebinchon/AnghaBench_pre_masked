
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_spi {int tx_end; int tx; int fifo_n_elm; int rx_end; int rx; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct pic32_spi*) ;

__attribute__((used)) static u32 FUNC_2(struct pic32_spi *VAR_0, int VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 VAR_2 = (VAR_0->tx_end - VAR_0->tx) / VAR_1;
 VAR_3 = VAR_0->fifo_n_elm - FUNC_1(VAR_0);
 VAR_4 = ((VAR_0->rx_end - VAR_0->rx) -
      (VAR_0->tx_end - VAR_0->tx)) / VAR_1;
 return FUNC_0(VAR_2, VAR_3, (u32)(VAR_0->fifo_n_elm - VAR_4));
}
