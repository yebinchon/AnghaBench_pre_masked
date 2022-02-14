
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ehci_hcd {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct ehci_hcd*) ;
 TYPE_2__* FUNC_2 (struct ehci_hcd*) ;

__attribute__((used)) static inline void FUNC_3(struct ehci_hcd *VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_2)->self.controller;


 if (!FUNC_1(VAR_2))
  FUNC_0(VAR_3, &VAR_0);

 FUNC_0(VAR_3, &VAR_1);
}
