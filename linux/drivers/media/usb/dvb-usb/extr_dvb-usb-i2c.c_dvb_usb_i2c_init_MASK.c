
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * parent; } ;
struct TYPE_11__ {TYPE_3__ dev; int * algo_data; int * algo; int name; } ;
struct TYPE_8__ {int caps; int * i2c_algo; } ;
struct dvb_usb_device {int state; TYPE_5__ i2c_adap; TYPE_4__* udev; TYPE_2__ props; TYPE_1__* desc; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,struct dvb_usb_device*) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct dvb_usb_device *VAR_3)
{
 int VAR_4 = 0;

 if (!(VAR_3->props.caps & VAR_0))
  return 0;

 if (VAR_3->props.i2c_algo == ((void*)0)) {
  FUNC_0("no i2c algorithm specified");
  return -VAR_2;
 }

 FUNC_3(VAR_3->i2c_adap.name, VAR_3->desc->name, sizeof(VAR_3->i2c_adap.name));
 VAR_3->i2c_adap.algo = VAR_3->props.i2c_algo;
 VAR_3->i2c_adap.algo_data = ((void*)0);
 VAR_3->i2c_adap.dev.parent = &VAR_3->udev->dev;

 FUNC_2(&VAR_3->i2c_adap, VAR_3);

 if ((VAR_4 = FUNC_1(&VAR_3->i2c_adap)) < 0)
  FUNC_0("could not add i2c adapter");

 VAR_3->state |= VAR_1;

 return VAR_4;
}
