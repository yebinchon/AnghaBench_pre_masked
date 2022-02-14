
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm2835_spi {int tx_len; int tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_spi*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static inline void FUNC_3(struct bcm2835_spi *VAR_1, int VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_1->tx_len -= VAR_2;

 while (VAR_2 > 0) {
  if (VAR_1->tx_buf) {
   VAR_4 = FUNC_2(VAR_2, 4);
   FUNC_1(&VAR_3, VAR_1->tx_buf, VAR_4);
   VAR_1->tx_buf += VAR_4;
  } else {
   VAR_3 = 0;
  }
  FUNC_0(VAR_1, VAR_0, VAR_3);
  VAR_2 -= 4;
 }
}
