
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct set_config_request {int config; int work; int node; struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct set_config_request* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*) ;

int FUNC_7(struct usb_device *VAR_5, int VAR_6)
{
 struct set_config_request *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->udev = VAR_5;
 VAR_7->config = VAR_6;
 FUNC_0(&VAR_7->work, VAR_2);

 FUNC_4(&VAR_4);
 FUNC_2(&VAR_7->node, &VAR_3);
 FUNC_5(&VAR_4);

 FUNC_6(VAR_5);
 FUNC_3(&VAR_7->work);
 return 0;
}
