
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {scalar_t__ hcpriv; int pipe; } ;
struct fotg210_qh {int qh_state; } ;
struct fotg210_hcd {int lock; } ;
 int FUNC_0 (struct fotg210_hcd*,char*,struct fotg210_qh*,int ) ;
 struct fotg210_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_6 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_7 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 struct fotg210_hcd *VAR_3 = FUNC_1(VAR_0);
 struct fotg210_qh *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3->lock, VAR_5);
 VAR_6 = FUNC_7(VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  goto done;

 switch (FUNC_8(VAR_1->pipe)) {


 default:
  VAR_4 = (struct fotg210_qh *) VAR_1->hcpriv;
  if (!VAR_4)
   break;
  switch (VAR_4->qh_state) {
  case 130:
  case 132:
   FUNC_5(VAR_3, VAR_4);
   break;
  case 129:
  case 128:

   break;
  case 131:

   FUNC_2(VAR_3, VAR_4);
   break;
  }
  break;

 case 134:
  VAR_4 = (struct fotg210_qh *) VAR_1->hcpriv;
  if (!VAR_4)
   break;
  switch (VAR_4->qh_state) {
  case 130:
  case 132:
   FUNC_6(VAR_3, VAR_4);
   break;
  case 131:
   FUNC_2(VAR_3, VAR_4);
   break;
  default:
   FUNC_0(VAR_3, "bogus qh %p state %d\n",
     VAR_4, VAR_4->qh_state);
   goto done;
  }
  break;

 case 133:




  break;
 }
done:
 FUNC_4(&VAR_3->lock, VAR_5);
 return VAR_6;
}
