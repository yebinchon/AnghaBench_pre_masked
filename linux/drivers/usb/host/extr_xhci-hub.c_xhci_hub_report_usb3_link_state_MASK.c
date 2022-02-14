
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct xhci_hcd *VAR_8,
  u32 *VAR_9, u32 VAR_10)
{
 u32 VAR_11 = VAR_10 & VAR_1;





 if (VAR_11 == VAR_6) {
  *VAR_9 |= VAR_5;
  return;
 }




 if (VAR_10 & VAR_0) {







  if (VAR_11 != VAR_3 &&
      VAR_11 != VAR_4) {
   VAR_11 = VAR_3;
  }




  VAR_11 |= VAR_2;
 } else {
  if ((VAR_8->quirks & VAR_7) &&
    (VAR_11 == VAR_3))
   VAR_11 |= VAR_2;
 }


 *VAR_9 |= VAR_11;
}
