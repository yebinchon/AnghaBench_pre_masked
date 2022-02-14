
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idt_89hpesx_dev {int smb_mtx; int smb_write; int smb_read; TYPE_1__* client; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; struct i2c_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct i2c_adapter*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct idt_89hpesx_dev *VAR_17)
{
 struct i2c_adapter *VAR_18 = VAR_17->client->adapter;
 struct device *VAR_19 = &VAR_17->client->dev;


 if (FUNC_3(VAR_18,
        VAR_1)) {
  VAR_17->smb_read = VAR_9;
  FUNC_0(VAR_19, "SMBus block-read op chosen");
 } else if (FUNC_3(VAR_18,
        VAR_3)) {
  VAR_17->smb_read = VAR_11;
  FUNC_0(VAR_19, "SMBus i2c-block-read op chosen");
 } else if (FUNC_3(VAR_18,
        VAR_4) &&
     FUNC_3(VAR_18,
        VAR_2)) {
  VAR_17->smb_read = VAR_12;
  FUNC_2(VAR_19, "Use slow word/byte SMBus read ops");
 } else if (FUNC_3(VAR_18,
        VAR_2)) {
  VAR_17->smb_read = VAR_10;
  FUNC_2(VAR_19, "Use slow byte SMBus read op");
 } else {
  FUNC_1(VAR_19, "No supported SMBus read op");
  return -VAR_0;
 }


 if (FUNC_3(VAR_18,
        VAR_5)) {
  VAR_17->smb_write = VAR_13;
  FUNC_0(VAR_19, "SMBus block-write op chosen");
 } else if (FUNC_3(VAR_18,
        VAR_7)) {
  VAR_17->smb_write = VAR_15;
  FUNC_0(VAR_19, "SMBus i2c-block-write op chosen");
 } else if (FUNC_3(VAR_18,
        VAR_8) &&
     FUNC_3(VAR_18,
        VAR_6)) {
  VAR_17->smb_write = VAR_16;
  FUNC_2(VAR_19, "Use slow word/byte SMBus write op");
 } else if (FUNC_3(VAR_18,
        VAR_6)) {
  VAR_17->smb_write = VAR_14;
  FUNC_2(VAR_19, "Use slow byte SMBus write op");
 } else {
  FUNC_1(VAR_19, "No supported SMBus write op");
  return -VAR_0;
 }


 FUNC_4(&VAR_17->smb_mtx);

 return 0;
}
