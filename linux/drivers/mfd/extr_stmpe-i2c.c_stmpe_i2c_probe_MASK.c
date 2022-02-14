
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; int irq; } ;
typedef enum stmpe_partnum { ____Placeholder_stmpe_partnum } stmpe_partnum ;
struct TYPE_3__ {int * dev; struct i2c_client* client; int irq; void* data; } ;


 int FUNC_0 (int *,char*) ;
 TYPE_1__ VAR_0 ;
 struct of_device_id* FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(struct i2c_client *VAR_2, const struct i2c_device_id *VAR_3)
{
 enum stmpe_partnum VAR_4;
 const struct of_device_id *VAR_5;

 VAR_0.data = (void *)VAR_3;
 VAR_0.irq = VAR_2->irq;
 VAR_0.client = VAR_2;
 VAR_0.dev = &VAR_2->dev;

 VAR_5 = FUNC_1(VAR_1, &VAR_2->dev);
 if (!VAR_5) {




  FUNC_0(&VAR_2->dev, "matching on node name, compatible is preferred\n");
  VAR_4 = VAR_3->driver_data;
 } else
  VAR_4 = (enum stmpe_partnum)VAR_5->data;

 return FUNC_2(&VAR_0, VAR_4);
}
