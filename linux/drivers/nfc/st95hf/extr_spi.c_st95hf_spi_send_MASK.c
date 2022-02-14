
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st95hf_spi_context {int req_issync; int spi_lock; int done; struct spi_device* spidev; } ;
struct spi_transfer {unsigned char* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
typedef enum req_type { ____Placeholder_req_type } req_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct st95hf_spi_context *VAR_3,
      unsigned char *VAR_4,
      int VAR_5,
      enum req_type VAR_6)
{
 struct spi_message VAR_7;
 int VAR_8 = 0;
 struct spi_device *VAR_9 = VAR_3->spidev;
 struct spi_transfer VAR_10 = {
  .tx_buf = VAR_4,
  .len = VAR_5,
 };

 FUNC_2(&VAR_3->spi_lock);

 if (VAR_6 == VAR_2) {
  VAR_3->req_issync = 1;
  FUNC_4(&VAR_3->done);
 } else {
  VAR_3->req_issync = 0;
 }

 FUNC_6(&VAR_7);
 FUNC_5(&VAR_10, &VAR_7);

 VAR_8 = FUNC_7(VAR_9, &VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_9->dev, "error: sending cmd to st95hf using SPI = %d\n",
   VAR_8);
  FUNC_3(&VAR_3->spi_lock);
  return VAR_8;
 }


 if (VAR_6 == VAR_0) {
  FUNC_3(&VAR_3->spi_lock);
  return 0;
 }

 VAR_8 = FUNC_8(&VAR_3->done,
          FUNC_1(1000));

 if (!VAR_8) {
  FUNC_0(&VAR_9->dev, "error: response not ready timeout\n");
  VAR_8 = -VAR_1;
 } else {
  VAR_8 = 0;
 }

 FUNC_3(&VAR_3->spi_lock);

 return VAR_8;
}
