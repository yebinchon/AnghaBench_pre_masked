
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {struct ffs_data* context; } ;
struct usb_ep {int dummy; } ;
struct ffs_data {int ep0req_completion; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct ffs_data *VAR_2 = VAR_1->context;

 FUNC_0(&VAR_2->ep0req_completion);
}
