
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pluto {TYPE_4__* fe; int dvb_adapter; TYPE_1__* pdev; int i2c_adap; } ;
struct TYPE_8__ {int set_params; } ;
struct TYPE_9__ {int (* release ) (TYPE_4__*) ;TYPE_2__ tuner_ops; } ;
struct TYPE_10__ {TYPE_3__ ops; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct pluto *VAR_3)
{
 int VAR_4;

 VAR_3->fe = FUNC_3(&VAR_2, &VAR_3->i2c_adap);
 if (!VAR_3->fe) {
  FUNC_0(&VAR_3->pdev->dev, "could not attach frontend\n");
  return -VAR_0;
 }
 VAR_3->fe->ops.tuner_ops.set_params = VAR_1;

 VAR_4 = FUNC_1(&VAR_3->dvb_adapter, VAR_3->fe);
 if (VAR_4 < 0) {
  if (VAR_3->fe->ops.release)
   VAR_3->fe->ops.release(VAR_3->fe);
  return VAR_4;
 }

 return 0;
}
