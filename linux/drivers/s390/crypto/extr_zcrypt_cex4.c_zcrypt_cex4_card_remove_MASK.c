
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_card {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct ap_device {TYPE_1__ device; } ;
struct ap_card {int functions; struct zcrypt_card* private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct ap_card* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct zcrypt_card*) ;

__attribute__((used)) static void FUNC_4(struct ap_device *VAR_2)
{
 struct ap_card *VAR_3 = FUNC_2(&VAR_2->device);
 struct zcrypt_card *VAR_4 = VAR_3->private;

 if (FUNC_0(&VAR_3->functions, VAR_0))
  FUNC_1(&VAR_2->device.kobj, &VAR_1);
 if (VAR_4)
  FUNC_3(VAR_4);
}
