
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int rh_numports; int port_c_suspend; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (struct uhci_hcd*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct uhci_hcd *VAR_4, char *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_0;







 if (VAR_3)
  VAR_7 &= ~VAR_2;

 *VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->rh_numports; ++VAR_6) {
  if ((FUNC_1(VAR_4, VAR_1 + VAR_6 * 2) & VAR_7) ||
    FUNC_0(VAR_6, &VAR_4->port_c_suspend))
   *VAR_5 |= (1 << (VAR_6 + 1));
 }
 return !!*VAR_5;
}
