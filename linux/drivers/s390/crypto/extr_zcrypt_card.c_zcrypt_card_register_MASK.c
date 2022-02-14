
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zcrypt_card {int online; TYPE_3__* card; int list; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct TYPE_6__ {int id; TYPE_2__ ap_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct zcrypt_card *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_4->card->ap_dev.device.kobj,
    &VAR_1);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_4->list, &VAR_2);
 FUNC_3(&VAR_3);

 VAR_4->online = 1;

 FUNC_0(VAR_0, "card=%02x register online=1\n", VAR_4->card->id);

 return VAR_5;
}
