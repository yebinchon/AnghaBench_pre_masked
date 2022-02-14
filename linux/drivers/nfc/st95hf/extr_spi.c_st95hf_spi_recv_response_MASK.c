
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st95hf_spi_context {int spi_lock; struct spi_device* spidev; } ;
struct spi_transfer {unsigned char* tx_buf; int len; unsigned char* rx_buf; int cs_change; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct spi_transfer*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (struct spi_device*,struct spi_message*) ;

int FUNC_7(struct st95hf_spi_context *VAR_1,
        unsigned char *VAR_2)
{
 int VAR_3 = 0;
 struct spi_transfer VAR_4;
 struct spi_message VAR_5;
 struct spi_device *VAR_6 = VAR_1->spidev;
 unsigned char VAR_7 = VAR_0;
 struct spi_transfer VAR_8[2] = {
  {.tx_buf = &VAR_7, .len = 1,},
  {.rx_buf = VAR_2, .len = 2, .cs_change = 1,},
 };

 int VAR_9 = 0;

 FUNC_1(&VAR_4, 0x0, sizeof(struct spi_transfer));

 FUNC_2(&VAR_1->spi_lock);


 FUNC_5(&VAR_5);
 FUNC_4(&VAR_8[0], &VAR_5);
 FUNC_4(&VAR_8[1], &VAR_5);

 VAR_9 = FUNC_6(VAR_6, &VAR_5);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "spi_recv_resp, data length error = %d\n",
   VAR_9);
  FUNC_3(&VAR_1->spi_lock);
  return VAR_9;
 }


 VAR_3 = 2;


 if (VAR_2[0] & 0x60)
  VAR_3 += (((VAR_2[0] & 0x60) >> 5) << 8) | VAR_2[1];
 else
  VAR_3 += VAR_2[1];


 VAR_4.rx_buf = &VAR_2[2];
 VAR_4.len = VAR_3 - 2;

 FUNC_5(&VAR_5);
 FUNC_4(&VAR_4, &VAR_5);

 VAR_9 = FUNC_6(VAR_6, &VAR_5);

 FUNC_3(&VAR_1->spi_lock);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "spi_recv_resp, data read error = %d\n",
   VAR_9);
  return VAR_9;
 }

 return VAR_3;
}
