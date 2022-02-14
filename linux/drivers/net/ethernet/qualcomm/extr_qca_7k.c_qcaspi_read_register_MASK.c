
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int transfer ;
struct spi_transfer {void* len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int status; } ;
struct qcaspi {int spi_dev; scalar_t__ legacy_mode; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct qcaspi*) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (int ,struct spi_message*) ;

int
FUNC_7(struct qcaspi *VAR_3, u16 VAR_4, u16 *VAR_5)
{
 __be16 VAR_6;
 __be16 VAR_7;
 struct spi_transfer VAR_8[2];
 struct spi_message VAR_9;
 int VAR_10;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));

 FUNC_5(&VAR_9);

 VAR_7 = FUNC_1(VAR_1 | VAR_0 | VAR_4);
 *VAR_5 = 0;

 VAR_8[0].tx_buf = &VAR_7;
 VAR_8[0].len = VAR_2;
 VAR_8[1].rx_buf = &VAR_6;
 VAR_8[1].len = VAR_2;

 FUNC_4(&VAR_8[0], &VAR_9);

 if (VAR_3->legacy_mode) {
  FUNC_6(VAR_3->spi_dev, &VAR_9);
  FUNC_5(&VAR_9);
 }
 FUNC_4(&VAR_8[1], &VAR_9);
 VAR_10 = FUNC_6(VAR_3->spi_dev, &VAR_9);

 if (!VAR_10)
  VAR_10 = VAR_9.status;

 if (VAR_10)
  FUNC_3(VAR_3);
 else
  *VAR_5 = FUNC_0(VAR_6);

 return VAR_10;
}
