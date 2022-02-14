
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct s3c_hsudc_req {int queue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct s3c_hsudc_req*) ;
 int FUNC_2 (int *) ;
 struct s3c_hsudc_req* FUNC_3 (struct usb_request*) ;

__attribute__((used)) static void FUNC_4(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct s3c_hsudc_req *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(!FUNC_2(&VAR_2->queue));
 FUNC_1(VAR_2);
}
