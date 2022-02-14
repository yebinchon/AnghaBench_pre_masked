
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
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_transfer**,int ,int) ;
 int FUNC_2 (struct qcaspi*) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static u32
FUNC_6(struct qcaspi *VAR_3, u8 *VAR_4, u32 VAR_5)
{
 __be16 VAR_6;
 struct spi_message VAR_7;
 struct spi_transfer VAR_8[2];
 int VAR_9;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_4(&VAR_7);

 VAR_6 = FUNC_0(VAR_1 | VAR_0);
 VAR_8[0].tx_buf = &VAR_6;
 VAR_8[0].len = VAR_2;
 VAR_8[1].tx_buf = VAR_4;
 VAR_8[1].len = VAR_5;

 FUNC_3(&VAR_8[0], &VAR_7);
 FUNC_3(&VAR_8[1], &VAR_7);
 VAR_9 = FUNC_5(VAR_3->spi_dev, &VAR_7);

 if (VAR_9 || (VAR_7.actual_length != VAR_2 + VAR_5)) {
  FUNC_2(VAR_3);
  return 0;
 }

 return VAR_5;
}
