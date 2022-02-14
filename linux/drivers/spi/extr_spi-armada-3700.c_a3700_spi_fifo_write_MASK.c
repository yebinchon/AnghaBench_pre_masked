
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a3700_spi {scalar_t__ tx_buf; scalar_t__ buf_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct a3700_spi*) ;
 int FUNC_1 (struct a3700_spi*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct a3700_spi *VAR_1)
{
 u32 VAR_2;

 while (!FUNC_0(VAR_1) && VAR_1->buf_len) {
  VAR_2 = *(u32 *)VAR_1->tx_buf;
  FUNC_1(VAR_1, VAR_0, VAR_2);
  VAR_1->buf_len -= 4;
  VAR_1->tx_buf += 4;
 }

 return 0;
}
