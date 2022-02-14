
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int* rx_buf; unsigned char* tx_buf; } ;
struct ad2s1210_state {int* rx; unsigned char* tx; int sdev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ad2s1210_state*) ;
 int FUNC_1 (int ,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_2(struct ad2s1210_state *VAR_3,
    unsigned char VAR_4)
{
 struct spi_transfer VAR_5 = {
  .len = 2,
  .rx_buf = VAR_3->rx,
  .tx_buf = VAR_3->tx,
 };
 int VAR_6 = 0;

 FUNC_0(VAR_2, VAR_3);
 VAR_3->tx[0] = VAR_4 | VAR_0;
 VAR_3->tx[1] = VAR_1;
 VAR_6 = FUNC_1(VAR_3->sdev, &VAR_5, 1);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_3->rx[1];
}
