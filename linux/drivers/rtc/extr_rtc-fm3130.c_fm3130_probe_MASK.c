
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct fm3130 {size_t reg_addr_time; size_t reg_addr_alarm; int* regs; int alarm_valid; int data_valid; int rtc; TYPE_1__* msg; struct i2c_client* client; } ;
struct TYPE_2__ {int len; size_t* buf; void* flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_25 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct fm3130* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int VAR_26 ;
 int FUNC_8 (struct i2c_adapter*,int) ;
 int FUNC_9 (struct i2c_client*,struct fm3130*) ;
 void* FUNC_10 (struct i2c_client*,size_t) ;
 int FUNC_11 (struct i2c_client*,size_t,int) ;
 int FUNC_12 (struct i2c_adapter*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_27,
   const struct i2c_device_id *VAR_28)
{
 struct fm3130 *VAR_29;
 int VAR_30 = -VAR_1;
 int VAR_31;
 struct i2c_adapter *VAR_32 = VAR_27->adapter;

 if (!FUNC_8(VAR_32,
   VAR_22 | VAR_23))
  return -VAR_0;

 VAR_29 = FUNC_6(&VAR_27->dev, sizeof(struct fm3130), VAR_21);

 if (!VAR_29)
  return -VAR_2;

 VAR_29->client = VAR_27;
 FUNC_9(VAR_27, VAR_29);
 VAR_29->reg_addr_time = VAR_20;
 VAR_29->reg_addr_alarm = VAR_4;


 VAR_29->msg[0].addr = VAR_27->addr;
 VAR_29->msg[0].flags = 0;
 VAR_29->msg[0].len = 1;
 VAR_29->msg[0].buf = &VAR_29->reg_addr_time;

 VAR_29->msg[1].addr = VAR_27->addr;
 VAR_29->msg[1].flags = VAR_24;
 VAR_29->msg[1].len = VAR_8;
 VAR_29->msg[1].buf = &VAR_29->regs[VAR_20];


 VAR_29->msg[2].addr = VAR_27->addr;
 VAR_29->msg[2].flags = 0;
 VAR_29->msg[2].len = 1;
 VAR_29->msg[2].buf = &VAR_29->reg_addr_alarm;

 VAR_29->msg[3].addr = VAR_27->addr;
 VAR_29->msg[3].flags = VAR_24;
 VAR_29->msg[3].len = VAR_3;
 VAR_29->msg[3].buf = &VAR_29->regs[VAR_4];

 VAR_29->alarm_valid = 0;
 VAR_29->data_valid = 0;

 VAR_31 = FUNC_12(VAR_32, VAR_29->msg, 4);
 if (VAR_31 != 4) {
  FUNC_3(&VAR_27->dev, "read error %d\n", VAR_31);
  VAR_30 = -VAR_0;
  goto exit_free;
 }

 VAR_29->regs[VAR_9] =
  FUNC_10(VAR_27, VAR_9);
 VAR_29->regs[VAR_6] =
  FUNC_10(VAR_27, VAR_6);


 if (VAR_29->regs[VAR_9] & VAR_10) {
  FUNC_11(VAR_27, VAR_9,
   VAR_29->regs[VAR_9] &
    ~(VAR_10));
  FUNC_5(&VAR_27->dev, "Disabling calibration mode!\n");
 }


 if (VAR_29->regs[VAR_9] & VAR_14 ||
     VAR_29->regs[VAR_9] & VAR_13) {
  FUNC_11(VAR_27, VAR_9,
   VAR_29->regs[VAR_9] &
    ~(VAR_13 |
     VAR_14));
  FUNC_5(&VAR_27->dev, "Disabling READ or WRITE mode!\n");
 }


 if (VAR_29->regs[VAR_6] & VAR_7)
  FUNC_11(VAR_27, VAR_6,
   VAR_29->regs[VAR_6] &
    ~(VAR_7));


 if (VAR_29->regs[VAR_9] & VAR_11) {
  FUNC_11(VAR_27, VAR_9,
   VAR_29->regs[VAR_9] &
    ~(VAR_11));
  FUNC_5(&VAR_27->dev, "Low battery!\n");
 }


 if (VAR_29->regs[VAR_9] & VAR_12) {
  FUNC_11(VAR_27, VAR_9,
   VAR_29->regs[VAR_9] &
    ~VAR_12);
  FUNC_3(&VAR_27->dev, "POR bit is set\n");
 }

 FUNC_11(VAR_27, VAR_5, 0x80);


 VAR_31 = FUNC_2(VAR_29->regs[VAR_20] & 0x7f);
 if (VAR_31 > 59)
  goto bad_alarm;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_18] & 0x7f);
 if (VAR_31 > 59)
  goto bad_alarm;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_17] & 0x3f);
 if (VAR_31 > 23)
  goto bad_alarm;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_15] & 0x3f);
 if (VAR_31 == 0 || VAR_31 > 31)
  goto bad_alarm;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_19] & 0x1f);
 if (VAR_31 == 0 || VAR_31 > 12)
  goto bad_alarm;

 VAR_29->alarm_valid = 1;

bad_alarm:


 VAR_31 = FUNC_2(VAR_29->regs[VAR_20] & 0x7f);
 if (VAR_31 > 59)
  goto bad_clock;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_18] & 0x7f);
 if (VAR_31 > 59)
  goto bad_clock;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_17] & 0x3f);
 if (VAR_31 > 23)
  goto bad_clock;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_16] & 0x7);
 if (VAR_31 == 0 || VAR_31 > 7)
  goto bad_clock;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_15] & 0x3f);
 if (VAR_31 == 0 || VAR_31 > 31)
  goto bad_clock;

 VAR_31 = FUNC_2(VAR_29->regs[VAR_19] & 0x1f);
 if (VAR_31 == 0 || VAR_31 > 12)
  goto bad_clock;

 VAR_29->data_valid = 1;

bad_clock:

 if (!VAR_29->data_valid || !VAR_29->alarm_valid)
  FUNC_3(&VAR_27->dev, "%s: %15ph\n", "bogus registers",
   VAR_29->regs);



 VAR_29->rtc = FUNC_7(&VAR_27->dev, VAR_27->name,
    &VAR_26, VAR_25);
 if (FUNC_0(VAR_29->rtc)) {
  VAR_30 = FUNC_1(VAR_29->rtc);
  FUNC_4(&VAR_27->dev,
   "unable to register the class device\n");
  goto exit_free;
 }
 return 0;
exit_free:
 return VAR_30;
}
