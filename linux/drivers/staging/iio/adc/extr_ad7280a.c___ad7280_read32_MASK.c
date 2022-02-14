
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct ad7280_state {int * buf; int spi; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_3(struct ad7280_state *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;
 struct spi_transfer VAR_4 = {
  .tx_buf = &VAR_1->buf[0],
  .rx_buf = &VAR_1->buf[1],
  .len = 4,
 };

 VAR_1->buf[0] = FUNC_1(VAR_0);

 VAR_3 = FUNC_2(VAR_1->spi, &VAR_4, 1);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = FUNC_0(VAR_1->buf[1]);

 return 0;
}
