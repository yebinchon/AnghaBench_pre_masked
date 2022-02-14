
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ length; int status; int buf; } ;
struct usb_ep {int name; } ;
struct fsg_dev {struct usb_ep* bulk_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsg_dev*,char*,int ,int) ;
 int FUNC_1 (struct fsg_dev*,char*,int ,scalar_t__) ;
 int FUNC_2 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct fsg_dev *VAR_3, struct usb_ep *VAR_4,
      struct usb_request *VAR_5)
{
 int VAR_6;

 if (VAR_4 == VAR_3->bulk_in)
  FUNC_1(VAR_3, "bulk-in", VAR_5->buf, VAR_5->length);

 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2);
 if (VAR_6) {


  VAR_5->status = VAR_6;





  if (VAR_6 != -VAR_1 &&
    !(VAR_6 == -VAR_0 && VAR_5->length == 0))
   FUNC_0(VAR_3, "error in submission: %s --> %d\n",
     VAR_4->name, VAR_6);
 }
 return VAR_6;
}
