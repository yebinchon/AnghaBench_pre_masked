
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zcrypt_card {int dummy; } ;
struct ap_device {int device; } ;
struct TYPE_2__ {struct zcrypt_card* private; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (struct zcrypt_card*) ;

__attribute__((used)) static void FUNC_2(struct ap_device *VAR_0)
{
 struct zcrypt_card *VAR_1 = FUNC_0(&VAR_0->device)->private;

 if (VAR_1)
  FUNC_1(VAR_1);
}
