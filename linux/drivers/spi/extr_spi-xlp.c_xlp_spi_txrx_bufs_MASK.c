
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_spi_priv {int cmd_cont; } ;
struct spi_transfer {unsigned char* tx_buf; unsigned char* rx_buf; int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct xlp_spi_priv*,unsigned char const*,unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct xlp_spi_priv *VAR_1, struct spi_transfer *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned char *VAR_5;
 const unsigned char *VAR_6;

 VAR_6 = VAR_2->tx_buf;
 VAR_5 = VAR_2->rx_buf;
 VAR_3 = VAR_2->len;
 while (VAR_3) {
  if (VAR_3 > VAR_0)
   VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_5,
     VAR_0, 1);
  else
   VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_5,
     VAR_3, VAR_1->cmd_cont);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_3 -= VAR_4;
  if (VAR_6)
   VAR_6 += VAR_4;
  if (VAR_5)
   VAR_5 += VAR_4;
 }
 return VAR_3;
}
