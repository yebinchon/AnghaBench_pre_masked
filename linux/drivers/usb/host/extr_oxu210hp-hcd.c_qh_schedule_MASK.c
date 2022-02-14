
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {int dummy; } ;
struct ehci_qh {unsigned int start; unsigned int period; int hw_info2; int hw_next; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct oxu_hcd*,unsigned int,unsigned int,struct ehci_qh*,int *) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct oxu_hcd*,char*,struct ehci_qh*) ;
 int FUNC_5 (struct oxu_hcd*,struct ehci_qh*) ;
 int FUNC_6 (struct oxu_hcd*,struct ehci_qh*) ;

__attribute__((used)) static int FUNC_7(struct oxu_hcd *VAR_4, struct ehci_qh *VAR_5)
{
 int VAR_6;
 unsigned VAR_7;
 __le32 VAR_8;
 unsigned VAR_9;

 FUNC_6(VAR_4, VAR_5);
 VAR_5->hw_next = VAR_0;
 VAR_9 = VAR_5->start;


 if (VAR_9 < VAR_5->period) {
  VAR_7 = FUNC_2(FUNC_3(&VAR_5->hw_info2) & VAR_3);
  VAR_6 = FUNC_0(VAR_4, VAR_9, --VAR_7,
    VAR_5, &VAR_8);
 } else {
  VAR_7 = 0;
  VAR_8 = 0;
  VAR_6 = -VAR_1;
 }




 if (VAR_6) {

  if (VAR_5->period) {
   VAR_9 = VAR_5->period - 1;
   do {
    for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
     VAR_6 = FUNC_0(VAR_4,
       VAR_9, VAR_7, VAR_5,
       &VAR_8);
     if (VAR_6 == 0)
      break;
    }
   } while (VAR_6 && VAR_9--);


  } else {
   VAR_9 = 0;
   VAR_6 = FUNC_0(VAR_4, 0, 0, VAR_5, &VAR_8);
  }
  if (VAR_6)
   goto done;
  VAR_5->start = VAR_9;


  VAR_5->hw_info2 &= FUNC_1(~(VAR_2 | VAR_3));
  VAR_5->hw_info2 |= VAR_5->period
   ? FUNC_1(1 << VAR_7)
   : FUNC_1(VAR_3);
  VAR_5->hw_info2 |= VAR_8;
 } else
  FUNC_4(VAR_4, "reused qh %p schedule\n", VAR_5);


 VAR_6 = FUNC_5(VAR_4, VAR_5);
done:
 return VAR_6;
}
