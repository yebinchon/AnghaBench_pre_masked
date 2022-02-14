
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_request {int actual; int length; scalar_t__ buf; int status; } ;
struct cdns3_request {int flags; int list; struct usb_request request; } ;
struct cdns3_endpoint {int wa2_counter; int endpoint; int wa2_descmiss_req_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct usb_request*) ;
 struct cdns3_request* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_6(struct cdns3_endpoint *VAR_3,
      struct usb_request *VAR_4)
{
 struct usb_request *VAR_5;
 struct cdns3_request *VAR_6;

 while (!FUNC_4(&VAR_3->wa2_descmiss_req_list)) {
  int VAR_7;
  int VAR_8;

  VAR_6 =
   FUNC_1(&VAR_3->wa2_descmiss_req_list);
  VAR_5 = &VAR_6->request;


  if (VAR_6->flags & VAR_2)
   break;

  VAR_7 = VAR_6->flags & VAR_1;
  VAR_8 = VAR_4->actual + VAR_5->actual;

  VAR_4->status = VAR_5->status;

  if (VAR_8 <= VAR_4->length) {
   FUNC_5(&((u8 *)VAR_4->buf)[VAR_4->actual],
          VAR_5->buf,
          VAR_5->actual);
   VAR_4->actual = VAR_8;
  } else {

   VAR_4->status = -VAR_0;
  }

  FUNC_3(&VAR_6->list);

  FUNC_2(VAR_5->buf);
  FUNC_0(&VAR_3->endpoint, VAR_5);
  --VAR_3->wa2_counter;

  if (!VAR_7)
   break;
 }
}
