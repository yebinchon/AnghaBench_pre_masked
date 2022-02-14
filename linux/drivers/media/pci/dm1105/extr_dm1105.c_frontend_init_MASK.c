
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dm1105_dev {int boardnr; TYPE_3__* fe; int dvb_adapter; TYPE_1__* pdev; int i2c_adap; int i2c_bb_adap; } ;
struct TYPE_7__ {int (* release ) (TYPE_3__*) ;void* set_voltage; } ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {int dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dm1105_dev*,int ) ;
 int FUNC_2 (struct dm1105_dev*,int ,int) ;
 int FUNC_3 (struct dm1105_dev*,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (int ,TYPE_3__*,int,...) ;
 int VAR_6 ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_8(struct dm1105_dev *VAR_18)
{
 int VAR_19;

 switch (VAR_18->boardnr) {
 case 128:
  FUNC_2(VAR_18, VAR_2, 1);
  FUNC_1(VAR_18, VAR_2);
  FUNC_6(100);
  FUNC_3(VAR_18, VAR_2);
  FUNC_6(200);
  VAR_18->fe = FUNC_4(
   VAR_16, &VAR_12,
   VAR_18->i2c_bb_adap);
  if (VAR_18->fe) {
   VAR_18->fe->ops.set_voltage = VAR_4;
   FUNC_4(VAR_6, VAR_18->fe, 0x60,
     &VAR_18->i2c_bb_adap, VAR_0);
   break;
  }

  VAR_18->fe = FUNC_4(
   VAR_15, &VAR_9,
   VAR_18->i2c_bb_adap);
  if (VAR_18->fe) {
   VAR_18->fe->ops.set_voltage = VAR_4;
   FUNC_4(VAR_14, VAR_18->fe, 0x61,
     &VAR_18->i2c_bb_adap);
   break;
  }

  VAR_18->fe = FUNC_4(
   VAR_13, &VAR_10,
   VAR_18->i2c_bb_adap);
  if (VAR_18->fe)
   VAR_18->fe->ops.set_voltage = VAR_4;
  break;
 case 129:
  VAR_18->fe = FUNC_4(
   VAR_3, &VAR_11,
   VAR_18->i2c_adap);
  if (VAR_18->fe) {
   VAR_18->fe->ops.set_voltage = VAR_4;
   break;
  }

  VAR_18->fe = FUNC_4(
   VAR_5, &VAR_7,
   VAR_18->i2c_adap);
  if (VAR_18->fe) {
   FUNC_4(VAR_17, VAR_18->fe,
    VAR_8, &VAR_18->i2c_adap);
   VAR_18->fe->ops.set_voltage = VAR_4;
  }

  break;
 case 130:
 case 131:
 default:
  VAR_18->fe = FUNC_4(
   VAR_16, &VAR_12,
   VAR_18->i2c_adap);
  if (VAR_18->fe) {
   VAR_18->fe->ops.set_voltage = VAR_4;
   FUNC_4(VAR_6, VAR_18->fe, 0x60,
     &VAR_18->i2c_adap, VAR_0);
   break;
  }

  VAR_18->fe = FUNC_4(
   VAR_15, &VAR_9,
   VAR_18->i2c_adap);
  if (VAR_18->fe) {
   VAR_18->fe->ops.set_voltage = VAR_4;
   FUNC_4(VAR_14, VAR_18->fe, 0x61,
     &VAR_18->i2c_adap);
   break;
  }

  VAR_18->fe = FUNC_4(
   VAR_13, &VAR_10,
   VAR_18->i2c_adap);
  if (VAR_18->fe)
   VAR_18->fe->ops.set_voltage = VAR_4;

 }

 if (!VAR_18->fe) {
  FUNC_0(&VAR_18->pdev->dev, "could not attach frontend\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_5(&VAR_18->dvb_adapter, VAR_18->fe);
 if (VAR_19 < 0) {
  if (VAR_18->fe->ops.release)
   VAR_18->fe->ops.release(VAR_18->fe);
  VAR_18->fe = ((void*)0);
  return VAR_19;
 }

 return 0;
}
