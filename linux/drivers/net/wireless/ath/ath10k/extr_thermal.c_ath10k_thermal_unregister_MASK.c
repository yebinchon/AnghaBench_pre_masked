
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cdev; } ;
struct TYPE_4__ {int svc_map; } ;
struct ath10k {TYPE_3__ thermal; TYPE_2__* dev; TYPE_1__ wmi; } ;
struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ath10k *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1->wmi.svc_map))
  return;

 FUNC_0(&VAR_1->dev->kobj, "cooling_device");
 FUNC_2(VAR_1->thermal.cdev);
}
