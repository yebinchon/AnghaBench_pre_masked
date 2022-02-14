
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlp_spi_priv {int rx_len; int* rx_buf; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct xlp_spi_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xlp_spi_priv *VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_3, VAR_3->cs, VAR_0);
 VAR_5 &= VAR_2;
 while (VAR_5) {
  VAR_4 = FUNC_1(VAR_3, VAR_3->cs, VAR_1);
  VAR_7 = 0;
  VAR_8 = FUNC_0(VAR_3->rx_len, 4);
  for (VAR_6 = VAR_8 - 1; VAR_6 >= 0; VAR_6--, VAR_7++)
   VAR_3->rx_buf[VAR_6] = (VAR_4 >> (VAR_7 * 8)) & 0xff;

  VAR_3->rx_len -= VAR_8;
  VAR_3->rx_buf += VAR_8;
  VAR_5--;
 }
}
