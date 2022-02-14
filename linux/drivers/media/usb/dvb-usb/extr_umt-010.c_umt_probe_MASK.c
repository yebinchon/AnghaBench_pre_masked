
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct usb_interface*,int *,int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_4,
  const struct usb_device_id *VAR_5)
{
 if (0 == FUNC_0(VAR_4, &VAR_3,
         VAR_1, ((void*)0), VAR_2))
  return 0;
 return -VAR_0;
}
