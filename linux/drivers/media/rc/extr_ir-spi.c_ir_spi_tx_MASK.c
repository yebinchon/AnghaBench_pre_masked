
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfer ;
typedef int u16 ;
struct spi_transfer {int speed_hz; unsigned int len; int * tx_buf; } ;
struct rc_dev {struct ir_spi_data* priv; } ;
struct ir_spi_data {unsigned int freq; int regulator; TYPE_1__* spi; int * tx_buf; int pulse; int space; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_6(struct rc_dev *VAR_2,
       unsigned int *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6;
 unsigned int VAR_7 = 0;
 struct ir_spi_data *VAR_8 = VAR_2->priv;
 struct spi_transfer VAR_9;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  unsigned int VAR_10;
  int VAR_11;
  u16 VAR_12;

  VAR_10 = FUNC_0(VAR_3[VAR_5] * VAR_8->freq, 1000000);

  if (VAR_7 + VAR_10 >= VAR_1)
   return -VAR_0;






  VAR_12 = (VAR_5 % 2) ? VAR_8->space : VAR_8->pulse;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   VAR_8->tx_buf[VAR_7++] = VAR_12;
 }

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.speed_hz = VAR_8->freq * 16;
 VAR_9.len = VAR_7 * sizeof(*VAR_8->tx_buf);
 VAR_9.tx_buf = VAR_8->tx_buf;

 VAR_6 = FUNC_4(VAR_8->regulator);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_8->spi, &VAR_9, 1);
 if (VAR_6)
  FUNC_1(&VAR_8->spi->dev, "unable to deliver the signal\n");

 FUNC_3(VAR_8->regulator);

 return VAR_6 ? VAR_6 : VAR_4;
}
