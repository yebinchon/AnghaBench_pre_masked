
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int rh_numports; int port_c_suspend; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (struct uhci_hcd*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct uhci_hcd *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->rh_numports; ++VAR_4) {
  if ((FUNC_1(VAR_3, VAR_1 + VAR_4 * 2) &
    (VAR_2 | VAR_0)) ||
    FUNC_0(VAR_4, &VAR_3->port_c_suspend))
   return 1;
 }
 return 0;
}
