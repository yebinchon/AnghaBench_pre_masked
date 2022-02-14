
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_os_desc_ext_prop {int data_len; scalar_t__ type; int data; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 struct usb_os_desc_ext_prop* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_3, char *VAR_4)
{
 struct usb_os_desc_ext_prop *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = VAR_5->data_len;

 if (VAR_5->type == VAR_0 ||
     VAR_5->type == VAR_1 ||
     VAR_5->type == VAR_2)
  VAR_6 >>= 1;
 FUNC_0(VAR_4, VAR_5->data, VAR_6);

 return VAR_6;
}
