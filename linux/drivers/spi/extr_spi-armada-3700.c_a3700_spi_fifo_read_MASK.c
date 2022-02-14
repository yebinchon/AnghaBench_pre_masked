
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a3700_spi {int buf_len; int* rx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct a3700_spi*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (struct a3700_spi*,int ) ;

__attribute__((used)) static int FUNC_3(struct a3700_spi *VAR_1)
{
 u32 VAR_2;

 while (!FUNC_0(VAR_1) && VAR_1->buf_len) {
  VAR_2 = FUNC_2(VAR_1, VAR_0);
  if (VAR_1->buf_len >= 4) {

   FUNC_1(VAR_1->rx_buf, &VAR_2, 4);

   VAR_1->buf_len -= 4;
   VAR_1->rx_buf += 4;
  } else {





   while (VAR_1->buf_len) {
    *VAR_1->rx_buf = VAR_2 & 0xff;
    VAR_2 >>= 8;

    VAR_1->buf_len--;
    VAR_1->rx_buf++;
   }
  }
 }

 return 0;
}
