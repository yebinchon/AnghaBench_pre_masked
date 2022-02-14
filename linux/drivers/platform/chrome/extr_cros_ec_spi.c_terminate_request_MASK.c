
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trans ;
struct spi_transfer {int delay_usecs; } ;
struct spi_message {int dummy; } ;
struct cros_ec_spi {int last_transfer_ns; int spi; int end_of_msg_delay; } ;
struct cros_ec_device {int dev; struct cros_ec_spi* priv; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct spi_transfer*,int ,int) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_6(struct cros_ec_device *VAR_0)
{
 struct cros_ec_spi *VAR_1 = VAR_0->priv;
 struct spi_message VAR_2;
 struct spi_transfer VAR_3;
 int VAR_4;





 FUNC_4(&VAR_2);
 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.delay_usecs = VAR_1->end_of_msg_delay;
 FUNC_3(&VAR_3, &VAR_2);

 VAR_4 = FUNC_5(VAR_1->spi, &VAR_2);


 VAR_1->last_transfer_ns = FUNC_1();
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev,
   "cs-deassert spi transfer failed: %d\n",
   VAR_4);
 }

 return VAR_4;
}
