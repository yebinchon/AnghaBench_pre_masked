
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct ca8210_priv* driver_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_priv {int* sync_command_response; int sync_exchange_complete; int spi_transfer_complete; int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(
 const u8 *VAR_5,
 size_t VAR_6,
 u8 *VAR_7,
 void *VAR_8
)
{
 int VAR_9 = 0;
 struct spi_device *VAR_10 = VAR_8;
 struct ca8210_priv *VAR_11 = VAR_10->dev.driver_data;
 long VAR_12;

 if ((VAR_5[0] & VAR_4) && VAR_7) {
  FUNC_5(&VAR_11->sync_exchange_complete);
  VAR_11->sync_command_response = VAR_7;
 }

 do {
  FUNC_5(&VAR_11->spi_transfer_complete);
  VAR_9 = FUNC_0(VAR_11->spi, VAR_5, VAR_6);
  if (VAR_9) {
   FUNC_3(
    &VAR_10->dev,
    "spi write failed, returned %d\n",
    VAR_9
   );
   if (VAR_9 == -VAR_1)
    continue;
   if (((VAR_5[0] & VAR_4) && VAR_7))
    FUNC_1(&VAR_11->sync_exchange_complete);
   goto cleanup;
  }

  VAR_12 = FUNC_6(
   &VAR_11->spi_transfer_complete,
   FUNC_4(1000)
  );
  if (VAR_12 == -VAR_2) {
   VAR_9 = -VAR_2;
  } else if (VAR_12 == 0) {
   FUNC_2(
    &VAR_10->dev,
    "SPI downstream transfer timed out!\n"
   );
   VAR_9 = -VAR_3;
   goto cleanup;
  }
 } while (VAR_9 < 0);

 if (!((VAR_5[0] & VAR_4) && VAR_7))
  goto cleanup;

 VAR_12 = FUNC_6(
  &VAR_11->sync_exchange_complete,
  FUNC_4(VAR_0)
 );
 if (VAR_12 == -VAR_2) {
  VAR_9 = -VAR_2;
 } else if (VAR_12 == 0) {
  FUNC_2(
   &VAR_10->dev,
   "Synchronous confirm timeout\n"
  );
  VAR_9 = -VAR_3;
 }

cleanup:
 VAR_11->sync_command_response = ((void*)0);
 return VAR_9;
}
