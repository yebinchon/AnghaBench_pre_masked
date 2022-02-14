
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct isci_remote_device {int owning_port; int flags; int domain_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(
 struct isci_remote_device *VAR_1,
 u32 VAR_2)
{
 if (FUNC_0(VAR_1->domain_dev)) {
  if (VAR_2) {
   if (FUNC_3(VAR_0,
          &VAR_1->flags))
    return;
  } else if (!FUNC_2(VAR_0,
            &VAR_1->flags))
   return;

  FUNC_1(VAR_1->owning_port,
          VAR_2);
 }
}
