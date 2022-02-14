
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int transfer ;
struct spi_transfer {void* len; int * tx_buf; } ;
struct spi_message {int status; } ;
struct qcaspi {int spi_dev; scalar_t__ legacy_mode; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_transfer**,int ,int) ;
 int FUNC_2 (struct qcaspi*) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static int
FUNC_6(struct qcaspi *VAR_3, u16 VAR_4, u16 VAR_5)
{
 __be16 VAR_6[2];
 struct spi_transfer VAR_7[2];
 struct spi_message VAR_8;
 int VAR_9;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 FUNC_4(&VAR_8);

 VAR_6[0] = FUNC_0(VAR_1 | VAR_0 | VAR_4);
 VAR_6[1] = FUNC_0(VAR_5);

 VAR_7[0].tx_buf = &VAR_6[0];
 VAR_7[0].len = VAR_2;
 VAR_7[1].tx_buf = &VAR_6[1];
 VAR_7[1].len = VAR_2;

 FUNC_3(&VAR_7[0], &VAR_8);
 if (VAR_3->legacy_mode) {
  FUNC_5(VAR_3->spi_dev, &VAR_8);
  FUNC_4(&VAR_8);
 }
 FUNC_3(&VAR_7[1], &VAR_8);
 VAR_9 = FUNC_5(VAR_3->spi_dev, &VAR_8);

 if (!VAR_9)
  VAR_9 = VAR_8.status;

 if (VAR_9)
  FUNC_2(VAR_3);

 return VAR_9;
}
