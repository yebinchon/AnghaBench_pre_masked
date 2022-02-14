
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_11__ {TYPE_1__ dev; TYPE_2__* algo_data; int owner; int name; } ;
struct TYPE_8__ {int udelay; int timeout; int (* setscl ) (struct savagefb_i2c_chan*,int) ;int (* setsda ) (struct savagefb_i2c_chan*,int) ;struct savagefb_i2c_chan* data; } ;
struct savagefb_i2c_chan {TYPE_4__* par; TYPE_5__ adapter; TYPE_2__ algo; } ;
struct TYPE_10__ {TYPE_3__* pcidev; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,struct savagefb_i2c_chan*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (struct savagefb_i2c_chan*,int) ;
 int FUNC_6 (struct savagefb_i2c_chan*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct savagefb_i2c_chan *VAR_1,
    const char *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->par) {
  FUNC_4(VAR_1->adapter.name, VAR_2);
  VAR_1->adapter.owner = VAR_0;
  VAR_1->adapter.algo_data = &VAR_1->algo;
  VAR_1->adapter.dev.parent = &VAR_1->par->pcidev->dev;
  VAR_1->algo.udelay = 10;
  VAR_1->algo.timeout = 20;
  VAR_1->algo.data = VAR_1;

  FUNC_3(&VAR_1->adapter, VAR_1);


  VAR_1->algo.setsda(VAR_1, 1);
  VAR_1->algo.setscl(VAR_1, 1);
  FUNC_7(20);

  VAR_3 = FUNC_2(&VAR_1->adapter);

  if (VAR_3 == 0)
   FUNC_0(&VAR_1->par->pcidev->dev,
    "I2C bus %s registered.\n", VAR_2);
  else
   FUNC_1(&VAR_1->par->pcidev->dev,
     "Failed to register I2C bus %s.\n", VAR_2);
 }

 return VAR_3;
}
