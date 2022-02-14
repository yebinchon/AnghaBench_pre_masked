
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int interval; } ;
struct uhci_qh {int period; int phase; int bandwidth_reserved; int skel; } ;
struct uhci_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct uhci_hcd*,struct uhci_qh*) ;
 int FUNC_2 (struct uhci_hcd*,struct uhci_qh*) ;
 int FUNC_3 (struct uhci_hcd*,struct urb*,struct uhci_qh*) ;

__attribute__((used)) static int FUNC_4(struct uhci_hcd *VAR_2, struct urb *VAR_3,
  struct uhci_qh *VAR_4)
{
 int VAR_5;






 if (!VAR_4->bandwidth_reserved) {
  int VAR_6;


  for (VAR_6 = 7; VAR_6 >= 0; --VAR_6) {
   if ((1 << VAR_6) <= VAR_3->interval)
    break;
  }
  if (VAR_6 < 0)
   return -VAR_0;


  do {
   VAR_4->period = 1 << VAR_6;
   VAR_4->skel = FUNC_0(VAR_6);




   VAR_4->phase = (VAR_4->period / 2) & (VAR_1 - 1);
   VAR_5 = FUNC_1(VAR_2, VAR_4);
  } while (VAR_5 != 0 && --VAR_6 >= 0);
  if (VAR_5)
   return VAR_5;
 } else if (VAR_4->period > VAR_3->interval)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == 0) {
  VAR_3->interval = VAR_4->period;
  if (!VAR_4->bandwidth_reserved)
   FUNC_2(VAR_2, VAR_4);
 }
 return VAR_5;
}
