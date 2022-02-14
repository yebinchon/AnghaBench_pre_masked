
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_11__ {int kobj; } ;
struct i2c_client {TYPE_4__ dev; int adapter; } ;
struct TYPE_10__ {int adapter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (TYPE_4__*,char*,int ) ;
 int FUNC_5 (TYPE_4__*,char*,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 TYPE_1__** VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 TYPE_1__* FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_13,
   const struct i2c_device_id *VAR_14)
{
 int VAR_15, VAR_16 = 0;
 const char *VAR_17 = ((void*)0);


 if (!FUNC_8(VAR_13->adapter,
         VAR_4 |
         VAR_6)) {
  if (FUNC_8(VAR_13->adapter,
         VAR_4 |
         VAR_7))
   VAR_17 = "word";
  else if (FUNC_8(VAR_13->adapter,
         VAR_4 |
         VAR_5))
   VAR_17 = "byte";
  else
   return -VAR_3;
 }


 FUNC_11(&VAR_8);
 if (++VAR_10 == 1) {
  for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
   VAR_11[VAR_16] = FUNC_9(VAR_13->adapter,
      VAR_0 + VAR_16);
   if (FUNC_0(VAR_11[VAR_16])) {
    FUNC_3(&VAR_13->dev,
     "address 0x%02x unavailable\n",
     VAR_0 + VAR_16);
    VAR_15 = FUNC_1(VAR_11[VAR_16]);
    goto err_clients;
   }
  }
 } else if (FUNC_7(VAR_13->adapter) !=
     FUNC_7(VAR_11[0]->adapter)) {
  FUNC_3(&VAR_13->dev,
   "Driver only supports devices on a single I2C bus\n");
  VAR_15 = -VAR_2;
  goto err_clients;
 }


 VAR_15 = FUNC_6();
 if (VAR_15 < 0)
  goto err_clients;
 VAR_9 = VAR_15;
 FUNC_2(&VAR_13->dev, "Currently selected page: %d\n",
  VAR_9);
 FUNC_12(&VAR_8);


 VAR_15 = FUNC_13(&VAR_13->dev.kobj, &VAR_12);
 if (VAR_15)
  goto err_clients_lock;

 FUNC_4(&VAR_13->dev,
   "%u byte EE1004-compliant SPD EEPROM, read-only\n",
   VAR_1);
 if (VAR_17)
  FUNC_5(&VAR_13->dev,
      "Falling back to %s reads, performance will suffer\n",
      VAR_17);

 return 0;

 err_clients_lock:
 FUNC_11(&VAR_8);
 err_clients:
 if (--VAR_10 == 0) {
  for (VAR_16--; VAR_16 >= 0; VAR_16--) {
   FUNC_10(VAR_11[VAR_16]);
   VAR_11[VAR_16] = ((void*)0);
  }
 }
 FUNC_12(&VAR_8);

 return VAR_15;
}
