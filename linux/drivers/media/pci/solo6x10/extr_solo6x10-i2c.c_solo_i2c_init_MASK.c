
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct solo_dev {int i2c_id; struct i2c_adapter* i2c_adap; TYPE_2__* pdev; int i2c_mutex; int i2c_wait; int i2c_state; } ;
struct TYPE_3__ {int * parent; } ;
struct i2c_adapter {int retries; struct solo_dev* algo_data; TYPE_1__ dev; int * algo; int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char*,char*,int) ;
 int VAR_6 ;
 int FUNC_6 (struct solo_dev*,int ,int) ;

int FUNC_7(struct solo_dev *VAR_7)
{
 int VAR_8;
 int VAR_9;

 FUNC_6(VAR_7, VAR_4,
         FUNC_0(8) | VAR_5);

 VAR_7->i2c_id = -1;
 VAR_7->i2c_state = VAR_1;
 FUNC_3(&VAR_7->i2c_wait);
 FUNC_4(&VAR_7->i2c_mutex);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct i2c_adapter *VAR_10 = &VAR_7->i2c_adap[VAR_8];

  FUNC_5(VAR_10->name, VAR_0, "%s I2C %d",
    VAR_2, VAR_8);
  VAR_10->algo = &VAR_6;
  VAR_10->algo_data = VAR_7;
  VAR_10->retries = 1;
  VAR_10->dev.parent = &VAR_7->pdev->dev;

  VAR_9 = FUNC_1(VAR_10);
  if (VAR_9) {
   VAR_10->algo_data = ((void*)0);
   break;
  }
 }

 if (VAR_9) {
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if (!VAR_7->i2c_adap[VAR_8].algo_data)
    break;
   FUNC_2(&VAR_7->i2c_adap[VAR_8]);
   VAR_7->i2c_adap[VAR_8].algo_data = ((void*)0);
  }
  return VAR_9;
 }

 return 0;
}
