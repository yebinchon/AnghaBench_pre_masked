
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {struct stk1160* algo_data; int name; TYPE_1__ dev; } ;
struct TYPE_8__ {TYPE_2__* adapter; } ;
struct stk1160 {TYPE_2__ i2c_adap; TYPE_4__ i2c_client; int v4l2_dev; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct stk1160*,scalar_t__,int) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct stk1160 *VAR_4)
{
 int VAR_5;

 VAR_4->i2c_adap = VAR_2;
 VAR_4->i2c_adap.dev.parent = VAR_4->dev;
 FUNC_4(VAR_4->i2c_adap.name, "stk1160", sizeof(VAR_4->i2c_adap.name));
 VAR_4->i2c_adap.algo_data = VAR_4;

 FUNC_1(&VAR_4->i2c_adap, &VAR_4->v4l2_dev);

 VAR_5 = FUNC_0(&VAR_4->i2c_adap);
 if (VAR_5 < 0) {
  FUNC_2("cannot add i2c adapter (%d)\n", VAR_5);
  return VAR_5;
 }

 VAR_4->i2c_client = VAR_3;
 VAR_4->i2c_client.adapter = &VAR_4->i2c_adap;


 FUNC_3(VAR_4, VAR_1, 0x0f);


 FUNC_3(VAR_4, VAR_0 + 3, 0x00);

 return 0;
}
