
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int (* resume_detect_interrupts_are_broken ) (struct uhci_hcd*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uhci_hcd*) ;
 scalar_t__ FUNC_1 (struct uhci_hcd*) ;

__attribute__((used)) static int FUNC_2(struct uhci_hcd *VAR_1)
{






 if (VAR_0 || FUNC_1(VAR_1))
  return 1;

 return VAR_1->resume_detect_interrupts_are_broken ?
  VAR_1->resume_detect_interrupts_are_broken(VAR_1) : 0;
}
