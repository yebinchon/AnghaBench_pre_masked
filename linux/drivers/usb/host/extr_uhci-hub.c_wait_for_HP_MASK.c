
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct uhci_hcd*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct uhci_hcd *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 10; VAR_3 < 250; VAR_3 += 10) {
  if (FUNC_1(VAR_1, VAR_2) & VAR_0)
   return;
  FUNC_0(10);
 }

}
