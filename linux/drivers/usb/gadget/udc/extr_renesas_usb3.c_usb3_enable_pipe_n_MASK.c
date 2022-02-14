
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int dummy; } ;
struct renesas_usb3_ep {int num; int dir_in; } ;
struct renesas_usb3 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct renesas_usb3_ep*,struct usb_endpoint_descriptor const*) ;
 struct renesas_usb3* FUNC_3 (struct renesas_usb3_ep*) ;
 int FUNC_4 (struct renesas_usb3*,int ) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3*,int ,int ) ;
 int FUNC_7 (struct renesas_usb3*,int ,int ) ;
 int FUNC_8 (struct renesas_usb3_ep*,struct usb_endpoint_descriptor const*) ;
 int FUNC_9 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_10(struct renesas_usb3_ep *VAR_3,
         const struct usb_endpoint_descriptor *VAR_4)
{
 struct renesas_usb3 *VAR_5 = FUNC_3(VAR_3);
 unsigned long VAR_6;

 VAR_3->dir_in = FUNC_9(VAR_4);

 FUNC_0(&VAR_5->lock, VAR_6);
 if (!FUNC_4(VAR_5, VAR_3->num)) {
  FUNC_8(VAR_3, VAR_4);
  FUNC_7(VAR_5, FUNC_2(VAR_3, VAR_4),
      VAR_2);
  FUNC_5(VAR_5);
  FUNC_6(VAR_5, VAR_0, VAR_1);
 }
 FUNC_1(&VAR_5->lock, VAR_6);

 return 0;
}
