
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct rspi_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_1 (struct rspi_data*,int ,int ,int ) ;
 int FUNC_2 (struct rspi_data*) ;

__attribute__((used)) static int FUNC_3(struct rspi_data *VAR_1,
    struct spi_transfer *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->tx_buf, VAR_2->rx_buf, VAR_2->len);
 if (VAR_3 < 0)
  return VAR_3;


 FUNC_2(VAR_1);

 return 0;
}
