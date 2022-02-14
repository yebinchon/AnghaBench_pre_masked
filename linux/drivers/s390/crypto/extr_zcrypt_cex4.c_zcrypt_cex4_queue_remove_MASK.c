
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_queue {int dummy; } ;
struct ap_queue {TYPE_1__* card; struct zcrypt_queue* private; } ;
struct TYPE_4__ {int kobj; } ;
struct ap_device {TYPE_2__ device; } ;
struct TYPE_3__ {int functions; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct ap_queue* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct zcrypt_queue*) ;

__attribute__((used)) static void FUNC_4(struct ap_device *VAR_2)
{
 struct ap_queue *VAR_3 = FUNC_2(&VAR_2->device);
 struct zcrypt_queue *VAR_4 = VAR_3->private;

 if (FUNC_0(&VAR_3->card->functions, VAR_0))
  FUNC_1(&VAR_2->device.kobj, &VAR_1);
 if (VAR_4)
  FUNC_3(VAR_4);
}
