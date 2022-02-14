
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {scalar_t__ frame_length; scalar_t__ actual_length; } ;
struct spi_test {int elapsed_time; struct spi_message msg; } ;
struct spi_device {int dev; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (struct spi_device*,struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_test*) ;
 int FUNC_8 (struct spi_device*,struct spi_message*,void*,void*) ;
 int FUNC_9 (struct spi_device*,struct spi_message*,int) ;

int FUNC_10(struct spi_device *VAR_4, struct spi_test *VAR_5,
    void *VAR_6, void *VAR_7)
{
 struct spi_message *VAR_8 = &VAR_5->msg;
 int VAR_9 = 0;
 int VAR_10;


 if (!VAR_3) {
  ktime_t VAR_11;


  if (VAR_2 == 3)
   FUNC_9(VAR_4, VAR_8, 1);

  VAR_11 = FUNC_2();

  VAR_9 = FUNC_6(VAR_4, VAR_8);
  VAR_5->elapsed_time = FUNC_4(FUNC_3(FUNC_2(), VAR_11));
  if (VAR_9 == -VAR_1) {
   FUNC_1(&VAR_4->dev,
     "spi-message timed out - rerunning...\n");

   for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
    FUNC_5();
   VAR_9 = FUNC_6(VAR_4, VAR_8);
  }
  if (VAR_9) {
   FUNC_0(&VAR_4->dev,
    "Failed to execute spi_message: %i\n",
    VAR_9);
   goto exit;
  }


  if (VAR_8->frame_length != VAR_8->actual_length) {
   FUNC_0(&VAR_4->dev,
    "actual length differs from expected\n");
   VAR_9 = -VAR_0;
   goto exit;
  }


  VAR_9 = FUNC_8(VAR_4, VAR_8, VAR_6, VAR_7);
  if (VAR_9)
   goto exit;

  VAR_9 = FUNC_7(VAR_4, VAR_5);
 }


exit:
 if (VAR_2 || VAR_9)
  FUNC_9(VAR_4, VAR_8,
          (VAR_2 >= 2) || (VAR_9));

 return VAR_9;
}
