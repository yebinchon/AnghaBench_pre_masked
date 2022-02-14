
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int transfer ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_message {int status; } ;
struct qcaspi {int spi_dev; } ;
typedef int cmd ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (struct qcaspi*) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static int
FUNC_6(struct qcaspi *VAR_0, u16 VAR_1)
{
 __be16 VAR_2;
 struct spi_message VAR_3;
 struct spi_transfer VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 FUNC_4(&VAR_3);

 VAR_2 = FUNC_0(VAR_1);
 VAR_4.len = sizeof(VAR_1);
 VAR_4.tx_buf = &VAR_2;
 FUNC_3(&VAR_4, &VAR_3);

 VAR_5 = FUNC_5(VAR_0->spi_dev, &VAR_3);

 if (!VAR_5)
  VAR_5 = VAR_3.status;

 if (VAR_5)
  FUNC_2(VAR_0);

 return VAR_5;
}
