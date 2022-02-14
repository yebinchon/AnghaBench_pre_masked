
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int transfer_buffer_length; int pipe; } ;
struct list_head {int dummy; } ;
struct fotg210_hcd {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;



 struct fotg210_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_3 (struct fotg210_hcd*,struct urb*,int ) ;
 int FUNC_4 (struct fotg210_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_5 (struct fotg210_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_2, struct urb *VAR_3,
  gfp_t VAR_4)
{
 struct fotg210_hcd *VAR_5 = FUNC_1(VAR_2);
 struct list_head VAR_6;

 FUNC_0(&VAR_6);

 switch (FUNC_6(VAR_3->pipe)) {
 case 130:



  if (VAR_3->transfer_buffer_length > (16 * 1024))
   return -VAR_0;


 default:
  if (!FUNC_4(VAR_5, VAR_3, &VAR_6, VAR_4))
   return -VAR_1;
  return FUNC_5(VAR_5, VAR_3, &VAR_6, VAR_4);

 case 129:
  if (!FUNC_4(VAR_5, VAR_3, &VAR_6, VAR_4))
   return -VAR_1;
  return FUNC_2(VAR_5, VAR_3, &VAR_6, VAR_4);

 case 128:
  return FUNC_3(VAR_5, VAR_3, VAR_4);
 }
}
