
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; int irq; } ;
struct hym8563 {int valid; TYPE_1__* rtc; struct i2c_client* client; } ;
struct TYPE_4__ {int uie_unsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (int *,int) ;
 struct hym8563* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int,int ,struct hym8563*) ;
 TYPE_1__* FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct hym8563*) ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct i2c_client*,struct hym8563*) ;
 int FUNC_11 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct hym8563 *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->client = VAR_9;
 FUNC_10(VAR_9, VAR_11);

 FUNC_4(&VAR_9->dev, 1);

 VAR_12 = FUNC_9(VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_9->dev, "could not init device, %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_9->irq > 0) {
  VAR_12 = FUNC_6(&VAR_9->dev, VAR_9->irq,
      ((void*)0), VAR_7,
      VAR_5 | VAR_4,
      VAR_9->name, VAR_11);
  if (VAR_12 < 0) {
   FUNC_3(&VAR_9->dev, "irq %d request failed, %d\n",
    VAR_9->irq, VAR_12);
   return VAR_12;
  }
 }


 VAR_12 = FUNC_11(VAR_9, VAR_2);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11->valid = !(VAR_12 & VAR_3);
 FUNC_2(&VAR_9->dev, "rtc information is %s\n",
  VAR_11->valid ? "valid" : "invalid");

 VAR_11->rtc = FUNC_7(&VAR_9->dev, VAR_9->name,
      &VAR_8, VAR_6);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);


 VAR_11->rtc->uie_unsupported = 1;





 return 0;
}
