
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int queued; int dev; scalar_t__ transfer_one_message; int transfer; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct spi_controller*) ;
 int VAR_0 ;
 int FUNC_3 (struct spi_controller*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_2)
{
 int VAR_3;

 VAR_2->transfer = VAR_0;
 if (!VAR_2->transfer_one_message)
  VAR_2->transfer_one_message = VAR_1;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "problem initializing queue\n");
  goto err_init_queue;
 }
 VAR_2->queued = 1;
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "problem starting queue\n");
  goto err_start_queue;
 }

 return 0;

err_start_queue:
 FUNC_1(VAR_2);
err_init_queue:
 return VAR_3;
}
