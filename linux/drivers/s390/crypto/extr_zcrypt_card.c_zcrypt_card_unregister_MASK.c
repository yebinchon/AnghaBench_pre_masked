
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zcrypt_card {TYPE_3__* card; int list; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct TYPE_6__ {TYPE_2__ ap_dev; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(struct zcrypt_card *VAR_3)
{
 FUNC_0(VAR_0, "card=%02x unregister\n", VAR_3->card->id);

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3->list);
 FUNC_3(&VAR_2);
 FUNC_4(&VAR_3->card->ap_dev.device.kobj,
      &VAR_1);
}
