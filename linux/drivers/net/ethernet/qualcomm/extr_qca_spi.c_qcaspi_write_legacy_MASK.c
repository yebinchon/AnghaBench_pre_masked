
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int transfer ;
struct spi_transfer {scalar_t__ len; int * tx_buf; } ;
struct spi_message {scalar_t__ actual_length; } ;
struct qcaspi {int spi_dev; } ;


 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct qcaspi*) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (int ,struct spi_message*) ;

__attribute__((used)) static u32
FUNC_5(struct qcaspi *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 struct spi_message VAR_3;
 struct spi_transfer VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(&VAR_3);

 VAR_4.tx_buf = VAR_1;
 VAR_4.len = VAR_2;

 FUNC_2(&VAR_4, &VAR_3);
 VAR_5 = FUNC_4(VAR_0->spi_dev, &VAR_3);

 if (VAR_5 || (VAR_3.actual_length != VAR_2)) {
  FUNC_1(VAR_0);
  return 0;
 }

 return VAR_2;
}
