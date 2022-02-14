
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; TYPE_4__* adapter; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {struct tm6000_core* algo_data; int name; TYPE_1__ dev; int * algo; int owner; } ;
struct tm6000_core {char* name; TYPE_3__ i2c_client; TYPE_4__ i2c_adap; int v4l2_dev; TYPE_2__* udev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct tm6000_core*) ;

int FUNC_4(struct tm6000_core *VAR_3)
{
 int VAR_4;

 VAR_3->i2c_adap.owner = VAR_1;
 VAR_3->i2c_adap.algo = &VAR_2;
 VAR_3->i2c_adap.dev.parent = &VAR_3->udev->dev;
 FUNC_2(VAR_3->i2c_adap.name, VAR_3->name, sizeof(VAR_3->i2c_adap.name));
 VAR_3->i2c_adap.algo_data = VAR_3;
 FUNC_1(&VAR_3->i2c_adap, &VAR_3->v4l2_dev);
 VAR_4 = FUNC_0(&VAR_3->i2c_adap);
 if (VAR_4)
  return VAR_4;

 VAR_3->i2c_client.adapter = &VAR_3->i2c_adap;
 FUNC_2(VAR_3->i2c_client.name, "tm6000 internal", VAR_0);
 FUNC_3(VAR_3);

 return 0;
}
