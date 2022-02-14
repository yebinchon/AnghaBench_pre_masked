
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_9__ {TYPE_2__* adapter; int name; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_8__ {TYPE_6__* algo_data; int owner; int name; TYPE_1__ dev; } ;
struct TYPE_10__ {int udelay; struct cx88_core* data; } ;
struct cx88_core {char* name; scalar_t__ i2c_rc; int boardnr; TYPE_5__ i2c_client; TYPE_2__ i2c_adap; TYPE_6__ i2c_algo; int v4l2_dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx88_core*,int) ;
 int FUNC_1 (struct cx88_core*,int) ;
 TYPE_6__ VAR_2 ;
 int FUNC_2 (char*,TYPE_5__*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,struct i2c_msg*,int) ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int) ;

int FUNC_10(struct cx88_core *VAR_5, struct pci_dev *VAR_6)
{

 if (VAR_4 < 5)
  VAR_4 = 5;

 VAR_5->i2c_algo = VAR_2;

 VAR_5->i2c_adap.dev.parent = &VAR_6->dev;
 FUNC_9(VAR_5->i2c_adap.name, VAR_5->name, sizeof(VAR_5->i2c_adap.name));
 VAR_5->i2c_adap.owner = VAR_1;
 VAR_5->i2c_algo.udelay = VAR_4;
 VAR_5->i2c_algo.data = VAR_5;
 FUNC_5(&VAR_5->i2c_adap, &VAR_5->v4l2_dev);
 VAR_5->i2c_adap.algo_data = &VAR_5->i2c_algo;
 VAR_5->i2c_client.adapter = &VAR_5->i2c_adap;
 FUNC_9(VAR_5->i2c_client.name, "cx88xx internal", VAR_0);

 FUNC_0(VAR_5, 1);
 FUNC_1(VAR_5, 1);

 VAR_5->i2c_rc = FUNC_4(&VAR_5->i2c_adap);
 if (VAR_5->i2c_rc == 0) {
  static u8 VAR_7[] = {
   0x0b, 0xdc, 0x86, 0x52 };
  static struct i2c_msg VAR_8 = {
   .flags = 0,
   .addr = 0xc2 >> 1,
   .buf = VAR_7,
   .len = 4
  };

  FUNC_3(1, "i2c register ok\n");
  switch (VAR_5->boardnr) {
  case 130:
  case 129:
  case 128:
   FUNC_8("i2c init: enabling analog demod on HVR1300/3000/4000 tuner\n");
   FUNC_6(VAR_5->i2c_client.adapter, &VAR_8, 1);
   break;
  default:
   break;
  }
  if (VAR_3)
   FUNC_2(VAR_5->name, &VAR_5->i2c_client);
 } else
  FUNC_7("i2c register FAILED\n");

 return VAR_5->i2c_rc;
}
