
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; } ;
struct urb {int pipe; int dev; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 size_t FUNC_0 (int *) ;
 struct usb_host_endpoint* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(const struct urb *VAR_2)
{
 const struct usb_host_endpoint *VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev, VAR_2->pipe);
 if (!VAR_3)
  return -VAR_0;
 if (FUNC_2(VAR_2->pipe) != VAR_1[FUNC_0(&VAR_3->desc)])
  return -VAR_0;
 return 0;
}
