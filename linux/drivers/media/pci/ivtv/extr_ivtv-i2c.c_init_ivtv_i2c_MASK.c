
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * parent; } ;
struct TYPE_16__ {TYPE_1__ dev; scalar_t__ name; TYPE_5__* algo_data; } ;
struct TYPE_13__ {scalar_t__ newi2c; int i2c_clock_period; } ;
struct TYPE_14__ {TYPE_6__* adapter; } ;
struct TYPE_15__ {int udelay; struct ivtv* data; } ;
struct ivtv {int instance; TYPE_6__ i2c_adap; TYPE_3__ options; TYPE_2__* pdev; TYPE_4__ i2c_client; int v4l2_dev; TYPE_5__ i2c_algo; } ;
struct TYPE_12__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int *) ;
 TYPE_6__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_6 (struct ivtv*,int) ;
 int FUNC_7 (struct ivtv*,int) ;
 int FUNC_8 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

int FUNC_10(struct ivtv *VAR_7)
{
 int VAR_8;

 FUNC_1("i2c init\n");




 if (FUNC_0(VAR_2) != FUNC_0(VAR_1)) {
  FUNC_2("Mismatched I2C hardware arrays\n");
  return -VAR_0;
 }
 if (VAR_7->options.newi2c > 0) {
  VAR_7->i2c_adap = VAR_3;
 } else {
  VAR_7->i2c_adap = VAR_4;
  VAR_7->i2c_algo = VAR_5;
 }
 VAR_7->i2c_algo.udelay = VAR_7->options.i2c_clock_period / 2;
 VAR_7->i2c_algo.data = VAR_7;
 VAR_7->i2c_adap.algo_data = &VAR_7->i2c_algo;

 FUNC_8(VAR_7->i2c_adap.name + FUNC_9(VAR_7->i2c_adap.name), " #%d",
  VAR_7->instance);
 FUNC_5(&VAR_7->i2c_adap, &VAR_7->v4l2_dev);

 VAR_7->i2c_client = VAR_6;
 VAR_7->i2c_client.adapter = &VAR_7->i2c_adap;
 VAR_7->i2c_adap.dev.parent = &VAR_7->pdev->dev;

 FUNC_1("setting scl and sda to 1\n");
 FUNC_6(VAR_7, 1);
 FUNC_7(VAR_7, 1);

 if (VAR_7->options.newi2c > 0)
  VAR_8 = FUNC_3(&VAR_7->i2c_adap);
 else
  VAR_8 = FUNC_4(&VAR_7->i2c_adap);

 return VAR_8;
}
