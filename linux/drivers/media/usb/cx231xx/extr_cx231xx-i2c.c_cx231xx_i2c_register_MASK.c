
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct TYPE_6__ {struct cx231xx_i2c* algo_data; int name; TYPE_1__ dev; } ;
struct cx231xx_i2c {int nr; scalar_t__ i2c_rc; TYPE_2__ i2c_adap; struct cx231xx* dev; } ;
struct cx231xx {char* name; int dev; int v4l2_dev; int cx231xx_send_usb_command; } ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int ,int,char*,char*,int) ;

int FUNC_5(struct cx231xx_i2c *VAR_1)
{
 struct cx231xx *VAR_2 = VAR_1->dev;

 FUNC_0(!VAR_2->cx231xx_send_usb_command);

 VAR_1->i2c_adap = VAR_0;
 VAR_1->i2c_adap.dev.parent = VAR_2->dev;

 FUNC_4(VAR_1->i2c_adap.name, sizeof(VAR_1->i2c_adap.name), "%s-%d", VAR_1->dev->name, VAR_1->nr);

 VAR_1->i2c_adap.algo_data = VAR_1;
 FUNC_3(&VAR_1->i2c_adap, &VAR_2->v4l2_dev);
 VAR_1->i2c_rc = FUNC_2(&VAR_1->i2c_adap);

 if (0 != VAR_1->i2c_rc)
  FUNC_1(VAR_2->dev,
    "i2c bus %d register FAILED\n", VAR_1->nr);

 return VAR_1->i2c_rc;
}
