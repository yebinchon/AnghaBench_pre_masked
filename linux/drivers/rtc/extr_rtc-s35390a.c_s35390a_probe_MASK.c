
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s35390a {int twentyfourhour; struct i2c_client* rtc; struct i2c_client** client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int uie_unsupported; scalar_t__ addr; int adapter; struct device dev; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int) ;
 struct i2c_client* FUNC_4 (struct device*,int ,scalar_t__) ;
 struct s35390a* FUNC_5 (struct device*,int,int ) ;
 struct i2c_client* FUNC_6 (struct device*,int ,int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct s35390a*) ;
 int FUNC_9 (struct i2c_client*,int,int ) ;
 int FUNC_10 (struct s35390a*) ;
 TYPE_2__ VAR_9 ;
 int FUNC_11 (struct s35390a*,char*) ;
 int VAR_10 ;
 int FUNC_12 (struct s35390a*,int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 struct s35390a *VAR_16;
 char VAR_17, VAR_18;
 struct device *VAR_19 = &VAR_11->dev;

 if (!FUNC_7(VAR_11->adapter, VAR_3))
  return -VAR_0;

 VAR_16 = FUNC_5(VAR_19, sizeof(struct s35390a), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->client[0] = VAR_11;
 FUNC_8(VAR_11, VAR_16);


 for (VAR_15 = 1; VAR_15 < 8; ++VAR_15) {
  VAR_16->client[VAR_15] = FUNC_4(VAR_19,
              VAR_11->adapter,
              VAR_11->addr + VAR_15);
  if (FUNC_0(VAR_16->client[VAR_15])) {
   FUNC_2(VAR_19, "Address %02x unavailable\n",
    VAR_11->addr + VAR_15);
   return FUNC_1(VAR_16->client[VAR_15]);
  }
 }

 VAR_14 = FUNC_11(VAR_16, &VAR_18);
 if (VAR_14 < 0) {
  FUNC_2(VAR_19, "error resetting chip\n");
  return VAR_14;
 }

 if (VAR_18 & VAR_6)
  VAR_16->twentyfourhour = 1;
 else
  VAR_16->twentyfourhour = 0;

 if (VAR_18 & VAR_7) {

  VAR_17 = 0;
  VAR_13 = FUNC_12(VAR_16, VAR_5, &VAR_17, 1);
  if (VAR_13 < 0) {
   FUNC_2(VAR_19, "error disabling alarm");
   return VAR_13;
  }
 } else {
  VAR_13 = FUNC_10(VAR_16);
  if (VAR_13 < 0) {
   FUNC_2(VAR_19, "error disabling test mode\n");
   return VAR_13;
  }
 }

 FUNC_3(VAR_19, 1);

 VAR_16->rtc = FUNC_6(VAR_19, VAR_9.driver.name,
      &VAR_10, VAR_8);

 if (FUNC_0(VAR_16->rtc))
  return FUNC_1(VAR_16->rtc);


 VAR_16->rtc->uie_unsupported = 1;

 if (VAR_18 & VAR_7)
  FUNC_9(VAR_16->rtc, 1, VAR_4);

 return 0;
}
