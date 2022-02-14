
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_12__ {int name; TYPE_1__ dev; TYPE_5__* algo_data; int owner; } ;
struct TYPE_11__ {struct igb_adapter* data; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_3__ mac; } ;
struct igb_adapter {TYPE_6__ i2c_adap; TYPE_2__* pdev; TYPE_5__ i2c_algo; TYPE_4__ hw; } ;
typedef int s32 ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static s32 FUNC_2(struct igb_adapter *VAR_3)
{
 s32 VAR_4 = 0;


 if (VAR_3->hw.mac.type != VAR_1)
  return 0;





 VAR_3->i2c_adap.owner = VAR_0;
 VAR_3->i2c_algo = VAR_2;
 VAR_3->i2c_algo.data = VAR_3;
 VAR_3->i2c_adap.algo_data = &VAR_3->i2c_algo;
 VAR_3->i2c_adap.dev.parent = &VAR_3->pdev->dev;
 FUNC_1(VAR_3->i2c_adap.name, "igb BB",
  sizeof(VAR_3->i2c_adap.name));
 VAR_4 = FUNC_0(&VAR_3->i2c_adap);
 return VAR_4;
}
