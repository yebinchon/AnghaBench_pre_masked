
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st95hf_spi_context {int spi_lock; struct spi_device* spidev; } ;
struct spi_transfer {unsigned char* tx_buf; int len; unsigned char* rx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (struct spi_device*,struct spi_message*) ;

int FUNC_6(struct st95hf_spi_context *VAR_1,
        unsigned char *VAR_2)
{
 unsigned char VAR_3 = VAR_0;
 struct spi_transfer VAR_4[2] = {
  {.tx_buf = &VAR_3, .len = 1,},
  {.rx_buf = VAR_2, .len = 1,},
 };
 struct spi_message VAR_5;
 struct spi_device *VAR_6 = VAR_1->spidev;
 int VAR_7 = 0;

 FUNC_1(&VAR_1->spi_lock);

 FUNC_4(&VAR_5);
 FUNC_3(&VAR_4[0], &VAR_5);
 FUNC_3(&VAR_4[1], &VAR_5);
 VAR_7 = FUNC_5(VAR_6, &VAR_5);

 FUNC_2(&VAR_1->spi_lock);

 if (VAR_7)
  FUNC_0(&VAR_6->dev, "recv_echo_res, data read error = %d\n",
   VAR_7);

 return VAR_7;
}
