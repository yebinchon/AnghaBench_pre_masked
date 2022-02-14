
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a3700_spi {int* tx_buf; int buf_len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct a3700_spi*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct a3700_spi *VAR_6)
{
 unsigned int VAR_7;
 u32 VAR_8 = 0;


 FUNC_0(VAR_6, VAR_4, 0);
 FUNC_0(VAR_6, VAR_2, 0);
 FUNC_0(VAR_6, VAR_5, 0);
 FUNC_0(VAR_6, VAR_3, 0);


 if (VAR_6->tx_buf) {
  VAR_7 = VAR_6->buf_len % 4;
  if (VAR_7) {
   VAR_8 = (VAR_7 & VAR_1)
    << VAR_0;
   FUNC_0(VAR_6, VAR_3, VAR_8);


   VAR_6->buf_len -= VAR_7;


   VAR_8 = 0;
   while (VAR_7--) {
    VAR_8 = (VAR_8 << 8) | VAR_6->tx_buf[0];
    VAR_6->tx_buf++;
   }
   FUNC_0(VAR_6, VAR_2, VAR_8);
  }
 }
}
